#ifndef COMM_H
#define COMM_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdlib.h>
#include <string.h>

#define EC_TABLE_TYPE_N 3

typedef float float32_t;
typedef double float64_t;

typedef enum EC_TableType{
    EC_UINT8,
    EC_FLOAT32,
    EC_FLOAT64,
}EC_TableType;

typedef enum EC_Access
{
    EC_INACCESSIBLE = 0,   // 0b00
    EC_READ_ONLY = 1,      // 0b01
    EC_WRITE_ONLY = 2,     // 0b10
    EC_READ_WRITE = 3,     // 0b11
}EC_Access;

typedef enum EC_Error{
    EC_NO_ERROR,
    EC_UNKNOWN_COMMAND,
    EC_INVALID_ARG,
    EC_CRC_ERROR,
    EC_OUT_OF_BOUND,
    EC_READ_ACCESS_DENIED,
    EC_WRITE_ACCESS_DENIED,
}EC_Error;

typedef struct EC_Entry
{
    void* const ptr;
    const EC_Access access;
}EC_Entry;

typedef struct EC_Table
{
    EC_TableType type;
    unsigned int len;
    EC_Entry* entries;
}EC_Table;

typedef struct EC_Comm
{
    EC_Table tables[EC_TABLE_TYPE_N];
}EC_Comm;

void EC_assignTypeTable(EC_Comm* comm, EC_TableType type, unsigned int len, EC_Entry entries[]);

#ifdef __cplusplus
}
#endif

#endif