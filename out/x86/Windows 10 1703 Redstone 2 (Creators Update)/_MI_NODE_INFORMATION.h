#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_EX_PUSH_LOCK.h>

//0xb4 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONG LargePageFreeCount[2][2];                                         //0x0
    struct _LIST_ENTRY LargePages[2][2][2][1];                              //0x10
    ULONG LargePagesCount[2][2][2][1];                                      //0x50
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x70
    volatile ULONG FreeCount[2];                                            //0x84
    ULONG TotalPages[1];                                                    //0x8c
    ULONG TotalPagesEntireNode;                                             //0x90
    ULONG MmShiftedColor;                                                   //0x94
    ULONG Color;                                                            //0x98
    volatile ULONG ChannelFreeCount[1][2];                                  //0x9c
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0xa4
        ULONG Spare:31;                                                     //0xa4
    } Flags;                                                                //0xa4
    struct _EX_PUSH_LOCK NodeLock;                                          //0xa8
    UCHAR ChannelStatus;                                                    //0xac
    UCHAR ChannelOrdering[1];                                               //0xad
    UCHAR LockedChannelOrdering[1];                                         //0xae
    UCHAR PowerAttribute[1];                                                //0xaf
    ULONG LargePageLock;                                                    //0xb0
};
/* Used in */
// _MI_PARTITION_CORE

