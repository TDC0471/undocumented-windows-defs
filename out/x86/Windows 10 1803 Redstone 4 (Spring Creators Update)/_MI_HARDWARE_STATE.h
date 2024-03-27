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

//0xe0 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    ULONG NumaLastRangeIndex;                                               //0x4
    UCHAR NumaTableCaptured;                                                //0x8
    UCHAR NodeShift;                                                        //0x9
    UCHAR ChannelShift;                                                     //0xa
    USHORT* NodeGraph;                                                      //0xc
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x10
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x14
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x18
    ULONG SecondLevelCacheSize;                                             //0x1c
    ULONG FirstLevelCacheSize;                                              //0x20
    ULONG PhysicalAddressBits;                                              //0x24
    ULONG TotalPagesAllowed;                                                //0x28
    ULONG SecondaryColorMask;                                               //0x2c
    ULONG SecondaryColors;                                                  //0x30
    ULONG LargePageColors[2];                                               //0x34
    ULONG FlushTbForAttributeChange;                                        //0x3c
    ULONG FlushCacheForAttributeChange;                                     //0x40
    ULONG FlushCacheForPageAttributeChange;                                 //0x44
    ULONG CacheFlushPromoteThreshold;                                       //0x48
    ULONG FlushTbThreshold;                                                 //0x4c
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x50
    UCHAR AttributeChangeRequiresReZero;                                    //0x90
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0x98
    ULONG HighestPossiblePhysicalPage;                                      //0xb8
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0xbc
    VOID* EnclaveMetadataPage;                                              //0xc0
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0xc4
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0xc8
    volatile LONG EnclaveMetadataPageLock;                                  //0xcc
    ULONG VsmKernelPageCount;                                               //0xd0
    ULONG ColorCount[2];                                                    //0xd4
};
/* Used in */
// _MI_SYSTEM_INFORMATION

