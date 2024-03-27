#pragma once
/* ------------------ */

#include <_SUPPORTED_RANGE.h>

//0x20 bytes (sizeof)
struct _SUPPORTED_RANGE
{
    struct _SUPPORTED_RANGE* Next;                                          //0x0
    ULONG SystemAddressSpace;                                               //0x4
    LONGLONG SystemBase;                                                    //0x8
    LONGLONG Base;                                                          //0x10
    LONGLONG Limit;                                                         //0x18
};
/* Used in */
// _SUPPORTED_RANGE
// _SUPPORTED_RANGES

