void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
}

void loop() {
  blinky();
}

void blinky(){
  digitalWrite(D1, HIGH);
  delay(500);
  digitalWrite(D1, LOW);
  delay(500);

  digitalWrite(D2, HIGH);
  delay(500);
  digitalWrite(D2, LOW);
  delay(500);

  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);
  delay(500);
}
