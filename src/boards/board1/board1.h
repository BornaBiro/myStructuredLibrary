#ifndef __MY_LIBRARY_BOARD1_H__
#define __MY_LIBRARY_BOARD1_H__

#ifdef ARDUINO_INKPLATE5

#include <Arduino.h>
#include "../../selectableFeatures/featureBoardList.h"

class boardDriver
{
    public:
        boardDriver();
        void initBoard();

    private:
        Feature1 Ft1;
        Feature2 Ft2;
};

#endif

#endif