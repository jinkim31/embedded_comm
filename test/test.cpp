#include "../comm/slave.h"
#include <stdio.h>

int main()
{
    uint8_t uint8Data[3] = {10,20,30};
    float32_t float32Data[3] = {1.1,2.2,3.3};
    float64_t float64Data[3] = {1.11,2.22,3.33};

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

    EC_Comm comm = {{[EC_UINT8]=uint8Table, [EC_FLOAT32]=float32Table, [EC_FLOAT64]=float64Table}};

    printf("%d\n", *(uint8_t*)comm.tables[EC_UINT8].entries[2].ptr);
    printf("%f\n", *(float32_t*)comm.tables[EC_FLOAT32].entries[2].ptr);
    printf("%lf\n", *(float64_t*)comm.tables[EC_FLOAT64].entries[2].ptr);
}
