#ifndef bluetoothCommunication
#define BT

#include "Arduino.h"
#include <SoftwareSerial.h> //Serial library

class Bluetooth
{
  public:
    static Bluetooth* getInstance(uint8_t piniConfigurare[], uint16_t baudeRate);
    void trimiteDateRaspberry(uint8_t distante[], uint16_t franaDeMana);
    uint8_t primesteDateRaspberry();
    
  private:
    uint16_t pini[];
    static Bluetooth* INSTANCE;
    SoftwareSerial *bluetoothCommunication;

    Bluetooth(uint8_t piniConfigurare[], uint16_t baudeRate);
    void construireFrame(uint8_t distante[], uint8_t frameTransmisie[], uint16_t franaDeMana);
    uint8_t calculParitate(uint8_t dist);
};



#endif
