#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0xc bytes (sizeof)
struct _GEN_ADDR
{
    UCHAR AddressSpaceID;                                                   //0x0
    UCHAR BitWidth;                                                         //0x1
    UCHAR BitOffset;                                                        //0x2
    UCHAR AccessSize;                                                       //0x3
    union _LARGE_INTEGER Address;                                           //0x4
};
/* Used in */
// _FADT

