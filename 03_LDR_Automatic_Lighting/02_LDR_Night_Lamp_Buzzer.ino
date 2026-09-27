const int LDR_PIN = A0;
const int LED_PIN = 9;
const int BUZZER_PIN = 8;

const int NIGHT_THRESHOLD = 500;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(LDR_PIN);

  if (lightLevel < NIGHT_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);

    tone(BUZZER_PIN, 1000);   // 1 kHz buzzer
  } 
  else {
    digitalWrite(LED_PIN, LOW);

    noTone(BUZZER_PIN);
  }

  delay(100);
}
