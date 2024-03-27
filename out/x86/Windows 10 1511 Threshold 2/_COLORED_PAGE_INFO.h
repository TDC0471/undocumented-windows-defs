#pragma once
/* ------------------ */

#include <_MMPFN.h>

//0x10 bytes (sizeof)
struct _COLORED_PAGE_INFO
{
    volatile LONG BeingZeroed;                                              //0x0
    ULONG Processor;                                                        //0x4
    ULONG PagesQueued;                                                      //0x8
    struct _MMPFN* PfnAllocation;                                           //0xc
};
/* Used in */
// _MI_LARGEPAGE_MEMORY_INFO

