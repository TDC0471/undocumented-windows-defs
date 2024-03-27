#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_SLIST_HEADER.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_ETHREAD.h>

//0x80 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONG Size;                                                             //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG MinimumSize;                                                      //0x8
    ULONG FreeSpace;                                                        //0xc
    ULONG PeakUsage;                                                        //0x10
    ULONG HighestPage;                                                      //0x14
    ULONG FreeReservationSpace;                                             //0x18
    ULONG LargestReserveCluster;                                            //0x1c
    struct _FILE_OBJECT* File;                                              //0x20
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x24
    union _SLIST_HEADER PfnsToFree;                                         //0x30
    struct _UNICODE_STRING PageFileName;                                    //0x38
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x40
    ULONG AllocationBitmapHint;                                             //0x44
    ULONG ReservationBitmapHint;                                            //0x48
    ULONG LargestNonReservedClusterSize;                                    //0x4c
    ULONG RefreshClusterSize;                                               //0x50
    ULONG LastRefreshClusterSize;                                           //0x54
    ULONG ReservedClusterSizeAggregate;                                     //0x58
    ULONG ToBeEvictedCount;                                                 //0x5c
    ULONG HybridPriority;                                                   //0x60
    USHORT PageFileNumber:4;                                                //0x64
    USHORT BootPartition:1;                                                 //0x64
    USHORT WsSwapPagefile:1;                                                //0x64
    USHORT NoReservations:1;                                                //0x64
    USHORT Spare0:9;                                                        //0x64
    UCHAR AdriftMdls:1;                                                     //0x66
    UCHAR Spare1:7;                                                         //0x66
    UCHAR Spare2:8;                                                         //0x67
    ULONG PageHashPages;                                                    //0x68
    ULONG PageHashPagesPeak;                                                //0x6c
    ULONG* PageHash;                                                        //0x70
    VOID* FileHandle;                                                       //0x74
    ULONG Lock;                                                             //0x78
    struct _ETHREAD* LockOwner;                                             //0x7c
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

