#pragma once
/* ------------------ */

#include <_SUPPORTED_RANGE.h>

//0xa0 bytes (sizeof)
struct _SUPPORTED_RANGES
{
    USHORT Version;                                                         //0x0
    UCHAR Sorted;                                                           //0x2
    UCHAR Reserved;                                                         //0x3
    ULONG NoIO;                                                             //0x4
    struct _SUPPORTED_RANGE IO;                                             //0x8
    ULONG NoMemory;                                                         //0x28
    struct _SUPPORTED_RANGE Memory;                                         //0x30
    ULONG NoPrefetchMemory;                                                 //0x50
    struct _SUPPORTED_RANGE PrefetchMemory;                                 //0x58
    ULONG NoDma;                                                            //0x78
    struct _SUPPORTED_RANGE Dma;                                            //0x80
};
/* Used in */
// _BUS_HANDLER

