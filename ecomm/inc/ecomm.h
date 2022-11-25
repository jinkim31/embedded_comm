#ifndef COMM_H
#define COMM_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdlib.h>
#include <string.h>

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

typedef struct EC_TypeTable
{
    const int typeID;
    const size_t typesize;
    EC_Entry* const entries;
    const size_t nEntry;
}EC_TypeTable;

typedef struct EC_Comm
{
    EC_TypeTable* const typeTables;
    const size_t nTypeTable;
}EC_Comm;

#ifdef __cplusplus
}
#endif

#endif