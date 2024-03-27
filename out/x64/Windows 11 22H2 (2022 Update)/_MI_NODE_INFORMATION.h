#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST.h>
#include <_MI_STANDBY_LOOKASIDE.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_PARTITION.h>
#include <_MI_LARGE_PAGE_LISTS_CHANGING.h>
#include <_MI_PAGE_COLORS.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_CACHED_KSTACK_LIST.h>
#include <_MI_SLAB_ALLOCATOR_CONTEXT.h>

//0x6340 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0xc90
    struct _MMPFNLIST StandbyPageList[4][8];                                //0xcb8
    struct _MI_STANDBY_LOOKASIDE StandbyPageCachePerChannel[4][8];          //0x17c0
    struct _RTL_BITMAP_EX FreePageListHeadsBitmap[3][2];                    //0x57c0
    ULONGLONG FreePageListHeadsBitmapBuffer[24];                            //0x5820
    volatile ULONGLONG FreeCount[2];                                        //0x58e0
    volatile ULONGLONG FreeZeroCountByAttribute[4];                         //0x58f0
    ULONGLONG TotalPages[4];                                                //0x5910
    ULONGLONG TotalPagesEntireNode;                                         //0x5930
    struct _MI_PARTITION* Partition;                                        //0x5938
    ULONG CurrentHugeRangeColor;                                            //0x5940
    ULONGLONG TotalHugeIoPages;                                             //0x5948
    ULONGLONG HugeIoRangeFreeCount[2][4];                                   //0x5950
    ULONG MmShiftedColor;                                                   //0x5990
    ULONG Color;                                                            //0x5994
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x5998
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x59d8
        ULONG Spare:31;                                                     //0x59d8
    } Flags;                                                                //0x59d8
    ULONG LargeListMoveInProgress;                                          //0x59dc
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x59e0
    volatile LONG NodeLock;                                                 //0x59e8
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x59f0
    UCHAR ChannelStatus;                                                    //0x59f8
    UCHAR ChannelOrdering[4];                                               //0x59f9
    UCHAR LockedChannelOrdering[4];                                         //0x59fd
    UCHAR PowerAttribute[4];                                                //0x5a01
    volatile LONG LargePageLock;                                            //0x5a40
    ULONGLONG ScrubResumePage;                                              //0x5a48
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x5a50
    ULONGLONG NumberOfPagesGoingBad;                                        //0x5a60
    VOID* BootZeroContext;                                                  //0x5a68
    VOID* ZeroingContext;                                                   //0x5a70
    volatile LONG ZeroContextLock;                                          //0x5a78
    VOID* ZeroThreadConductor;                                              //0x5a80
    UCHAR BackgroundZeroingActive;                                          //0x5a88
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x5a90
    struct _CACHED_KSTACK_LIST CachedKernelStacks[3];                       //0x5aa0
    struct _CACHED_KSTACK_LIST CachedKernelShadowStackLists[3];             //0x5b00
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[7];                      //0x5b60
    struct _MI_SLAB_ALLOCATOR_CONTEXT* volatile FreePageSlabContextHint;    //0x6298
    ULONGLONG MdlSlabFragmentionLastDemoteTime;                             //0x62a0
    struct _MMPFNLIST EnclavePageListHead;                                  //0x62c0
};
/* Used in */
// _MI_PARTITION_CORE

