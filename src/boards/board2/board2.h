#ifndef __MY_LIBRARY_BOARD2_H__
#define __MY_LIBRARY_BOARD2_H__

#ifdef ARDUINO_ESP32_DEV

#include <Arduino.h>

class boardDriver
{
    public:
        boardDriver();
        void initBoard();

    private:
};

#endif

#endif