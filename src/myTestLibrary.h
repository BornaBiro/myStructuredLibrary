#ifndef __MY_TEST_LIBRARY_H__
#define __MY_TEST_LIBRARY_H__

#include <Arduino.h>

#include "boardsSelect.h"
#include "selectableFeatures/featureBoardList.h"

class MyTestLibrary : public MyArduinoLibraryBoardSelect
{
    public:
        MyTestLibrary();
        void begin();
};

#endif