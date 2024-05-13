#ifndef __BOARD_SELECT1_H__
#define __BOARD_SELECT1_H__

#ifdef ARDUINO_INKPLATE5

#include "board1.h"

#include <Arduino.h>

class MyArduinoLibraryBoardSelect : public boardDriver
{
    public:
    MyArduinoLibraryBoardSelect(){};
};

#endif

#endif