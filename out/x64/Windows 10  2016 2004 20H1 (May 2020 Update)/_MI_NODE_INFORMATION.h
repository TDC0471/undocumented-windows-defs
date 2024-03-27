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

//0x8c0 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x390
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x3b8
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x6c0
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x6e0
    volatile ULONGLONG FreeCount[2];                                        //0x720
    ULONGLONG TotalPages[4];                                                //0x730
    ULONGLONG TotalPagesEntireNode;                                         //0x750
    ULONG CurrentHugeRangeColor;                                            //0x758
    ULONGLONG HugeIoRangeFreeCount[2];                                      //0x760
    ULONG MmShiftedColor;                                                   //0x770
    ULONG Color;                                                            //0x774
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x778
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x7b8
        ULONG Spare:31;                                                     //0x7b8
    } Flags;                                                                //0x7b8
    ULONG LargeListMoveInProgress;                                          //0x7bc
    struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;                 //0x7c0
    struct _EX_PUSH_LOCK NodeLock;                                          //0x7c8
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x7d0
    UCHAR ChannelStatus;                                                    //0x7d8
    UCHAR ChannelOrdering[4];                                               //0x7d9
    UCHAR LockedChannelOrdering[4];                                         //0x7dd
    UCHAR PowerAttribute[4];                                                //0x7e1
    ULONGLONG LargePageLock;                                                //0x7e8
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x7f0
    ULONGLONG NumberOfPagesGoingBad;                                        //0x800
    struct _MI_WRITE_CALIBRATION WriteCalibration;                          //0x808
    VOID* BootZeroContext;                                                  //0x828
    VOID* BootZeroPageTimesPerProcessor;                                    //0x830
    VOID* ZeroingVaBase;                                                    //0x838
    ULONGLONG TotalBytesToZero;                                             //0x840
    ULONGLONG PerProcessorNumberOfBytesToZero;                              //0x848
    VOID* ZeroingContext;                                                   //0x850
    volatile ULONG ZeroingProcessorCount;                                   //0x858
    volatile LONG ZeroHand;                                                 //0x85c
    volatile LONG FinishedProcessors;                                       //0x860
    ULONGLONG CyclesToZeroOneLargePage;                                     //0x868
    ULONGLONG* ScaledCyclesToZeroOneLargePage;                              //0x870
    struct _GROUP_AFFINITY GroupAffinity;                                   //0x878
    USHORT ProcessorCount;                                                  //0x888
    UCHAR BackgroundZeroingActive;                                          //0x88a
    struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;         //0x890
};
/* Used in */
// _MI_PARTITION_CORE

