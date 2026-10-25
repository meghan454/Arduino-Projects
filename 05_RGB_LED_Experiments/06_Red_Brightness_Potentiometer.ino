const int redPin = 9;
const int potPin = A0;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  int brightness = map(potValue, 0, 1023, 255, 0);

  analogWrite(redPin, brightness);
}
