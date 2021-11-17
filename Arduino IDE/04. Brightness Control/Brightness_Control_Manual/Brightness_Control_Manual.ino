void setup() {
  pinMode(D1, OUTPUT);
}

void loop() {
  analogWrite(D1, 0); // 0% brightness
  delay(500);
  analogWrite(D1, 127); // 50% brightness
  delay(500);
  analogWrite(D1, 255); // 100% brightness
  delay(500);
}
