#include <"modul_serial.h">

ModulSerial modulSerial;

void setup()
{
  modulSerial.begin(115200, 1);
}

void loop()
{
  modulSerial.run();
}
