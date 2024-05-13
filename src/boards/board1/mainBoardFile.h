#ifndef __BOARD_SELECT1_H__
#define __BOARD_SELECT1_H__

#ifdef ARDUINO_INKPLATE5

#include <Arduino.h>

#define LIBRARY_FEATURE_1_ENABLED
//#define __USE_FEATURE_2__

#include "../../selectableFeatures/feature1.h"
//#include "../../selectableFeatures/feature2.h"
#include "board1.h"

class MyArduinoLibraryBoardSelect : public boardDriver, public Feature1
{

};

#endif

#endif