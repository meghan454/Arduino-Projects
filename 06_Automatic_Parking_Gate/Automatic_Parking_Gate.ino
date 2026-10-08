#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;

const int redPin = 11;
const int greenPin = 12;
const int bluePin = 13;

const int buzzerPin = 6;

Servo gateServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(buzzerPin, OUTPUT);

  gateServo.attach(5);
  gateServo.write(0);

  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Measure echo
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  float distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Vehicle detected
  if (distance <= 15) {

    gateServo.write(90);

    // Green ON
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);

    digitalWrite(buzzerPin, HIGH);

  }

  // No vehicle
  else {

    gateServo.write(0);

    // Red ON
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);

    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
