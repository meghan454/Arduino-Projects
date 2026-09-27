const int BUTTON_PIN = 2;
const int LED_PIN = 13;

bool ledState = false;
int lastButtonState = HIGH;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  // Toggle the LED once when the button is pressed.
  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);

    delay(30);  // Debounce the button
  }

  lastButtonState = buttonState;
}
