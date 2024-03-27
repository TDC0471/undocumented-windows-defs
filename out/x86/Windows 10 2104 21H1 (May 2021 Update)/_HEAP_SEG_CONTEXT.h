#pragma once
/* ------------------ */

#include <RTL_HP_ENV_HANDLE.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x80 bytes (sizeof)
struct _HEAP_SEG_CONTEXT
{
    ULONG SegmentMask;                                                      //0x0
    UCHAR UnitShift;                                                        //0x4
    UCHAR PagesPerUnitShift;                                                //0x5
    UCHAR FirstDescriptorIndex;                                             //0x6
    UCHAR CachedCommitSoftShift;                                            //0x7
    UCHAR CachedCommitHighShift;                                            //0x8
    union
    {
        UCHAR LargePagePolicy:3;                                            //0x9
        UCHAR FullDecommit:1;                                               //0x9
        UCHAR ReleaseEmptySegments:1;                                       //0x9
        UCHAR AllFlags;                                                     //0x9
    } Flags;                                                                //0x9
    ULONG MaxAllocationSize;                                                //0xc
    SHORT OlpStatsOffset;                                                   //0x10
    SHORT MemStatsOffset;                                                   //0x12
    VOID* LfhContext;                                                       //0x14
    VOID* VsContext;                                                        //0x18
    struct RTL_HP_ENV_HANDLE EnvHandle;                                     //0x1c
    VOID* Heap;                                                             //0x24
    ULONG SegmentLock;                                                      //0x40
    struct _LIST_ENTRY SegmentListHead;                                     //0x44
    ULONG SegmentCount;                                                     //0x4c
    struct _RTL_RB_TREE FreePageRanges;                                     //0x50
    ULONG FreeSegmentListLock;                                              //0x58
    struct _SINGLE_LIST_ENTRY FreeSegmentList[2];                           //0x5c
};
/* Used in */
// _SEGMENT_HEAP

