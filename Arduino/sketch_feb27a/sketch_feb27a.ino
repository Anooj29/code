// Smart Plant Monitoring System using ESP8266 with Serial Communication

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <ESP8266WiFi.h>

// LCD setup
LiquidCrystal_I2C lcd(0x27, 16, 2, 0);  // Added 4th parameter for backlight polarity

// Define component pins (adjusted for ESP8266 GPIOs)
#define SOIL_SENSOR_PIN A0  // Analog Input
#define PIR_SENSOR_PIN 14   // D5 -> GPIO14
#define RELAY_PIN 0         // D3 -> GPIO0
#define BUTTON_PIN 13       // D7 -> GPIO13
#define DHT_PIN 2           // D4 -> GPIO2

DHT dht(DHT_PIN, DHT11);
int relayState = LOW;
int buttonState = HIGH;

void setup() {
    Serial.begin(115200);
    lcd.begin(16, 2);  // Added proper arguments
    lcd.backlight();
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, LOW);
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    pinMode(PIR_SENSOR_PIN, INPUT);
    dht.begin();

    lcd.setCursor(0, 0);
    lcd.print("Initializing...");
    delay(2000);
    lcd.clear();
}

void loop() {
    // Read temperature and humidity
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
    } else {
        Serial.print("Temperature: ");
        Serial.print(temperature);
        Serial.print(" C, Humidity: ");
        Serial.print(humidity);
        Serial.println(" %");
        lcd.setCursor(0, 0);
        lcd.print("T:"); lcd.print(temperature);
        lcd.print("C H:"); lcd.print(humidity);
    }

    // Read soil moisture
    int soilValue = analogRead(SOIL_SENSOR_PIN);
    int soilMoisture = map(soilValue, 0, 1024, 0, 100);
    soilMoisture = (100 - soilMoisture);
    Serial.print("Soil Moisture: ");
    Serial.print(soilMoisture);
    Serial.println(" %");
    lcd.setCursor(0, 1);
    lcd.print("S:"); lcd.print(soilMoisture);

    // Read PIR sensor
    int pirValue = digitalRead(PIR_SENSOR_PIN);
    Serial.print("Motion: ");
    Serial.println(pirValue == HIGH ? "Detected" : "No Motion");
    
    // Button control for relay
    if (digitalRead(BUTTON_PIN) == LOW) {
        relayState = !relayState;
        digitalWrite(RELAY_PIN, relayState);
        delay(300);
    }
    Serial.print("Water Pump: ");
    Serial.println(relayState == HIGH ? "ON" : "OFF");
    lcd.setCursor(11, 1);
    lcd.print(relayState == HIGH ? "W:ON " : "W:OFF");
    
    delay(2000);
}
