

int LEDGreen=9;
int LEDBlue=10;
int LEDRed=11;

int sensorPin=0;
int val;


void setup(){
  Serial.begin(9600);
}

void loop(){
  
  val=analogRead(sensorPin);
  
  Serial.print("sensor = " );
  Serial.println(val);

  if (val<340) {
    analogWrite(LEDRed,255);
    analogWrite(LEDBlue,0); 
    analogWrite(LEDGreen,0);    
  } else if (val<680) {
    analogWrite(LEDRed,0);
    analogWrite(LEDBlue,255); 
    analogWrite(LEDGreen,0); 
  } else if (val<1024) {
    analogWrite(LEDRed,0);
    analogWrite(LEDBlue,0); 
    analogWrite(LEDGreen,255);  
  }
  delay(10);
}
