#pragma once
/* ------------------ */

#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_LARGE_INTEGER.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>

//0x140 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    ULONG NumaHintIndex;                                                    //0x4
    ULONG NumaLastRangeIndexInclusive;                                      //0x8
    UCHAR NodeShift;                                                        //0xc
    UCHAR ChannelShift;                                                     //0xd
    ULONG ChannelHintIndex;                                                 //0x10
    ULONG ChannelLastRangeIndexInclusive;                                   //0x14
    struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;                           //0x18
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x1c
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];                          //0x20
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x30
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x34
    ULONG SecondLevelCacheSize;                                             //0x38
    ULONG FirstLevelCacheSize;                                              //0x3c
    ULONG PhysicalAddressBits;                                              //0x40
    ULONG LogicalProcessorsPerCore;                                         //0x44
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x48
    ULONG TotalPagesAllowed;                                                //0x4c
    ULONG SecondaryColorMask;                                               //0x50
    ULONG SecondaryColors;                                                  //0x54
    ULONG FlushTbForAttributeChange;                                        //0x58
    ULONG FlushCacheForAttributeChange;                                     //0x5c
    ULONG FlushCacheForPageAttributeChange;                                 //0x60
    ULONG CacheFlushPromoteThreshold;                                       //0x64
    union _LARGE_INTEGER PerformanceCounterFrequency;                       //0x68
    ULONGLONG InvalidPteMask;                                               //0x80
    ULONG LargePageColors[2];                                               //0xc0
    ULONG FlushTbThreshold;                                                 //0xc8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0xcc
    UCHAR AttributeChangeRequiresReZero;                                    //0x10c
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x110
    ULONG HighestPossiblePhysicalPage;                                      //0x130
    ULONG VsmKernelPageCount;                                               //0x134
};
/* Used in */
// _MI_SYSTEM_INFORMATION

