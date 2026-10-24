#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// OLED settings
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(
  SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET
);

// DHT22 settings
#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// Buzzer pin
#define BUZZER_PIN 18

// Threshold values
#define TEMP_LIMIT 30.0
#define HUMIDITY_LIMIT 70.0

void setup() {
  Serial.begin(115200);

  // Initialize DHT22
  dht.begin();

  // Initialize buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    Serial.println("OLED initialization failed!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Environment Monitor");
  display.println("Initializing...");
  display.display();

  delay(2000);
}

void loop() {
  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Check for sensor reading errors
  if (isnan(temperature) || isnan(humidity)) {
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("DHT22 Read Error!");
    display.display();

    digitalWrite(BUZZER_PIN, LOW);
    delay(2000);
    return;
  }

  // Check whether either limit is exceeded
  bool alert = (temperature > TEMP_LIMIT) ||
               (humidity > HUMIDITY_LIMIT);

  // Control buzzer
  digitalWrite(BUZZER_PIN, alert ? HIGH : LOW);

  // Display readings on OLED
  display.clearDisplay();
  display.setCursor(0, 0);

  display.println("ENVIRONMENT MONITOR");
  display.println("--------------------");

  display.print("Temp: ");
  display.print(temperature, 1);
  display.println(" C");

  display.print("Humidity: ");
  display.print(humidity, 1);
  display.println(" %");

  display.println();

  if (alert) {
    display.println("WARNING!");
    if (temperature > TEMP_LIMIT) {
      display.println("High Temperature!");
    }
    if (humidity > HUMIDITY_LIMIT) {
      display.println("High Humidity!");
    }
  } else {
    display.println("Environment Normal");
  }

  display.display();

  // Print readings to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(2000);
}
