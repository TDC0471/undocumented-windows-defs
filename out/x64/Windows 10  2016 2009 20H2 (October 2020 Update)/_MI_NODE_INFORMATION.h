#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST_SHORT.h>
#include <_RTL_BITMAP.h>
#include <_MI_LARGE_PAGE_LISTS_CHANGING.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_PAGE_COLORS.h>
#include <_MI_WRITE_CALIBRATION.h>
#include <_GROUP_AFFINITY.h>
#include <_PHYSICAL_MEMORY_DESCRIPTOR.h>

//0x11c0 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0xc90
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0xcb8
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0xfc0
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0xfe0
    volatile ULONGLONG FreeCount[2];                                        //0x1020
    ULONGLONG TotalPages[4];                                                //0x1030
    ULONGLONG TotalPagesEntireNode;                                         //0x1050
    ULONG CurrentHugeRangeColor;                                            //0x1058
    ULONGLONG HugeIoRangeFreeCount[2];                                      //0x1060
    ULONG MmShiftedColor;                                                   //0x1070
    ULONG Color;                                                            //0x1074
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x1078
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x10b8
        ULONG Spare:31;                                                     //0x10b8
    } Flags;                                                                //0x10b8
    ULONG LargeListMoveInProgress;                                          //0x10bc
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x10c0
    struct _EX_PUSH_LOCK NodeLock;                                          //0x10c8
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x10d0
    UCHAR ChannelStatus;                                                    //0x10d8
    UCHAR ChannelOrdering[4];                                               //0x10d9
    UCHAR LockedChannelOrdering[4];                                         //0x10dd
    UCHAR PowerAttribute[4];                                                //0x10e1
    ULONGLONG LargePageLock;                                                //0x10e8
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x10f0
    ULONGLONG NumberOfPagesGoingBad;                                        //0x1100
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x1108
    VOID* BootZeroContext;                                                  //0x1128
    VOID* BootZeroPageTimesPerProcessor;                                    //0x1130
    VOID* ZeroingVaBase;                                                    //0x1138
    ULONGLONG TotalBytesToZero;                                             //0x1140
    ULONGLONG PerProcessorNumberOfBytesToZero;                              //0x1148
    VOID* ZeroingContext;                                                   //0x1150
    volatile ULONG ZeroingProcessorCount;                                   //0x1158
    volatile LONG ZeroHand;                                                 //0x115c
    volatile LONG FinishedProcessors;                                       //0x1160
    ULONGLONG CyclesToZeroOneLargePage;                                     //0x1168
    ULONGLONG* ScaledCyclesToZeroOneLargePage;                              //0x1170
    struct _GROUP_AFFINITY GroupAffinity;                                   //0x1178
    USHORT ProcessorCount;                                                  //0x1188
    UCHAR BackgroundZeroingActive;                                          //0x118a
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x1190
};
/* Used in */
// _MI_PARTITION_CORE

