const int buttonPin = D2;     // the number of the pushbutton pin
const int ledPin =  D1;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
 
  if (buttonState == HIGH) {  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
    digitalWrite(ledPin, HIGH); // turn LED on:
  } 
  else {
    digitalWrite(ledPin, LOW); // turn LED off:
  }
}
