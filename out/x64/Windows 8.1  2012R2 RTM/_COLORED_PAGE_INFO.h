#pragma once
/* ------------------ */

#include <_MMPFN.h>

//0x18 bytes (sizeof)
struct _COLORED_PAGE_INFO
{
    volatile LONG BeingZeroed;                                              //0x0
    ULONG Processor;                                                        //0x4
    ULONGLONG PagesQueued;                                                  //0x8
    struct _MMPFN* PfnAllocation;                                           //0x10
};
/* Used in */
// _MI_LARGEPAGE_MEMORY_INFO

