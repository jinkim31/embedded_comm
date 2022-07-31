#ifndef EMBEDDED_COMM_DEVICE_EMULATOR_H
#define EMBEDDED_COMM_DEVICE_EMULATOR_H

#include <iostream>
#include "../comm/slave.h"

using namespace std;

class DeviceEmulator{
public:

private:
    uint8_t uint8Data[3] = {10,20,30};
    float32_t float32Data[3] = {1.1,2.2,3.3};
    float64_t float64Data[3] = {1.11,2.22,3.33};
    EC_Comm comm;
};


#endif
