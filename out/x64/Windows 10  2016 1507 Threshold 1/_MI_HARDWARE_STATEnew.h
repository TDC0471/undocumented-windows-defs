#pragma once
/* ------------------ */

#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_ZERO_COST_COUNTS.h>

//0xa8 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    USHORT* NodeGraph;                                                      //0x8
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x10
    ULONG NumaLastRangeIndex;                                               //0x18
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x20
    UCHAR NumaTableCaptured;                                                //0x28
    UCHAR NodeShift;                                                        //0x29
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x30
    UCHAR ChannelShift;                                                     //0x38
    ULONG SecondLevelCacheSize;                                             //0x3c
    ULONG FirstLevelCacheSize;                                              //0x40
    ULONG PhysicalAddressBits;                                              //0x44
    UCHAR WriteCombiningPtes;                                               //0x48
    UCHAR AllMainMemoryMustBeCached;                                        //0x49
    ULONGLONG TotalPagesAllowed;                                            //0x50
    ULONG SecondaryColorMask;                                               //0x58
    ULONG SecondaryColors;                                                  //0x5c
    ULONG FlushTbForAttributeChange;                                        //0x60
    ULONG FlushCacheForAttributeChange;                                     //0x64
    ULONG FlushCacheForPageAttributeChange;                                 //0x68
    ULONG CacheFlushPromoteThreshold;                                       //0x6c
    ULONGLONG FlushTbThreshold;                                             //0x70
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x78
    ULONGLONG PrimaryPfns;                                                  //0x98
    ULONGLONG HighestPossiblePhysicalPage;                                  //0xa0
};
/* Used in */
// _MI_SYSTEM_INFORMATION
