#pragma once
/* ------------------ */

#include <_MI_VAD_ALLOCATION_CELL.h>
#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0x158 bytes (sizeof)
struct _MI_USER_VA_INFO
{
    ULONG NumberOfCommittedPageTables;                                      //0x0
    VOID* HighestTopDownAllocationAddress;                                  //0x8
    struct _MI_VAD_ALLOCATION_CELL VadCell[2];                              //0x10
    ULONG VadBitMapCommitment;                                              //0x60
    ULONG MaximumLastVadBit;                                                //0x64
    LONG VadsBeingDeleted;                                                  //0x68
    LONG NumberOfDebugEnclaves;                                             //0x6c
    ULONGLONG PhysicalMappingCount;                                         //0x70
    struct _KEVENT* LastVadDeletionEvent;                                   //0x78
    struct _LIST_ENTRY SubVadRanges[3];                                     //0x80
    UCHAR NumaAware;                                                        //0xb0
    ULONGLONG CloneNestingLevel;                                            //0xb8
    ULONGLONG PrivateFixupVadCount;                                         //0xc0
    struct _MI_CFG_BITMAP_INFO CfgBitMap[2];                                //0xc8
    ULONG CommittedPageTableBufferForTopLevel[8];                           //0xf8
    struct _RTL_BITMAP CommittedPageTableBitmaps[3];                        //0x118
    ULONG PageTableBitmapPages[3];                                          //0x148
};
/* Used in */
// _MMWSL

