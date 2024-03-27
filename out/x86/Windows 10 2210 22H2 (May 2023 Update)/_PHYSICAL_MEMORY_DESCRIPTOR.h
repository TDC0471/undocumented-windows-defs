#pragma once
/* ------------------ */

#include <_PHYSICAL_MEMORY_RUN.h>

//0x10 bytes (sizeof)
struct _PHYSICAL_MEMORY_DESCRIPTOR
{
    ULONG NumberOfRuns;                                                     //0x0
    ULONG NumberOfPages;                                                    //0x4
    struct _PHYSICAL_MEMORY_RUN Run[1];                                     //0x8
};
/* Used in */
// _MI_NODE_INFORMATION
// _MI_PARTITION_CORE

