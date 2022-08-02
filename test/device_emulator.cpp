#include "device_emulator.h"
#include <vector>

DeviceEmulator::DeviceEmulator()
{

    EC_Entry int8Entries[] ={
    {&uint8Data[0], EC_READ_WRITE},
    {&uint8Data[1], EC_READ_WRITE},
    {&uint8Data[2], EC_READ_WRITE},
    };

    EC_Entry float32Entries[] ={
    {&float32Data[0], EC_READ_WRITE},
    {&float32Data[1], EC_READ_WRITE},
    {&float32Data[2], EC_READ_WRITE},
    };

    EC_Entry float64Entries[] ={
    {&float64Data[0], EC_READ_WRITE},
    {&float64Data[1], EC_READ_WRITE},
    {&float64Data[2], EC_READ_WRITE},
    };

    EC_Table uint8Table = {EC_UINT8, 3, int8Entries};
    EC_Table float32Table = {EC_FLOAT32, 3, float32Entries};
    EC_Table float64Table = {EC_FLOAT64, 3, float64Entries};

    comm.tables = {uint8Table, float32Table, float64Table};

    printf("%d\n", *(uint8_t*)comm.tables[EC_UINT8].entries[2].ptr);
    printf("%f\n", *(float32_t*)comm.tables[EC_FLOAT32].entries[2].ptr);
    printf("%lf\n", *(float64_t*)comm.tables[EC_FLOAT64].entries[2].ptr);
}
