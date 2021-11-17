int red = D1;
int blue = D2;
int green = d3;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
  analogWrite(red, 50);
  analogWrite(blue, 100);
  analogWrite(green, 150);
}
