//Include Library
#include <modul_serial.h>

//Instantiate ModulSerial
ModulSerial modulSerial;

void setup()
{
  //Inisialisasi Modul
  modulSerial.begin(115200, 10); //Set Serial Baudrate : 115200, Set Serial Timeout : 10ms
}

void loop()
{
  //Modul Running
  modulSerial.run();
}
