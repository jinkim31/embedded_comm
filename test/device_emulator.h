#ifndef EMBEDDED_COMM_DEVICE_EMULATOR_H
#define EMBEDDED_COMM_DEVICE_EMULATOR_H

#include <iostream>
#include <ecomm.h>

using namespace std;

class DeviceEmulator{
public:
    DeviceEmulator();
private:
    int uint8Data[3] = {10,20,30};
    float float32Data[3] = {1.1,2.2,3.3};
    double float64Data[3] = {1.11,2.22,3.33};
};


#endif
