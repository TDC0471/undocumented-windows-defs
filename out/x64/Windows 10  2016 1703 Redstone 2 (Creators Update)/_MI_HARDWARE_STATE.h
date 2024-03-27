#pragma once
/* ------------------ */

#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>
#include <_RTL_AVL_TREE.h>

//0xf0 bytes (sizeof)
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
    ULONG FlushTbForAttributeChange;                                        //0x50
    ULONG FlushCacheForAttributeChange;                                     //0x54
    ULONG FlushCacheForPageAttributeChange;                                 //0x58
    ULONG CacheFlushPromoteThreshold;                                       //0x5c
    ULONGLONG FlushTbThreshold;                                             //0x60
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x68
    UCHAR AttributeChangeRequiresReZero;                                    //0xa8
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0xb0
    ULONGLONG PrimaryPfns;                                                  //0xd0
    ULONGLONG HighestPossiblePhysicalPage;                                  //0xd8
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0xe0
    ULONGLONG VsmKernelPageCount;                                           //0xe8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

