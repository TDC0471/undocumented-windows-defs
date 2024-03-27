#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST_SHORT.h>
#include <_EX_PUSH_LOCK.h>

//0x890 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONGLONG LargePageFreeCount[3][2];                                     //0x0
    struct _LIST_ENTRY LargePages[3][2][2][4];                              //0x30
    ULONGLONG LargePagesCount[3][2][2][4];                                  //0x330
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x4b0
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x4e0
    volatile ULONGLONG FreeCount[2];                                        //0x7e0
    ULONGLONG TotalPages[4];                                                //0x7f0
    ULONGLONG TotalPagesEntireNode;                                         //0x810
    ULONG MmShiftedColor;                                                   //0x818
    ULONG Color;                                                            //0x81c
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x820
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x860
        ULONG Spare:31;                                                     //0x860
    } Flags;                                                                //0x860
    struct _EX_PUSH_LOCK NodeLock;                                          //0x868
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x870
    UCHAR ChannelStatus;                                                    //0x878
    UCHAR ChannelOrdering[4];                                               //0x879
    UCHAR LockedChannelOrdering[4];                                         //0x87d
    UCHAR PowerAttribute[4];                                                //0x881
    ULONGLONG LargePageLock;                                                //0x888
};
/* Used in */
// _MI_PARTITION_CORE

