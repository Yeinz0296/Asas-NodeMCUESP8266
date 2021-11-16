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
From that, the <code>LED_BUILTIN</code> will always turn on

Now we will turn on and off the <code>LED_BUILTIN</code> with given time a.k.a blinking
```ino
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
The LED will blinking with the given set of time

The <code>1000</code> inside <code>delay(1000);</code> can be change into how long you want it to be

The complete code:
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

## LED

Now we will change the <code>LED_BUILTIN</code> into <code>D1</code> or any output pin

The complete code:
```ino
void setup() {
  pinMode(D1, OUTPUT);
}

void loop() {
  digitalWrite(D1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```
From this code, the LED will light up only at pin <code>D1</code>
