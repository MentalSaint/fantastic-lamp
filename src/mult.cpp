#include "mult.h"
#include <Arduino.h>

void mult()
{
    Serial.println("Number1: ");
    while (Serial.available() == 0) {}
    int num1 = Serial.parseInt();
    Serial.println("Number2: ");
    while (Serial.available() == 0) {}
    int num2 = Serial.parseInt();
    Serial.println(num1 * num2);
}