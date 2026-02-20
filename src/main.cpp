#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Krish_choudhary
 * @date 2026-02-20
 *
 * @details
 * Reads digital input from IR sensor.
 * and detects obstacle presence.
 */
// TODO 1:
// Define IR sensor digital pin (Use pin 2)
const int IR_PIN = 2;

// TODO 2:
// Create variable to store sensor state
int irState = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);
// TODO 5:
    // Print system initialization message
    Serial.println("IR Obstacle Detection System Initialized");
    Serial.println("Monitoring for obstacles...");
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor
    irState = digitalRead(IR_PIN);
// TODO 7:
    // If obstacle detected
    // NOTE: Many IR modules output LOW when obstacle is detected.
    if (irState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }
