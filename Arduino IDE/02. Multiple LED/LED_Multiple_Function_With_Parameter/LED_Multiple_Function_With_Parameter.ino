void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
}

void loop() {
  blinky(D1, 1000);
  blinky(D2, 1000);
  blinky(D3, 1000);
}

void blinky(int pin, int masa){
  digitalWrite(pin, HIGH);
  delay(masa);
  digitalWrite(pin, LOW);
  delay(masa);
}
