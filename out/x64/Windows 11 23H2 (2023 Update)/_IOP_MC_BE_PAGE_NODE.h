#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x20 bytes (sizeof)
struct _IOP_MC_BE_PAGE_NODE
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    ULONG PageIndex;                                                        //0x18
};
/* Used in */
// _IOP_MC_BUFFER_ENTRY

