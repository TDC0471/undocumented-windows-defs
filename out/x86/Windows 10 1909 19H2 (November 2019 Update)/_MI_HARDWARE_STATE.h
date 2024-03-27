#pragma once
/* ------------------ */

#include <_MI_NODE_NUMBER_ZERO_BASED.h>
#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>
#include <_RTL_AVL_TREE.h>
#include <_RTL_BITMAP.h>
#include <_EX_PUSH_LOCK.h>

//0x180 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    ULONG NumaHintIndex;                                                    //0x4
    ULONG NumaLastRangeIndexInclusive;                                      //0x8
    UCHAR NumaTableCaptured;                                                //0xc
    UCHAR NodeShift;                                                        //0xd
    UCHAR ChannelShift;                                                     //0xe
    struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;                           //0x10
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x14
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];                          //0x18
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x28
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x2c
    volatile LONG NumaNodeLock;                                             //0x30
    ULONG SecondLevelCacheSize;                                             //0x34
    ULONG FirstLevelCacheSize;                                              //0x38
    ULONG PhysicalAddressBits;                                              //0x3c
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x40
    ULONG TotalPagesAllowed;                                                //0x44
    ULONG SecondaryColorMask;                                               //0x48
    ULONG SecondaryColors;                                                  //0x4c
    ULONG FlushTbForAttributeChange;                                        //0x50
    ULONG FlushCacheForAttributeChange;                                     //0x54
    ULONG FlushCacheForPageAttributeChange;                                 //0x58
    ULONG CacheFlushPromoteThreshold;                                       //0x5c
    ULONGLONG InvalidPteMask;                                               //0x80
    ULONG LargePageColors[2];                                               //0xc0
    ULONG FlushTbThreshold;                                                 //0xc8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0xcc
    UCHAR AttributeChangeRequiresReZero;                                    //0x10c
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x110
    ULONG HighestPossiblePhysicalPage;                                      //0x130
    ULONG VsmKernelPageCount;                                               //0x134
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0x138
    VOID* EnclaveMetadataPage;                                              //0x13c
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0x140
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0x144
    volatile LONG EnclaveMetadataPageLock;                                  //0x148
};
/* Used in */
// _MI_SYSTEM_INFORMATION

