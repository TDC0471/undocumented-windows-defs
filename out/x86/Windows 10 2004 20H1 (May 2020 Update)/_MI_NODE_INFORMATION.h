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

//0x1c0 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[2];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x70
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0xc0
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0xd0
    volatile ULONG FreeCount[2];                                            //0x110
    ULONG TotalPages[1];                                                    //0x118
    ULONG TotalPagesEntireNode;                                             //0x11c
    ULONG MmShiftedColor;                                                   //0x120
    ULONG Color;                                                            //0x124
    volatile ULONG ChannelFreeCount[1][2];                                  //0x128
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x130
        ULONG Spare:31;                                                     //0x130
    } Flags;                                                                //0x130
    ULONG LargeListMoveInProgress;                                          //0x134
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x138
    struct _EX_PUSH_LOCK NodeLock;                                          //0x13c
    UCHAR ChannelStatus;                                                    //0x140
    UCHAR ChannelOrdering[1];                                               //0x141
    UCHAR LockedChannelOrdering[1];                                         //0x142
    UCHAR PowerAttribute[1];                                                //0x143
    ULONG LargePageLock;                                                    //0x144
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x148
    ULONG NumberOfPagesGoingBad;                                            //0x154
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x158
    VOID* BootZeroContext;                                                  //0x170
    VOID* BootZeroPageTimesPerProcessor;                                    //0x174
    VOID* ZeroingVaBase;                                                    //0x178
    ULONG TotalBytesToZero;                                                 //0x17c
    ULONG PerProcessorNumberOfBytesToZero;                                  //0x180
    VOID* ZeroingContext;                                                   //0x184
    volatile ULONG ZeroingProcessorCount;                                   //0x188
    volatile LONG ZeroHand;                                                 //0x18c
    volatile LONG FinishedProcessors;                                       //0x190
    ULONGLONG CyclesToZeroOneLargePage;                                     //0x198
    ULONGLONG* ScaledCyclesToZeroOneLargePage;                              //0x1a0
    struct _GROUP_AFFINITY GroupAffinity;                                   //0x1a4
    USHORT ProcessorCount;                                                  //0x1b0
    UCHAR BackgroundZeroingActive;                                          //0x1b2
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x1b4
};
/* Used in */
// _MI_PARTITION_CORE

