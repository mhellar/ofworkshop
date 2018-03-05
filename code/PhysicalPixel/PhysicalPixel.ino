
const int redPin = 9; // the pin that the LED is attached to
const int bluePin = 10; // the pin that the LED is attached to
const int greenPin = 11; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a r , turn on the red LED:
    if (incomingByte == 'r') {
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, LOW);
      digitalWrite(redPin, HIGH);
    }
    // if it's a g , turn on the green LED:
    if (incomingByte == 'g') {
      digitalWrite(greenPin, HIGH);
      digitalWrite(bluePin, LOW);
      digitalWrite(redPin, LOW);
    }
    // if it's a b , turn on the blue LED:
    if (incomingByte == 'b') {
      digitalWrite(greenPin, LOW);
      digitalWrite(bluePin, HIGH);
      digitalWrite(redPin, LOW);
    }
  }
}


