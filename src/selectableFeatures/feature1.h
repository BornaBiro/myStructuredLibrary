#ifndef __FEATURE_1_H__
#define __FEATURE_1_H__

#ifdef LIBRARY_FEATURE_1_ENABLED

#warning "Feature1 detected - header file"

#include <Arduino.h>

class Feature1
{
    public:
        Feature1();
        void initFeature1();
};

#endif
#endif