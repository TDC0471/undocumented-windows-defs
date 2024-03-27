#pragma once
/* ------------------ */

#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_ZERO_COST_COUNTS.h>

//0x78 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    USHORT* NodeGraph;                                                      //0x4
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x8
    ULONG NumaLastRangeIndex;                                               //0xc
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x10
    UCHAR NumaTableCaptured;                                                //0x14
    UCHAR NodeShift;                                                        //0x15
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x18
    UCHAR ChannelShift;                                                     //0x1c
    ULONG SecondLevelCacheSize;                                             //0x20
    ULONG FirstLevelCacheSize;                                              //0x24
    ULONG PhysicalAddressBits;                                              //0x28
    UCHAR AllMainMemoryMustBeCached;                                        //0x2c
    ULONG TotalPagesAllowed;                                                //0x30
    ULONG SecondaryColorMask;                                               //0x34
    ULONG SecondaryColors;                                                  //0x38
    ULONG FlushTbForAttributeChange;                                        //0x3c
    ULONG FlushCacheForAttributeChange;                                     //0x40
    ULONG FlushCacheForPageAttributeChange;                                 //0x44
    ULONG CacheFlushPromoteThreshold;                                       //0x48
    ULONG FlushTbThreshold;                                                 //0x4c
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x50
    ULONG HighestPossiblePhysicalPage;                                      //0x70
};
/* Used in */
// _MI_SYSTEM_INFORMATION

