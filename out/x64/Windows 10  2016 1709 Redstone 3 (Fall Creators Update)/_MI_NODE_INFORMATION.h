#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST_SHORT.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>

//0x2040 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONGLONG LargePageFreeCount[3][2];                                     //0x0
    ULONGLONG LargePagesCount[3][2][2][4];                                  //0x30
    struct _LIST_ENTRY LargePages[2][2][2][4];                              //0x1b0
    struct _LIST_ENTRY MediumPages[2][2][4][16];                            //0x3b0
    ULONGLONG MediumPagesCount[2][2][4][16];                                //0x13b0
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x1bb0
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x1bd8
    struct _RTL_BITMAP FreePageListHeadsBitmap[2];                          //0x1f00
    ULONG FreePageListHeadsBitmapBuffer[16];                                //0x1f20
    volatile ULONGLONG FreeCount[2];                                        //0x1f60
    ULONGLONG TotalPages[4];                                                //0x1f70
    ULONGLONG TotalPagesEntireNode;                                         //0x1f90
    ULONG MmShiftedColor;                                                   //0x1f98
    ULONG Color;                                                            //0x1f9c
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x1fa0
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x1fe0
        ULONG Spare:31;                                                     //0x1fe0
    } Flags;                                                                //0x1fe0
    struct _EX_PUSH_LOCK NodeLock;                                          //0x1fe8
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x1ff0
    UCHAR ChannelStatus;                                                    //0x1ff8
    UCHAR ChannelOrdering[4];                                               //0x1ff9
    UCHAR LockedChannelOrdering[4];                                         //0x1ffd
    UCHAR PowerAttribute[4];                                                //0x2001
    ULONGLONG LargePageLock;                                                //0x2008
};
/* Used in */
// _MI_PARTITION_CORE

