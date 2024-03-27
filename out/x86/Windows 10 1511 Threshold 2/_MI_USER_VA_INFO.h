#pragma once
/* ------------------ */

#include <_MI_VAD_ALLOCATION_CELL.h>
#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_MI_CFG_BITMAP_INFO.h>
#include <_RTL_BITMAP.h>

//0xd48 bytes (sizeof)
struct _MI_USER_VA_INFO
{
    ULONG NumberOfCommittedPageTables;                                      //0x0
    VOID* HighestTopDownAllocationAddress;                                  //0x4
    struct _MI_VAD_ALLOCATION_CELL VadCell[2];                              //0x8
    ULONG VadBitMapCommitment;                                              //0x40
    ULONG MaximumLastVadBit;                                                //0x44
    LONG VadsBeingDeleted;                                                  //0x48
    LONG NumberOfDebugEnclaves;                                             //0x4c
    ULONG PhysicalMappingCount;                                             //0x50
    struct _KEVENT* LastVadDeletionEvent;                                   //0x54
    struct _LIST_ENTRY SubVadRanges[1];                                     //0x58
    UCHAR NumaAware;                                                        //0x60
    ULONGLONG CloneNestingLevel;                                            //0x68
    ULONG PrivateFixupVadCount;                                             //0x70
    struct _MI_CFG_BITMAP_INFO CfgBitMap[1];                                //0x74
    ULONG CommittedPageTableBufferForTopLevel[48];                          //0x80
    struct _RTL_BITMAP CommittedPageTableBitmaps[1];                        //0x140
    USHORT UsedPageTableEntries[1536];                                      //0x148
};
/* Used in */
// _MMWSL

