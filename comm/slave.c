#include "slave.h"

const unsigned int EC_TABLE_TYPE_SIZE[] = {1, 4, 8};

void EC_assignTypeTable(EC_Comm *comm, EC_TableType type, unsigned int len, EC_Entry entries[])
{
    comm->tables[type].type = type;
    comm->tables[type].len = len;
    comm->tables[type].entries = entries;
}
