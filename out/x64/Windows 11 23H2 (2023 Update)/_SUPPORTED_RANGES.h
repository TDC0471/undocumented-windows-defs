#pragma once
/* ------------------ */

#include <_SUPPORTED_RANGE.h>

//0xc0 bytes (sizeof)
struct _SUPPORTED_RANGES
{
    USHORT Version;                                                         //0x0
    UCHAR Sorted;                                                           //0x2
    UCHAR Reserved;                                                         //0x3
    ULONG NoIO;                                                             //0x4
    struct _SUPPORTED_RANGE IO;                                             //0x8
    ULONG NoMemory;                                                         //0x30
    struct _SUPPORTED_RANGE Memory;                                         //0x38
    ULONG NoPrefetchMemory;                                                 //0x60
    struct _SUPPORTED_RANGE PrefetchMemory;                                 //0x68
    ULONG NoDma;                                                            //0x90
    struct _SUPPORTED_RANGE Dma;                                            //0x98
};
/* Used in */
// _BUS_HANDLER

