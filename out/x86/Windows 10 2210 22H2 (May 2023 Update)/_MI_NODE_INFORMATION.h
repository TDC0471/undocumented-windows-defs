#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_RTL_BITMAP.h>
#include <_MI_LARGE_PAGE_LISTS_CHANGING.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_PAGE_COLORS.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_GROUP_AFFINITY.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>

//0x280 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[2];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x130
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x180
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x190
    volatile ULONG FreeCount[2];                                            //0x1d0
    ULONG TotalPages[1];                                                    //0x1d8
    ULONG TotalPagesEntireNode;                                             //0x1dc
    ULONG MmShiftedColor;                                                   //0x1e0
    ULONG Color;                                                            //0x1e4
    volatile ULONG ChannelFreeCount[1][2];                                  //0x1e8
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x1f0
        ULONG Spare:31;                                                     //0x1f0
    } Flags;                                                                //0x1f0
    ULONG LargeListMoveInProgress;                                          //0x1f4
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x1f8
    struct _EX_PUSH_LOCK NodeLock;                                          //0x1fc
    UCHAR ChannelStatus;                                                    //0x200
    UCHAR ChannelOrdering[1];                                               //0x201
    UCHAR LockedChannelOrdering[1];                                         //0x202
    UCHAR PowerAttribute[1];                                                //0x203
    ULONG LargePageLock;                                                    //0x204
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x208
    ULONG NumberOfPagesGoingBad;                                            //0x214
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x218
    VOID* BootZeroContext;                                                  //0x230
    VOID* BootZeroPageTimesPerProcessor;                                    //0x234
    VOID* ZeroingVaBase;                                                    //0x238
    ULONG TotalBytesToZero;                                                 //0x23c
    ULONG PerProcessorNumberOfBytesToZero;                                  //0x240
    VOID* ZeroingContext;                                                   //0x244
    volatile ULONG ZeroingProcessorCount;                                   //0x248
    volatile LONG ZeroHand;                                                 //0x24c
    volatile LONG FinishedProcessors;                                       //0x250
    ULONGLONG CyclesToZeroOneLargePage;                                     //0x258
    ULONGLONG* ScaledCyclesToZeroOneLargePage;                              //0x260
    struct _GROUP_AFFINITY GroupAffinity;                                   //0x264
    USHORT ProcessorCount;                                                  //0x270
    UCHAR BackgroundZeroingActive;                                          //0x272
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x274
};
/* Used in */
// _MI_PARTITION_CORE

