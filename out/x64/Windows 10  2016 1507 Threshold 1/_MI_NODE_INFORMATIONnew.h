#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MMPFNLIST_SHORT.h>
#include <_EX_PUSH_LOCK.h>

//0x538 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONGLONG LargePageFreeCount[2];                                        //0x0
    struct _LIST_ENTRY LargePages[2][2][4];                                 //0x10
    ULONGLONG LargePagesCount[2][2][4];                                     //0x110
    struct _MMPFNLIST_SHORT StandbyPageList[4][8];                          //0x190
    volatile ULONGLONG FreeCount[2];                                        //0x490
    ULONGLONG TotalPages[4];                                                //0x4a0
    ULONGLONG TotalPagesEntireNode;                                         //0x4c0
    ULONG MmShiftedColor;                                                   //0x4c8
    ULONG Color;                                                            //0x4cc
    volatile ULONGLONG ChannelFreeCount[4][2];                              //0x4d0
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x510
        ULONG Spare:31;                                                     //0x510
    } Flags;                                                                //0x510
    struct _EX_PUSH_LOCK NodeLock;                                          //0x518
    UCHAR ChannelStatus;                                                    //0x520
    UCHAR ChannelOrdering[4];                                               //0x521
    UCHAR LockedChannelOrdering[4];                                         //0x525
    UCHAR PowerAttribute[4];                                                //0x529
    ULONGLONG LargePageLock;                                                //0x530
};
/* Used in */
// _MI_PARTITION_CORE

