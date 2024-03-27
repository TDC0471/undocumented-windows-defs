#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST_SHORT.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_PAGE_COLORS.h>

//0x7c0 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x330
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x358
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x680
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x6a0
    volatile ULONGLONG FreeCount[2];                                        //0x6e0
    ULONGLONG TotalPages[4];                                                //0x6f0
    ULONGLONG TotalPagesEntireNode;                                         //0x710
    ULONG CurrentHugeRangeColor;                                            //0x718
    ULONGLONG HugeIoRangeFreeCount[2];                                      //0x720
    ULONG MmShiftedColor;                                                   //0x730
    ULONG Color;                                                            //0x734
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x738
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x778
        ULONG Spare:31;                                                     //0x778
    } Flags;                                                                //0x778
    struct _EX_PUSH_LOCK NodeLock;                                          //0x780
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x788
    volatile UCHAR LargeListMoveInProgress;                                 //0x790
    UCHAR ChannelStatus;                                                    //0x791
    UCHAR ChannelOrdering[4];                                               //0x792
    UCHAR LockedChannelOrdering[4];                                         //0x796
    UCHAR PowerAttribute[4];                                                //0x79a
    ULONGLONG LargePageLock;                                                //0x7a0
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x7a8
};
/* Used in */
// _MI_PARTITION_CORE

