
float sdCircle(vec2 p, float r) {
 	return length(p) - r;
}

vec2 cMov(vec2 p, vec2 trans) {
 	return p - trans;   
}

vec4 cRep4(vec2 p, float n) {
    vec2 pn = p * n;
 	return vec4(fract(pn) * 2.0 - 1.0, floor(pn));   
}

vec2 cRot(vec2 xy, float angle) {
    float s = sin(angle);
    float c = cos(angle);
 	return xy * mat2(c, -s, s, c);
}

float asLine(float d) {
    return smoothstep(1.5,.0,abs(d));
}

float asFilled(float d) {
    return smoothstep(1.5,0., d);
} 

void mainImage( out vec4 fragColor, in vec2 fragCoord )
{
	vec2 uv = (2.*fragCoord - iResolution.xy) / iResolution.y;
    vec4 m =  (2.*iMouse  - iResolution.xyxy) / iResolution.y;
    
    uv = cRot(uv,-iTime/10.0);
    vec4 uv4 = cRep4(uv,1.0/(0.3 + sin(iTime*.6)*0.2));
 
    uv = uv4.xy; 
    float dist = length(uv4.zw);
    float id = 5.0*uv4.z+uv4.w;
    vec3 bgColour = vec3(1.0+uv4.z/16.0, 0.5+uv4.w/16.0, dist/iTime);
    
	float radius = 0.6 + sin(iTime * dist * max(1.0,3.0/(abs(id)+1.)) + atan(uv.x,uv.y)*min(10.0,abs(id)))*0.2;

    float d = sdCircle(uv, radius);
    uv = 1.-abs(uv); 
    d = uv.x>.1 && uv.y>.1 ? d / fwidth(d) : 1e5; 
    
    fragColor = vec4(bgColour * (abs(id)<10. ? asLine(d) : asFilled(d)),1);
}