#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_RTL_RB_TREE.h>
#include <_LIST_ENTRY.h>
#include <_MI_PAGEFILE_BITMAPS_CACHE_ENTRY.h>
#include <_ETHREAD.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_PARTITION.h>
#include <_RTL_BALANCED_NODE.h>

//0xa8 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONG Size;                                                             //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG MinimumSize;                                                      //0x8
    ULONG FreeSpace;                                                        //0xc
    ULONG PeakUsage;                                                        //0x10
    ULONG HighestPage;                                                      //0x14
    ULONG FreeReservationSpace;                                             //0x18
    struct _FILE_OBJECT* File;                                              //0x1c
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x20
    union _SLIST_HEADER PfnsToFree;                                         //0x28
    struct _UNICODE_STRING PageFileName;                                    //0x30
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x38
    ULONG AllocationBitmapHint;                                             //0x3c
    ULONG LargestAllocationCluster;                                         //0x40
    ULONG RefreshAllocationCluster;                                         //0x44
    ULONG LastRefreshAllocationCluster;                                     //0x48
    ULONG ReservedClusterSizeAggregate;                                     //0x4c
    ULONG MaximumRunLengthInBitmaps;                                        //0x50
    struct _RTL_RB_TREE BitmapsCacheLengthTree;                             //0x54
    struct _RTL_RB_TREE BitmapsCacheLocationTree;                           //0x5c
    struct _LIST_ENTRY BitmapsCacheFreeList;                                //0x64
    struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY* BitmapsCacheEntries;           //0x6c
    union
    {
        ULONG ToBeEvictedCount;                                             //0x70
        ULONG HybridPriority;                                               //0x70
    };
    USHORT PageFileNumber:4;                                                //0x74
    USHORT WsSwapPagefile:1;                                                //0x74
    USHORT NoReservations:1;                                                //0x74
    USHORT VirtualStorePagefile:1;                                          //0x74
    USHORT SwapSupported:1;                                                 //0x74
    USHORT NodeInserted:1;                                                  //0x74
    USHORT StackNotified:1;                                                 //0x74
    USHORT Spare0:5;                                                        //0x74
    UCHAR AdriftMdls:1;                                                     //0x76
    UCHAR Spare1:7;                                                         //0x76
    UCHAR IgnoreReservations:1;                                             //0x77
    UCHAR Spare2:7;                                                         //0x77
    ULONG PageHashPages;                                                    //0x78
    ULONG PageHashPagesPeak;                                                //0x7c
    ULONG* PageHash;                                                        //0x80
    VOID* FileHandle;                                                       //0x84
    ULONG Lock;                                                             //0x88
    struct _ETHREAD* LockOwner;                                             //0x8c
    struct _RTL_AVL_TREE FlowThroughReadRoot;                               //0x90
    struct _MI_PARTITION* Partition;                                        //0x94
    struct _RTL_BALANCED_NODE FileObjectNode;                               //0x98
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMINPAGE_SUPPORT_FLOW_THROUGH
// _MMMOD_WRITER_MDL_ENTRY

