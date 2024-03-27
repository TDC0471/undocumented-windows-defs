#pragma once
/* ------------------ */

#include <_ARBITER_LIST_ENTRY.h>
#include <_ARBITER_ALTERNATIVE.h>

//0x38 bytes (sizeof)
struct _ARBITER_ALLOCATION_STATE
{
    ULONGLONG Start;                                                        //0x0
    ULONGLONG End;                                                          //0x8
    ULONGLONG CurrentMinimum;                                               //0x10
    ULONGLONG CurrentMaximum;                                               //0x18
    struct _ARBITER_LIST_ENTRY* Entry;                                      //0x20
    struct _ARBITER_ALTERNATIVE* CurrentAlternative;                        //0x24
    ULONG AlternativeCount;                                                 //0x28
    struct _ARBITER_ALTERNATIVE* Alternatives;                              //0x2c
    USHORT Flags;                                                           //0x30
    UCHAR RangeAttributes;                                                  //0x32
    UCHAR RangeAvailableAttributes;                                         //0x33
    ULONG WorkSpace;                                                        //0x34
};
/* Used in */
// _ARBITER_INSTANCE

