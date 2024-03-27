#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST.h>
#include <_MI_STANDBY_LOOKASIDE.h>
#include <_RTL_BITMAP.h>
#include <_MI_PARTITION.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_LARGE_PAGE_LISTS_CHANGING.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_PAGE_COLORS.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>
#include <_CACHED_KSTACK_LIST.h>
#include <_MI_SLAB_ALLOCATOR_CONTEXT.h>

//0x5fc0 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0xc90
    struct _MMPFNLIST StandbyPageList[4][8];                                //0xcb8
    struct _MI_STANDBY_LOOKASIDE StandbyPageCachePerChannel[4][8];          //0x17c0
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x57c0
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x57e0
    volatile ULONGLONG FreeCount[2];                                        //0x5820
    ULONGLONG TotalPages[4];                                                //0x5830
    ULONGLONG TotalPagesEntireNode;                                         //0x5850
    struct _MI_PARTITION* Partition;                                        //0x5858
    ULONG CurrentHugeRangeColor;                                            //0x5860
    ULONGLONG TotalHugeIoPages;                                             //0x5868
    struct _RTL_AVL_TREE HugePfnBadPages;                                   //0x5870
    ULONGLONG HugeIoRangeFreeCount[2][4];                                   //0x5878
    ULONG MmShiftedColor;                                                   //0x58b8
    ULONG Color;                                                            //0x58bc
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x58c0
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x5900
        ULONG Spare:31;                                                     //0x5900
    } Flags;                                                                //0x5900
    ULONG LargeListMoveInProgress;                                          //0x5904
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x5908
    struct _EX_PUSH_LOCK NodeLock;                                          //0x5910
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x5918
    UCHAR ChannelStatus;                                                    //0x5920
    UCHAR ChannelOrdering[4];                                               //0x5921
    UCHAR LockedChannelOrdering[4];                                         //0x5925
    UCHAR PowerAttribute[4];                                                //0x5929
    volatile LONG LargePageLock;                                            //0x5940
    struct _MI_PAGE_COLORS PageColorTable[3];                               //0x5944
    ULONGLONG NumberOfPagesGoingBad;                                        //0x5978
    VOID* BootZeroContext;                                                  //0x5980
    VOID* ZeroingVaBase;                                                    //0x5988
    ULONGLONG TotalBytesToZero;                                             //0x5990
    ULONGLONG PerProcessorNumberOfBytesToZero;                              //0x5998
    VOID* ZeroingContext;                                                   //0x59a0
    volatile ULONG ZeroingProcessorCount;                                   //0x59a8
    volatile LONG ZeroHand;                                                 //0x59ac
    volatile LONG FinishedProcessors;                                       //0x59b0
    UCHAR BackgroundZeroingActive;                                          //0x59b4
    UCHAR ZeroThreadsReady;                                                 //0x59b5
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x59b8
    struct _CACHED_KSTACK_LIST CachedKernelStacks[3];                       //0x59c0
    struct _CACHED_KSTACK_LIST CachedKernelShadowStackLists[3];             //0x5a20
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[7];                      //0x5a80
    struct _MMPFNLIST EnclavePageListHead;                                  //0x5f40
};
/* Used in */
// _MI_PARTITION_CORE

