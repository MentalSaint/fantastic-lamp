#include "menu.h"
#include "sum.h"
#include "mult.h"
#include <Arduino.h>

void menu() {
  if (Serial.available() > 0) {
    int input = Serial.parseInt();  // Read an integer from Serial

    switch (input) {
      case 1:
        sum();
        break;
      case 2:
        mult();
        break;
      default:
        Serial.println("Invalid input. Enter 1 for sum, 2 for multiplication.");
        break;
    }

    // Clear remaining serial input
    while (Serial.available() > 0) {
      Serial.read();
    }

    Serial.println("\nEnter 1 for sum, 2 for mult:");  // Reprint menu
  }
}