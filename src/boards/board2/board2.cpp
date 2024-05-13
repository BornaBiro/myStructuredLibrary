#include "board2.h"

#ifdef ARDUINO_ESP32_DEV

boardDriver::boardDriver()
{

}

void boardDriver::initBoard()
{
    initFeature1();
}

#endif