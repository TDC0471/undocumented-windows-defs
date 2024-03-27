#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0xcfc bytes (sizeof)
struct _MI_USER_VA_INFO
{
    ULONG NumberOfCommittedPageTables;                                      //0x0
    ULONG PhysicalMappingCount;                                             //0x4
    ULONG VadBitMapHint;                                                    //0x8
    ULONG LastAllocationSizeHint;                                           //0xc
    ULONG LastAllocationSize;                                               //0x10
    ULONG LowestBottomUpVadBit;                                             //0x14
    ULONG VadBitMapSize;                                                    //0x18
    ULONG MaximumLastVadBit;                                                //0x1c
    LONG VadsBeingDeleted;                                                  //0x20
    struct _KEVENT* LastVadDeletionEvent;                                   //0x24
    ULONG* VadBitBuffer;                                                    //0x28
    VOID* LowestBottomUpAllocationAddress;                                  //0x2c
    VOID* HighestTopDownAllocationAddress;                                  //0x30
    VOID* FreeTebHint;                                                      //0x34
    ULONG PrivateFixupVadCount;                                             //0x38
    USHORT UsedPageTableEntries[1536];                                      //0x3c
    ULONG CommittedPageTables[48];                                          //0xc3c
};
/* Used in */
// _MMWSL

