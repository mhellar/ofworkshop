// Author: @amagitakayosi
// Alternate version by Laura and dennis family
#ifdef GL_ES
precision mediump float;
#endif

uniform float time;
uniform vec2 resolution;

vec2 rot(in vec2 uv, in float t) {
    float c = sin(t), s = cos(t);
    uv.x=uv.x+.1*sin(t);
    uv.y=uv.y+.1*cos(t);
    return mat2(c, -s, s, c) * uv;
}

void main() {
    vec2 p = (gl_FragCoord.xy * 2. - resolution) / min(resolution.x, resolution.y);
    
    p = p * (length(p) + sin(time * 1.4) - .2);
    p = rot(p + .1, time + sin(time + (length(p) + 3.) * 4.) * .4);
    
    gl_FragColor = vec4(
                        sin(p.x * 1. + sin(p.x * 2. + time + 0.)) + cos(p.y * 6. + sin(p.y * 5. + time)),
                        sin(p.x * 0. + sin(p.y * 4. + time + 1.)) + cos(p.y * 5. + sin(p.x * 3. + time)),
                        sin(p.x * 9. + sin(p.x * 1. + time + 2.)) + cos(p.y * 1. + sin(p.y * 1. + time)),
                        1
                        );
}