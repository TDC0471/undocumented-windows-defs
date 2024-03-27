#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0xd1c bytes (sizeof)
struct _MI_USER_VA_INFO
{
    ULONG NumberOfCommittedPageTables;                                      //0x0
    ULONG PhysicalMappingCount;                                             //0x4
    ULONG VadBitMapHint;                                                    //0x8
    ULONG LastAllocationSizeHint;                                           //0xc
    ULONG LastAllocationSize;                                               //0x10
    ULONG LowestBottomUpVadBit;                                             //0x14
    ULONG VadBitMapSize;                                                    //0x18
    ULONG VadBitMapCommitment;                                              //0x1c
    ULONG MaximumLastVadBit;                                                //0x20
    LONG VadsBeingDeleted;                                                  //0x24
    struct _KEVENT* LastVadDeletionEvent;                                   //0x28
    ULONG* VadBitBuffer;                                                    //0x2c
    VOID* LowestBottomUpAllocationAddress;                                  //0x30
    VOID* HighestTopDownAllocationAddress;                                  //0x34
    VOID* FreeTebHint;                                                      //0x38
    UCHAR NumaAware;                                                        //0x3c
    ULONG PrivateFixupVadCount;                                             //0x40
    struct _MI_CFG_BITMAP_INFO CfgBitMap[1];                                //0x44
    ULONG CommittedPageTableBufferForTopLevel[48];                          //0x54
    struct _RTL_BITMAP CommittedPageTableBitmaps[1];                        //0x114
    USHORT UsedPageTableEntries[1536];                                      //0x11c
};
/* Used in */
// _MMWSL

