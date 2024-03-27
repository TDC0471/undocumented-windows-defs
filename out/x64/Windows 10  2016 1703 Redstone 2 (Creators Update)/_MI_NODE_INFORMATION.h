#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MI_REBUILD_LARGE_PAGE_TIMER.h>
#include <_MMPFNLIST_SHORT.h>
#include <_EX_PUSH_LOCK.h>

//0x888 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONGLONG LargePageFreeCount[3][2];                                     //0x0
    struct _LIST_ENTRY LargePages[3][2][2][4];                              //0x30
    ULONGLONG LargePagesCount[3][2][2][4];                                  //0x330
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;              //0x4b0
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x4d8
    volatile ULONGLONG FreeCount[2];                                        //0x7d8
    ULONGLONG TotalPages[4];                                                //0x7e8
    ULONGLONG TotalPagesEntireNode;                                         //0x808
    ULONG MmShiftedColor;                                                   //0x810
    ULONG Color;                                                            //0x814
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x818
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x858
        ULONG Spare:31;                                                     //0x858
    } Flags;                                                                //0x858
    struct _EX_PUSH_LOCK NodeLock;                                          //0x860
    ULONGLONG ZeroThreadHugeMapLock;                                        //0x868
    UCHAR ChannelStatus;                                                    //0x870
    UCHAR ChannelOrdering[4];                                               //0x871
    UCHAR LockedChannelOrdering[4];                                         //0x875
    UCHAR PowerAttribute[4];                                                //0x879
    ULONGLONG LargePageLock;                                                //0x880
};
/* Used in */
// _MI_PARTITION_CORE

