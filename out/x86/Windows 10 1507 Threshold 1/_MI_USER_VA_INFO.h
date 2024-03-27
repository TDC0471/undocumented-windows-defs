#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0xd20 bytes (sizeof)
struct _MI_USER_VA_INFO
{
    ULONG NumberOfCommittedPageTables;                                      //0x0
    ULONG VadBitMapHint;                                                    //0x4
    ULONG LastAllocationSizeHint;                                           //0x8
    ULONG LastAllocationSize;                                               //0xc
    ULONG LowestBottomUpVadBit;                                             //0x10
    ULONG VadBitMapSize;                                                    //0x14
    ULONG VadBitMapCommitment;                                              //0x18
    ULONG MaximumLastVadBit;                                                //0x1c
    LONG VadsBeingDeleted;                                                  //0x20
    ULONG PhysicalMappingCount;                                             //0x24
    struct _KEVENT* LastVadDeletionEvent;                                   //0x28
    ULONG* VadBitBuffer;                                                    //0x2c
    VOID* LowestBottomUpAllocationAddress;                                  //0x30
    VOID* HighestTopDownAllocationAddress;                                  //0x34
    VOID* FreeTebHint;                                                      //0x38
    UCHAR NumaAware;                                                        //0x3c
    ULONGLONG CloneNestingLevel;                                            //0x40
    ULONG PrivateFixupVadCount;                                             //0x48
    struct _MI_CFG_BITMAP_INFO CfgBitMap[1];                                //0x4c
    ULONG CommittedPageTableBufferForTopLevel[48];                          //0x58
    struct _RTL_BITMAP CommittedPageTableBitmaps[1];                        //0x118
    USHORT UsedPageTableEntries[1536];                                      //0x120
};
/* Used in */
// _MMWSL

