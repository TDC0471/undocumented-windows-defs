#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0x128 bytes (sizeof)
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
    ULONG* VadBitBuffer;                                                    //0x30
    VOID* LowestBottomUpAllocationAddress;                                  //0x38
    VOID* HighestTopDownAllocationAddress;                                  //0x40
    VOID* FreeTebHint;                                                      //0x48
    UCHAR NumaAware;                                                        //0x50
    ULONGLONG PrivateFixupVadCount;                                         //0x58
    struct _MI_CFG_BITMAP_INFO CfgBitMap[3];                                //0x60
    ULONG CommittedPageTableBufferForTopLevel[8];                           //0xc0
    struct _RTL_BITMAP CommittedPageTableBitmaps[3];                        //0xe0
    ULONG PageTableBitmapPages[3];                                          //0x110
    VOID* FreeUmsTebHint;                                                   //0x120
};
/* Used in */
// _MMWSL

