#pragma once
/* ------------------ */

#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>
#include <_RTL_AVL_TREE.h>

//0xf8 bytes (sizeof)
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
    ULONG MediumPageColors;                                                 //0x50
    ULONG FlushTbForAttributeChange;                                        //0x54
    ULONG FlushCacheForAttributeChange;                                     //0x58
    ULONG FlushCacheForPageAttributeChange;                                 //0x5c
    ULONG CacheFlushPromoteThreshold;                                       //0x60
    ULONGLONG FlushTbThreshold;                                             //0x68
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x70
    UCHAR AttributeChangeRequiresReZero;                                    //0xb0
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0xb8
    ULONGLONG PrimaryPfns;                                                  //0xd8
    ULONGLONG HighestPossiblePhysicalPage;                                  //0xe0
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0xe8
    ULONGLONG VsmKernelPageCount;                                           //0xf0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

