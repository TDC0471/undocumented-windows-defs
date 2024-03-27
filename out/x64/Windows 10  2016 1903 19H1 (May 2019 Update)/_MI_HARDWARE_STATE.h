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

//0x1c0 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    ULONG NumaHintIndex;                                                    //0x4
    ULONG NumaLastRangeIndexInclusive;                                      //0x8
    UCHAR NumaTableCaptured;                                                //0xc
    UCHAR NodeShift;                                                        //0xd
    UCHAR ChannelShift;                                                     //0xe
    struct _MI_NODE_NUMBER_ZERO_BASED* NodeGraph;                           //0x10
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x18
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];                          //0x20
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x40
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x48
    volatile LONG NumaNodeLock;                                             //0x50
    ULONG SecondLevelCacheSize;                                             //0x54
    ULONG FirstLevelCacheSize;                                              //0x58
    ULONG PhysicalAddressBits;                                              //0x5c
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x60
    ULONGLONG TotalPagesAllowed;                                            //0x68
    ULONG SecondaryColorMask;                                               //0x70
    ULONG SecondaryColors;                                                  //0x74
    ULONG FlushTbForAttributeChange;                                        //0x78
    ULONG FlushCacheForAttributeChange;                                     //0x7c
    ULONG FlushCacheForPageAttributeChange;                                 //0x80
    ULONG CacheFlushPromoteThreshold;                                       //0x84
    ULONGLONG InvalidPteMask;                                               //0xc0
    ULONG LargePageColors[3];                                               //0x100
    ULONGLONG FlushTbThreshold;                                             //0x110
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x118
    UCHAR AttributeChangeRequiresReZero;                                    //0x158
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x160
    ULONGLONG VsmKernelPageCount;                                           //0x180
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0x188
    VOID* EnclaveMetadataPage;                                              //0x190
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0x198
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0x1a0
    volatile LONG EnclaveMetadataPageLock;                                  //0x1a8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

