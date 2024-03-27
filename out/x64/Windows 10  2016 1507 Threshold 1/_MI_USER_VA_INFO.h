#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0x108 bytes (sizeof)
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
    ULONGLONG PhysicalMappingCount;                                         //0x28
    struct _KEVENT* LastVadDeletionEvent;                                   //0x30
    ULONG* VadBitBuffer;                                                    //0x38
    VOID* LowestBottomUpAllocationAddress;                                  //0x40
    VOID* HighestTopDownAllocationAddress;                                  //0x48
    VOID* FreeTebHint;                                                      //0x50
    UCHAR NumaAware;                                                        //0x58
    ULONGLONG CloneNestingLevel;                                            //0x60
    ULONGLONG PrivateFixupVadCount;                                         //0x68
    struct _MI_CFG_BITMAP_INFO CfgBitMap[2];                                //0x70
    ULONG CommittedPageTableBufferForTopLevel[8];                           //0xa0
    struct _RTL_BITMAP CommittedPageTableBitmaps[3];                        //0xc0
    ULONG PageTableBitmapPages[3];                                          //0xf0
    VOID* FreeUmsTebHint;                                                   //0x100
};
/* Used in */
// _MMWSL

