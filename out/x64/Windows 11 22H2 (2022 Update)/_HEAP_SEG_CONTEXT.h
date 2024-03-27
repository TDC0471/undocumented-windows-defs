#pragma once
/* ------------------ */

#include <RTL_HP_ENV_HANDLE.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_SINGLE_LIST_ENTRY.h>

//0xc0 bytes (sizeof)
struct _HEAP_SEG_CONTEXT
{
    ULONGLONG SegmentMask;                                                  //0x0
    UCHAR UnitShift;                                                        //0x8
    UCHAR PagesPerUnitShift;                                                //0x9
    UCHAR FirstDescriptorIndex;                                             //0xa
    UCHAR CachedCommitSoftShift;                                            //0xb
    UCHAR CachedCommitHighShift;                                            //0xc
    union
    {
        UCHAR LargePagePolicy:3;                                            //0xd
        UCHAR FullDecommit:1;                                               //0xd
        UCHAR ReleaseEmptySegments:1;                                       //0xd
        UCHAR LargeHeapFirstSegment:1;                                      //0xd
        UCHAR AllFlags;                                                     //0xd
    } Flags;                                                                //0xd
    ULONG MaxAllocationSize;                                                //0x10
    SHORT OlpStatsOffset;                                                   //0x14
    SHORT MemStatsOffset;                                                   //0x16
    VOID* LfhContext;                                                       //0x18
    VOID* VsContext;                                                        //0x20
    struct RTL_HP_ENV_HANDLE EnvHandle;                                     //0x28
    VOID* Heap;                                                             //0x38
    ULONGLONG SegmentLock;                                                  //0x40
    struct _LIST_ENTRY SegmentListHead;                                     //0x48
    ULONGLONG SegmentCount;                                                 //0x58
    struct _RTL_RB_TREE FreePageRanges;                                     //0x60
    ULONGLONG FreeSegmentListLock;                                          //0x70
    struct _SINGLE_LIST_ENTRY FreeSegmentList[2];                           //0x78
};
/* Used in */
// _SEGMENT_HEAP

