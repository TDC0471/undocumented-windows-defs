#pragma once
/* ------------------ */

#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_LARGE_INTEGER.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>

//0x1c0 bytes (sizeof)
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
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x20
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];                          //0x28
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x48
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x50
    ULONG SecondLevelCacheSize;                                             //0x58
    ULONG FirstLevelCacheSize;                                              //0x5c
    ULONG PhysicalAddressBits;                                              //0x60
    ULONG LogicalProcessorsPerCore;                                         //0x64
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x68
    ULONGLONG TotalPagesAllowed;                                            //0x70
    ULONG SecondaryColorMask;                                               //0x78
    ULONG SecondaryColors;                                                  //0x7c
    ULONG FlushTbForAttributeChange;                                        //0x80
    ULONG FlushCacheForAttributeChange;                                     //0x84
    ULONG FlushCacheForPageAttributeChange;                                 //0x88
    ULONG CacheFlushPromoteThreshold;                                       //0x8c
    union _LARGE_INTEGER PerformanceCounterFrequency;                       //0x90
    ULONGLONG InvalidPteMask;                                               //0xc0
    ULONG LargePageColors[3];                                               //0x100
    ULONGLONG FlushTbThreshold;                                             //0x110
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x118
    UCHAR AttributeChangeRequiresReZero;                                    //0x158
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x160
    ULONGLONG VsmKernelPageCount;                                           //0x180
};
/* Used in */
// _MI_SYSTEM_INFORMATION

