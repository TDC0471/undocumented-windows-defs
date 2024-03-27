#pragma once
/* ------------------ */

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
    ULONG NumaLastRangeIndex;                                               //0x4
    UCHAR NumaTableCaptured;                                                //0x8
    UCHAR NodeShift;                                                        //0x9
    UCHAR ChannelShift;                                                     //0xa
    WCHAR* NodeGraph;                                                       //0x10
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x18
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x20
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x28
    ULONG SecondLevelCacheSize;                                             //0x30
    ULONG FirstLevelCacheSize;                                              //0x34
    ULONG PhysicalAddressBits;                                              //0x38
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x3c
    ULONGLONG TotalPagesAllowed;                                            //0x40
    ULONG SecondaryColorMask;                                               //0x48
    ULONG SecondaryColors;                                                  //0x4c
    ULONG FlushTbForAttributeChange;                                        //0x50
    ULONG FlushCacheForAttributeChange;                                     //0x54
    ULONG FlushCacheForPageAttributeChange;                                 //0x58
    ULONG CacheFlushPromoteThreshold;                                       //0x5c
    ULONGLONG InvalidPteMask;                                               //0x80
    ULONG LargePageColors[3];                                               //0xc0
    ULONGLONG FlushTbThreshold;                                             //0xd0
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0xd8
    UCHAR AttributeChangeRequiresReZero;                                    //0x118
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x120
    ULONGLONG VsmKernelPageCount;                                           //0x140
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0x148
    VOID* EnclaveMetadataPage;                                              //0x150
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0x158
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0x160
    volatile LONG EnclaveMetadataPageLock;                                  //0x168
};
/* Used in */
// _MI_SYSTEM_INFORMATION

