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
    WCHAR* NodeGraph;                                                       //0xc
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x10
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x14
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x18
    ULONG SecondLevelCacheSize;                                             //0x1c
    ULONG FirstLevelCacheSize;                                              //0x20
    ULONG PhysicalAddressBits;                                              //0x24
    UCHAR ProcessorCachesFlushedOnPowerLoss;                                //0x28
    ULONG TotalPagesAllowed;                                                //0x2c
    ULONG SecondaryColorMask;                                               //0x30
    ULONG SecondaryColors;                                                  //0x34
    ULONG FlushTbForAttributeChange;                                        //0x38
    ULONG FlushCacheForAttributeChange;                                     //0x3c
    ULONG FlushCacheForPageAttributeChange;                                 //0x40
    ULONG CacheFlushPromoteThreshold;                                       //0x44
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

