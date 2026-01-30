#include <SPI.h>
#include <RF24.h>

#define CE_PIN  4
#define CSN_PIN 5

RF24 radio(CE_PIN, CSN_PIN);

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("NRF24 ESP32 Hardware Test");

  if (!radio.begin()) {
    Serial.println("❌ NRF24 NOT detected");
    while (1);
  }

  Serial.println("✅ NRF24 detected");

  radio.printDetails();
}

void loop() {
}
