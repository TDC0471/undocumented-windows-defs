#pragma once
/* ------------------ */

#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MI_SYSTEM_NODE_NONPAGED_POOL.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_KAFFINITY_EX.h>
#include <_WORK_QUEUE_ITEM.h>

//0x1280 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    volatile ULONG NumaHintIndex;                                           //0x4
    ULONG NumaLastRangeIndexInclusive;                                      //0x8
    UCHAR MemoryNodeWithNoProcessorsFound;                                  //0xc
    UCHAR NodeShift;                                                        //0xd
    UCHAR ChannelShift;                                                     //0xe
    UCHAR AccessBitReplacementHonored;                                      //0xf
    ULONG ChannelHintIndex;                                                 //0x10
    ULONG ChannelLastRangeIndexInclusive;                                   //0x14
    struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;                           //0x18
    struct _MI_SYSTEM_NODE_NONPAGED_POOL* SystemNodeNonPagedPool;           //0x20
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];                          //0x28
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x48
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x50
    ULONG SecondLevelCacheSize;                                             //0x58
    ULONG FirstLevelCacheSize;                                              //0x5c
    ULONG PhysicalAddressBits;                                              //0x60
    ULONG PfnDatabasePageBits;                                              //0x64
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x68
    UCHAR PageTableReuseRequiresFlush;                                      //0x69
    ULONGLONG TotalPagesAllowed;                                            //0x70
    ULONG SecondaryColorMask;                                               //0x78
    ULONG SecondaryColors;                                                  //0x7c
    ULONG FlushTbForAttributeChange;                                        //0x80
    ULONG FlushCacheForAttributeChange;                                     //0x84
    ULONG FlushCacheForPageAttributeChange;                                 //0x88
    ULONG CacheFlushPromoteThreshold;                                       //0x8c
    ULONGLONG InvalidPteMask;                                               //0xc0
    ULONG LargePageColors[3];                                               //0x100
    ULONGLONG FlushTbThreshold;                                             //0x110
    UCHAR AttributeChangeRequiresReZero;                                    //0x118
    ULONGLONG HighestPossiblePhysicalPage;                                  //0x120
    ULONGLONG VsmKernelPageCount;                                           //0x128
    ULONGLONG HugePageRemoveTracker[512];                                   //0x130
    volatile ULONGLONG HotAddSequenceNumber;                                //0x1130
    volatile LONG ParkedCoresLock;                                          //0x1140
    struct _KAFFINITY_EX ParkedCores;                                       //0x1148
    struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;                            //0x1250
    volatile ULONGLONG SpecialPurposeMemoryTypeId;                          //0x1270
    ULONG SpecialPurposeMemoryQueryTypeExtraSpace;                          //0x1278
};
/* Used in */
// _MI_SYSTEM_INFORMATION

