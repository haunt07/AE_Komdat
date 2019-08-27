#ifndef MODUL_SERIAL
#define MODUL_SERIAL

#include "Arduino.h"

class ModulSerial
{
private:
    const byte pinArduino[8] = {3, 2, 5, 4, 8, 6, 7, 9};

public:
    void begin(unsigned long baudrate, unsigned int timeout);
    void run();
};

#endif