#ifndef MODUL_SERIAL
#define MODUL_SERIAL

//Include Library Arduino
#include "Arduino.h"

/**
 * Library ini diperuntukan untuk modul USBToSerial buatan polman bandung
 * Modul ini berfungsi untuk mengubah data serial menjadi data parallel
 * Data masuk melalui kabel usb dan keluar melalui socket DB25
 */
class ModulSerial
{
private:
    // Pin Arduino
    const byte pinArduino[8] = {3, 2, 5, 4, 8, 6, 7, 9};

public:
    /**
    * Inisialisasi Modul Serial
    * "baudrate" diisi dengan kecepatan komunikasi data serial
    * "timeout" diisi dengan besar delay sebelum selesai pembacaan dengan satuan miliseconds
    */
    void begin(unsigned long baudrate, unsigned int timeout);

    /**
    * Syntax "run" digunakan untuk memproses data yang masuk hingga menjadi data parallel pada socket DB25
    * Syntax ini sebaiknya ditempatkan pada void loop
    */
    void run();
};

#endif