#include "device_emulator.h"
#include <vector>

DeviceEmulator::DeviceEmulator()
{
    // make int table
    EC_Entry intEntries[] ={
    {&uint8Data[0], EC_READ_WRITE},
    {&uint8Data[1], EC_READ_WRITE},
    {&uint8Data[2], EC_READ_WRITE},
    };
    EC_TypeTable intTypeTable = {0, sizeof(int), intEntries, 3};

    // make float table
    EC_Entry floatEntries[] ={
    {&float32Data[0], EC_READ_WRITE},
    {&float32Data[1], EC_READ_WRITE},
    {&float32Data[2], EC_READ_WRITE},
    };
    EC_TypeTable floatTable = {1, sizeof(float), floatEntries, 3};

    // make double table
    EC_Entry doubleEntries[] ={
    {&float64Data[0], EC_READ_WRITE},
    {&float64Data[1], EC_READ_WRITE},
    {&float64Data[2], EC_READ_WRITE},
    };
    EC_TypeTable doubleTable = {2, sizeof(double), doubleEntries, 3};




    // printf("%d\n", *(uint8_t*)comm.tables[EC_UINT8].entries[2].ptr);
    // printf("%f\n", *(float32_t*)comm.tables[EC_FLOAT32].entries[2].ptr);
    // printf("%lf\n", *(float64_t*)comm.tables[EC_FLOAT64].entries[2].ptr);
}
