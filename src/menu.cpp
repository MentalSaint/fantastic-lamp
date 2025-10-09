#include "menu.h"
#include <Arduino.h>

void menu() {
    if(Serial.available() > 0)  {
        int incomingData = 0; // can be -1 if read error

        while (incomingData != 1 || incomingData != 2) {
            incomingData = Serial.parseInt();
        }

        switch(incomingData) { 
            case 1:
                // calculateSum();
                Serial.println("sum calc");
                break;
            case 2:
                // calculateMultiplication();
                break;
            default:
                Serial.println("other");
                break;
        }
    }
}