#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_EX_PUSH_LOCK.h>

//0xbc bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONG LargePageFreeCount[2][2];                                         //0x0
    struct _LIST_ENTRY LargePages[2][2][2][1];                              //0x10
    ULONG LargePagesCount[2][2][2][1];                                      //0x50
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x70
    volatile ULONG FreeCount[2];                                            //0x8c
    ULONG TotalPages[1];                                                    //0x94
    ULONG TotalPagesEntireNode;                                             //0x98
    ULONG MmShiftedColor;                                                   //0x9c
    ULONG Color;                                                            //0xa0
    volatile ULONG ChannelFreeCount[1][2];                                  //0xa4
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0xac
        ULONG Spare:31;                                                     //0xac
    } Flags;                                                                //0xac
    struct _EX_PUSH_LOCK NodeLock;                                          //0xb0
    UCHAR ChannelStatus;                                                    //0xb4
    UCHAR ChannelOrdering[1];                                               //0xb5
    UCHAR LockedChannelOrdering[1];                                         //0xb6
    UCHAR PowerAttribute[1];                                                //0xb7
    ULONG LargePageLock;                                                    //0xb8
};
/* Used in */
// _MI_PARTITION_CORE

