#pragma once
/* ------------------ */

#include <_ARBITER_LIST_ENTRY.h>
#include <_ARBITER_ALTERNATIVE.h>

//0x50 bytes (sizeof)
struct _ARBITER_ALLOCATION_STATE
{
    ULONGLONG Start;                                                        //0x0
    ULONGLONG End;                                                          //0x8
    ULONGLONG CurrentMinimum;                                               //0x10
    ULONGLONG CurrentMaximum;                                               //0x18
    struct _ARBITER_LIST_ENTRY* Entry;                                      //0x20
    struct _ARBITER_ALTERNATIVE* CurrentAlternative;                        //0x28
    ULONG AlternativeCount;                                                 //0x30
    struct _ARBITER_ALTERNATIVE* Alternatives;                              //0x38
    USHORT Flags;                                                           //0x40
    UCHAR RangeAttributes;                                                  //0x42
    UCHAR RangeAvailableAttributes;                                         //0x43
    ULONGLONG WorkSpace;                                                    //0x48
};
/* Used in */
// _ARBITER_INSTANCE

