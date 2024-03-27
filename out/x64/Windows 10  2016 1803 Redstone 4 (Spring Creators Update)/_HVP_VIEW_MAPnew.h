#pragma once
/* ------------------ */

#include <_CMSI_PROCESS_TUPLE.h>
#include <_RTL_RB_TREE.h>

//0x38 bytes (sizeof)
struct _HVP_VIEW_MAP
{
    VOID* SectionReference;                                                 //0x0
    LONGLONG StorageEndFileOffset;                                          //0x8
    LONGLONG SectionEndFileOffset;                                          //0x10
    struct _CMSI_PROCESS_TUPLE* ProcessTuple;                               //0x18
    ULONG Flags;                                                            //0x20
    struct _RTL_RB_TREE ViewTree;                                           //0x28
};
/* Used in */
// _HHIVE

