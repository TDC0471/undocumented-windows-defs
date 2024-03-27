#pragma once
/* ------------------ */

#include <_INVERTED_FUNCTION_TABLE_ENTRY.h>

//0x1810 bytes (sizeof)
struct _INVERTED_FUNCTION_TABLE
{
    ULONG CurrentSize;                                                      //0x0
    ULONG MaximumSize;                                                      //0x4
    volatile ULONG Epoch;                                                   //0x8
    UCHAR Overflow;                                                         //0xc
    struct _INVERTED_FUNCTION_TABLE_ENTRY TableEntry[256];                  //0x10
};
/* Used in */
// _EPROCESS

