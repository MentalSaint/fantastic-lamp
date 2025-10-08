#include "sum.h"
#include <Arduino.h>

void sum()
{
    int num1 = Serial.parseInt();
    Serial.println("Number1: ");
    int num2 = Serial.parseInt();
    Serial.println("Number2: ");
    Serial.println( num1 + num2);
}