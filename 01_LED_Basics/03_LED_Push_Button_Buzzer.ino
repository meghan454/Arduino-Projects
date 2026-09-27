const int BUTTON_PIN = 2;
const int LED_PIN = 13;
const int BUZZER_PIN = 8;

bool active = false;
int lastButtonState = HIGH;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && buttonState == LOW) {
    active = !active;
    digitalWrite(LED_PIN, active ? HIGH : LOW);
    digitalWrite(BUZZER_PIN, active ? HIGH : LOW);
    delay(30);
  }

  lastButtonState = buttonState;
}
