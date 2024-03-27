#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _HBIN
{
    ULONG Signature;                                                        //0x0
    ULONG FileOffset;                                                       //0x4
    ULONG Size;                                                             //0x8
    ULONG Reserved1[2];                                                     //0xc
    union _LARGE_INTEGER TimeStamp;                                         //0x14
    ULONG Spare;                                                            //0x1c
};
/* Used in */
// _HIVE_LOAD_FAILURE

