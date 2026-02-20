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
