#ifdef ARDUINO_INKPLATE5

#include "board1.h"

boardDriver::boardDriver()
{
    
}

void boardDriver::initBoard()
{
    Ft1.initFeature1();
    Ft2.initFeature2();
}

#endif