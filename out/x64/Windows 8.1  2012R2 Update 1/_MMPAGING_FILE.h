#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_ETHREAD.h>

//0xe0 bytes (sizeof)
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
    ULONG ToBeEvictedCount;                                                 //0xa0
    ULONG HybridPriority;                                                   //0xa4
    USHORT PageFileNumber:4;                                                //0xa8
    USHORT BootPartition:1;                                                 //0xa8
    USHORT WsSwapPagefile:1;                                                //0xa8
    USHORT NoReservations:1;                                                //0xa8
    USHORT Spare0:9;                                                        //0xa8
    UCHAR AdriftMdls:1;                                                     //0xaa
    UCHAR Spare1:7;                                                         //0xaa
    UCHAR Spare2:8;                                                         //0xab
    ULONG PageHashPages;                                                    //0xac
    ULONG PageHashPagesPeak;                                                //0xb0
    ULONG* PageHash;                                                        //0xb8
    VOID* FileHandle;                                                       //0xc0
    ULONGLONG Lock;                                                         //0xc8
    struct _ETHREAD* LockOwner;                                             //0xd0
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

