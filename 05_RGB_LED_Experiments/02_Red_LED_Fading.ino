const int redPin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  // Brighten
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(redPin, brightness);
    delay(5);
  }

  // Dim
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(redPin, brightness);
    delay(5);
  }
}
