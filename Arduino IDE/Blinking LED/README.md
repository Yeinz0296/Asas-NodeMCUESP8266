# Blinking LED
## BUILTIN LED

Just like Arduino, NodeMCU 8266 also got a built in LED

First we must declare the pinMode for the <code>LED_BUILTIN</code> as Output and set the output as <code>HIGH</code>
```ino
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
}
```
From that, the LED_BUILTIN will always turn on

Now we will turn on and off the <code>LED_BUILTIN</code> with given time a.k.a blinking
```ino
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
The LED will 

The complete code
```ino
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
