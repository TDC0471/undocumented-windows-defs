#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGES.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_PAGE_COLORS.h>

//0x140 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[2];                          //0x0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x50
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x80
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x90
    volatile ULONG FreeCount[2];                                            //0xd0
    ULONG TotalPages[1];                                                    //0xd8
    ULONG TotalPagesEntireNode;                                             //0xdc
    ULONG MmShiftedColor;                                                   //0xe0
    ULONG Color;                                                            //0xe4
    volatile ULONG ChannelFreeCount[1][2];                                  //0xe8
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0xf0
        ULONG Spare:31;                                                     //0xf0
    } Flags;                                                                //0xf0
    struct _EX_PUSH_LOCK NodeLock;                                          //0xf4
    volatile UCHAR LargeListMoveInProgress;                                 //0xf8
    UCHAR ChannelStatus;                                                    //0xf9
    UCHAR ChannelOrdering[1];                                               //0xfa
    UCHAR LockedChannelOrdering[1];                                         //0xfb
    UCHAR PowerAttribute[1];                                                //0xfc
    ULONG LargePageLock;                                                    //0x100
    struct _MI_PAGE_COLORS PageColorTable;                                  //0x104
};
/* Used in */
// _MI_PARTITION_CORE

