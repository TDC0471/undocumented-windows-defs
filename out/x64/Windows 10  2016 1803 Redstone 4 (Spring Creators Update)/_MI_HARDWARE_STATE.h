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

//0x138 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    ULONG NumaLastRangeIndex;                                               //0x4
    UCHAR NumaTableCaptured;                                                //0x8
    UCHAR NodeShift;                                                        //0x9
    UCHAR ChannelShift;                                                     //0xa
    USHORT* NodeGraph;                                                      //0x10
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x18
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x20
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x28
    ULONG SecondLevelCacheSize;                                             //0x30
    ULONG FirstLevelCacheSize;                                              //0x34
    ULONG PhysicalAddressBits;                                              //0x38
    ULONGLONG TotalPagesAllowed;                                            //0x40
    ULONG SecondaryColorMask;                                               //0x48
    ULONG SecondaryColors;                                                  //0x4c
    ULONG LargePageColors[3];                                               //0x50
    ULONG FlushTbForAttributeChange;                                        //0x5c
    ULONG FlushCacheForAttributeChange;                                     //0x60
    ULONG FlushCacheForPageAttributeChange;                                 //0x64
    ULONG CacheFlushPromoteThreshold;                                       //0x68
    ULONGLONG FlushTbThreshold;                                             //0x70
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x78
    UCHAR AttributeChangeRequiresReZero;                                    //0xb8
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0xc0
    ULONGLONG PrimaryPfns;                                                  //0xe0
    ULONGLONG HighestPossiblePhysicalPage;                                  //0xe8
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0xf0
    VOID* EnclaveMetadataPage;                                              //0xf8
    struct _RTL_BITMAP* EnclaveMetadataBitMap;                              //0x100
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;                          //0x108
    volatile LONG EnclaveMetadataPageLock;                                  //0x110
    ULONGLONG VsmKernelPageCount;                                           //0x118
    ULONGLONG ColorCount[3];                                                //0x120
};
/* Used in */
// _MI_SYSTEM_INFORMATION

