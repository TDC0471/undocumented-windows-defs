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

//0x120 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONGLONG Size;                                                         //0x0
    ULONGLONG MaximumSize;                                                  //0x8
    ULONGLONG MinimumSize;                                                  //0x10
    ULONGLONG FreeSpace;                                                    //0x18
    ULONGLONG PeakUsage;                                                    //0x20
    ULONGLONG HighestPage;                                                  //0x28
    ULONGLONG FreeReservationSpace;                                         //0x30
    struct _FILE_OBJECT* File;                                              //0x38
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x40
    union _SLIST_HEADER PfnsToFree;                                         //0x50
    struct _UNICODE_STRING PageFileName;                                    //0x60
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x70
    ULONG AllocationBitmapHint;                                             //0x78
    ULONG LargestAllocationCluster;                                         //0x7c
    ULONG RefreshAllocationCluster;                                         //0x80
    ULONG LastRefreshAllocationCluster;                                     //0x84
    ULONG ReservedClusterSizeAggregate;                                     //0x88
    ULONG MaximumRunLengthInBitmaps;                                        //0x8c
    struct _RTL_RB_TREE BitmapsCacheLengthTree;                             //0x90
    struct _RTL_RB_TREE BitmapsCacheLocationTree;                           //0xa0
    struct _LIST_ENTRY BitmapsCacheFreeList;                                //0xb0
    struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY* BitmapsCacheEntries;           //0xc0
    union
    {
        ULONG ToBeEvictedCount;                                             //0xc8
        ULONG HybridPriority;                                               //0xc8
    };
    USHORT PageFileNumber:4;                                                //0xcc
    USHORT WsSwapPagefile:1;                                                //0xcc
    USHORT NoReservations:1;                                                //0xcc
    USHORT VirtualStorePagefile:1;                                          //0xcc
    USHORT SwapSupported:1;                                                 //0xcc
    USHORT NodeInserted:1;                                                  //0xcc
    USHORT StackNotified:1;                                                 //0xcc
    USHORT BackedBySCM:1;                                                   //0xcc
    USHORT Spare0:4;                                                        //0xcc
    UCHAR AdriftMdls:1;                                                     //0xce
    UCHAR Spare1:7;                                                         //0xce
    UCHAR IgnoreReservations:1;                                             //0xcf
    UCHAR Spare2:7;                                                         //0xcf
    ULONG PageHashPages;                                                    //0xd0
    ULONG PageHashPagesPeak;                                                //0xd4
    ULONG* PageHash;                                                        //0xd8
    VOID* FileHandle;                                                       //0xe0
    ULONGLONG Lock;                                                         //0xe8
    struct _ETHREAD* LockOwner;                                             //0xf0
    struct _RTL_AVL_TREE FlowThroughReadRoot;                               //0xf8
    struct _MI_PARTITION* Partition;                                        //0x100
    struct _RTL_BALANCED_NODE FileObjectNode;                               //0x108
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMINPAGE_SUPPORT_FLOW_THROUGH
// _MMMOD_WRITER_MDL_ENTRY

