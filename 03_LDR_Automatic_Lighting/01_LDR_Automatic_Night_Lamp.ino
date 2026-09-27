const int LDR_PIN = A0;
const int LED_PIN = 9;
const int NIGHT_THRESHOLD = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);

  if (lightLevel < NIGHT_THRESHOLD) {
    analogWrite(LED_PIN, 255);
  } else {
    analogWrite(LED_PIN, 0);
  }

  delay(100);
}
