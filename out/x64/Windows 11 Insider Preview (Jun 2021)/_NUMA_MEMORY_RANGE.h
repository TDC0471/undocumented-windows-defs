#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _NUMA_MEMORY_RANGE
{
    ULONG ProximityId;                                                      //0x0
    ULONGLONG BasePage;                                                     //0x8
    ULONGLONG EndPage;                                                      //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

