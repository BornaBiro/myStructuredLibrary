#ifndef __FEATURE_2_H__
#define __FEATURE_2_H__

#ifdef LIBRARY_FEATURE_2_ENABLED

#warning "Feature2 detected - header file"

#include <Arduino.h>

class Feature2
{
    public:
        Feature2();
        void initFeature2();
};

#endif
#endif