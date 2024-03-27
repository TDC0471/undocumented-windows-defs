#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_ETHREAD.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_PARTITION.h>
#include <_RTL_BALANCED_NODE.h>

//0x100 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONGLONG Size;                                                         //0x0
    ULONGLONG MaximumSize;                                                  //0x8
    ULONGLONG MinimumSize;                                                  //0x10
    ULONGLONG FreeSpace;                                                    //0x18
    ULONGLONG PeakUsage;                                                    //0x20
    ULONGLONG HighestPage;                                                  //0x28
    ULONGLONG FreeReservationSpace;                                         //0x30
    ULONGLONG LargestReserveCluster;                                        //0x38
    struct _FILE_OBJECT* File;                                              //0x40
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x48
    union _SLIST_HEADER PfnsToFree;                                         //0x60
    struct _UNICODE_STRING PageFileName;                                    //0x70
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x80
    ULONG AllocationBitmapHint;                                             //0x88
    ULONG ReservationBitmapHint;                                            //0x8c
    ULONG LargestNonReservedClusterSize;                                    //0x90
    ULONG RefreshClusterSize;                                               //0x94
    ULONG LastRefreshClusterSize;                                           //0x98
    ULONG ReservedClusterSizeAggregate;                                     //0x9c
    union
    {
        ULONG ToBeEvictedCount;                                             //0xa0
        ULONG HybridPriority;                                               //0xa0
    };
    USHORT PageFileNumber:4;                                                //0xa4
    USHORT WsSwapPagefile:1;                                                //0xa4
    USHORT NoReservations:1;                                                //0xa4
    USHORT VirtualStorePagefile:1;                                          //0xa4
    USHORT SwapSupported:1;                                                 //0xa4
    USHORT NodeInserted:1;                                                  //0xa4
    USHORT StackNotified:1;                                                 //0xa4
    USHORT Spare0:5;                                                        //0xa4
    UCHAR AdriftMdls:1;                                                     //0xa6
    UCHAR Spare1:7;                                                         //0xa6
    UCHAR Spare2:8;                                                         //0xa7
    ULONG PageHashPages;                                                    //0xa8
    ULONG PageHashPagesPeak;                                                //0xac
    ULONG* PageHash;                                                        //0xb0
    VOID* FileHandle;                                                       //0xb8
    ULONGLONG Lock;                                                         //0xc0
    struct _ETHREAD* LockOwner;                                             //0xc8
    struct _RTL_AVL_TREE FlowThroughReadRoot;                               //0xd0
    struct _MI_PARTITION* Partition;                                        //0xd8
    struct _RTL_BALANCED_NODE FileObjectNode;                               //0xe0
};
/* Used in */
// _MI_VISIBLE_PARTITION
// _MMINPAGE_SUPPORT_FLOW_THROUGH
// _MMMOD_WRITER_MDL_ENTRY

