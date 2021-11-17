void setup() {
  pinMode(D1, OUTPUT);
}

void loop() {
  for(int brightness = 0; brightness <= 255; brightness++){   
    analogWrite(D1, brightness);
    delay(15);
  }
  delay(200);

  for(int brightness = 255; brightness >= 0; brightness--){   
    analogWrite(D1, brightness);
    delay(15);
  }
  delay(200);
}
