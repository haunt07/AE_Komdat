#include "modul_serial.h"

void ModulSerial::begin(unsigned long baudrate, unsigned int timeout)
{
    Serial.begin(baudrate);
    Serial.setTimeout(timeout);
    pinMode(this->pinArduino[0], OUTPUT);
    pinMode(this->pinArduino[1], OUTPUT);
    pinMode(this->pinArduino[2], OUTPUT);
    pinMode(this->pinArduino[3], OUTPUT);
    pinMode(this->pinArduino[4], OUTPUT);
    pinMode(this->pinArduino[5], OUTPUT);
    pinMode(this->pinArduino[6], OUTPUT);
    pinMode(this->pinArduino[7], OUTPUT);
}

void ModulSerial::run()
{
    if (Serial.available())
    {
        int data = Serial.parseInt();
        for (int iter = 0; iter <= 7; iter++)
        {
            digitalWrite(this->pinArduino[iter], bitRead(data, iter));
        }
    }
}