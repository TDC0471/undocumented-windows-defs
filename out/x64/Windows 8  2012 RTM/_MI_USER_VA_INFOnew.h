#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x478 bytes (sizeof)
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
    struct _KEVENT* LastVadDeletionEvent;                                   //0x28
    ULONG* VadBitBuffer;                                                    //0x30
    VOID* LowestBottomUpAllocationAddress;                                  //0x38
    VOID* HighestTopDownAllocationAddress;                                  //0x40
    VOID* FreeTebHint;                                                      //0x48
    ULONGLONG PrivateFixupVadCount;                                         //0x50
    VOID* FreeUmsTebHint;                                                   //0x58
    ULONG* CommittedPageTables;                                             //0x60
    ULONG PageTableBitmapPages;                                             //0x68
    ULONGLONG CommittedPageDirectories[128];                                //0x70
    ULONGLONG CommittedPageDirectoryParents[1];                             //0x470
};
/* Used in */
// _MMWSL

