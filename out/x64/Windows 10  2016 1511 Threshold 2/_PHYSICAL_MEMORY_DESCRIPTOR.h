#pragma once
/* ------------------ */

#include <_PHYSICAL_MEMORY_RUN.h>

//0x20 bytes (sizeof)
struct _PHYSICAL_MEMORY_DESCRIPTOR
{
    ULONG NumberOfRuns;                                                     //0x0
    ULONGLONG NumberOfPages;                                                //0x8
    struct _PHYSICAL_MEMORY_RUN Run[1];                                     //0x10
};
/* Used in */
// _MI_PARTITION_CORE

