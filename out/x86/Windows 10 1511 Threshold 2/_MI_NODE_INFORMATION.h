#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x68 bytes (sizeof)
struct _MI_NODE_INFORMATION
{
    ULONG LargePageFreeCount[2];                                            //0x0
    struct _LIST_ENTRY LargePages[2][2][1];                                 //0x8
    ULONG LargePagesCount[2][2][1];                                         //0x28
    volatile ULONG FreeCount[2];                                            //0x38
    ULONG TotalPages[1];                                                    //0x40
    ULONG TotalPagesEntireNode;                                             //0x44
    ULONG MmShiftedColor;                                                   //0x48
    ULONG Color;                                                            //0x4c
    volatile ULONG ChannelFreeCount[1][2];                                  //0x50
    struct
    {
        ULONG ChannelsHotCold:1;                                            //0x58
        ULONG Spare:31;                                                     //0x58
    } Flags;                                                                //0x58
    struct _EX_PUSH_LOCK NodeLock;                                          //0x5c
    UCHAR ChannelStatus;                                                    //0x60
    UCHAR ChannelOrdering[1];                                               //0x61
    UCHAR LockedChannelOrdering[1];                                         //0x62
    UCHAR PowerAttribute[1];                                                //0x63
    ULONG LargePageLock;                                                    //0x64
};
/* Used in */
// _MI_PARTITION_CORE

