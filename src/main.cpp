#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author
 * @date 2026-02-16
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */
int irPin = 7;


void setup() {
    pinMode(irPin, INPUT);
    Serial.begin(9600);


}

