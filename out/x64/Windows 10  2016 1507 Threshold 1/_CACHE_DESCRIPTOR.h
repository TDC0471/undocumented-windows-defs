#pragma once
/* ------------------ */

#include <_PROCESSOR_CACHE_TYPE.h>

//0xc bytes (sizeof)
struct _CACHE_DESCRIPTOR
{
    UCHAR Level;                                                            //0x0
    UCHAR Associativity;                                                    //0x1
    USHORT LineSize;                                                        //0x2
    ULONG Size;                                                             //0x4
    enum _PROCESSOR_CACHE_TYPE Type;                                        //0x8
};
/* Used in */
// _KPRCB

