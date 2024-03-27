#pragma once
/* ------------------ */

#include <_MI_SYSTEM_NODE_INFORMATION.h>
#include <_HAL_NODE_RANGE.h>
#include <_HAL_CHANNEL_MEMORY_RANGES.h>
#include <_MI_PFN_CACHE_ATTRIBUTE.h>
#include <_MI_ZERO_COST_COUNTS.h>
#include <_RTL_AVL_TREE.h>

//0x100 bytes (sizeof)
struct _MI_HARDWARE_STATE
{
    ULONG NodeMask;                                                         //0x0
    USHORT* NodeGraph;                                                      //0x8
    struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;              //0x10
    ULONG NumaLastRangeIndex;                                               //0x18
    struct _HAL_NODE_RANGE* NumaMemoryRanges;                               //0x20
    UCHAR NumaTableCaptured;                                                //0x28
    UCHAR NodeShift;                                                        //0x29
    struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;                 //0x30
    UCHAR ChannelShift;                                                     //0x38
    ULONG SecondLevelCacheSize;                                             //0x3c
    ULONG FirstLevelCacheSize;                                              //0x40
    ULONG PhysicalAddressBits;                                              //0x44
    UCHAR AllMainMemoryMustBeCached;                                        //0x48
    ULONGLONG TotalPagesAllowed;                                            //0x50
    ULONG SecondaryColorMask;                                               //0x58
    ULONG SecondaryColors;                                                  //0x5c
    ULONG FlushTbForAttributeChange;                                        //0x60
    ULONG FlushCacheForAttributeChange;                                     //0x64
    ULONG FlushCacheForPageAttributeChange;                                 //0x68
    ULONG CacheFlushPromoteThreshold;                                       //0x6c
    ULONGLONG FlushTbThreshold;                                             //0x70
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];             //0x78
    UCHAR AttributeChangeRequiresReZero;                                    //0xb8
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];                          //0xc0
    ULONGLONG PrimaryPfns;                                                  //0xe0
    ULONGLONG HighestPossiblePhysicalPage;                                  //0xe8
    struct _RTL_AVL_TREE EnclaveRegions;                                    //0xf0
    ULONGLONG VsmKernelPageCount;                                           //0xf8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

