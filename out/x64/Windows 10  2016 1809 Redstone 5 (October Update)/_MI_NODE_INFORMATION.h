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
    ULONG MmShiftedColor;                                                   //0x718
    ULONG Color;                                                            //0x71c
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x720
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x760
        ULONG Spare:31;                                                     //0x760
    } Flags;                                                                //0x760
    struct _EX_PUSH_LOCK NodeLock;                                          //0x768
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x770
    volatile UCHAR LargeListMoveInProgress;                                 //0x778
    UCHAR ChannelStatus;                                                    //0x779
    UCHAR ChannelOrdering[4];                                               //0x77a
    UCHAR LockedChannelOrdering[4];                                         //0x77e
    UCHAR PowerAttribute[4];                                                //0x782
    ULONGLONG LargePageLock;                                                //0x788
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x790
};
/* Used in */
// _MI_PARTITION_CORE

