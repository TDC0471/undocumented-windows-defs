#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>

//0x400 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONG LargePageFreeCount[2][2];                                         //0x0
    ULONG LargePagesCount[2][2][2][1];                                      //0x10
    struct _LIST_ENTRY LargePages[1][2][2][1];                              //0x30
    struct _LIST_ENTRY MediumPages[2][2][1][16];                            //0x50
    ULONG MediumPagesCount[2][2][1][16];                                    //0x250
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x350
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x380
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x390
    volatile ULONG FreeCount[2];                                            //0x3d0
    ULONG TotalPages[1];                                                    //0x3d8
    ULONG TotalPagesEntireNode;                                             //0x3dc
    ULONG MmShiftedColor;                                                   //0x3e0
    ULONG Color;                                                            //0x3e4
    volatile ULONG ChannelFreeCount[1][2];                                  //0x3e8
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x3f0
        ULONG Spare:31;                                                     //0x3f0
    } Flags;                                                                //0x3f0
    struct _EX_PUSH_LOCK NodeLock;                                          //0x3f4
    UCHAR ChannelStatus;                                                    //0x3f8
    UCHAR ChannelOrdering[1];                                               //0x3f9
    UCHAR LockedChannelOrdering[1];                                         //0x3fa
    UCHAR PowerAttribute[1];                                                //0x3fb
    ULONG LargePageLock;                                                    //0x3fc
};
/* Used in */
// _MI_PARTITION_CORE

