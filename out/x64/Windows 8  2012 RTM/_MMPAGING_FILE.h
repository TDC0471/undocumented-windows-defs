#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_ETHREAD.h>

//0xa8 bytes (sizeof)
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
    struct _UNICODE_STRING PageFileName;                                    //0x58
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x68
    ULONG AllocationBitmapHint;                                             //0x70
    ULONG ReservationBitmapHint;                                            //0x74
    ULONG LargestNonReservedClusterSize;                                    //0x78
    ULONG RefreshClusterSize;                                               //0x7c
    ULONG LastRefreshClusterSize;                                           //0x80
    ULONG ReservedClusterSizeAggregate;                                     //0x84
    ULONG ToBeEvictedCount;                                                 //0x88
    USHORT PageFileNumber:4;                                                //0x8c
    USHORT BootPartition:1;                                                 //0x8c
    USHORT WsSwapPagefile:1;                                                //0x8c
    USHORT NoReservations:1;                                                //0x8c
    USHORT Spare0:9;                                                        //0x8c
    UCHAR AdriftMdls:1;                                                     //0x8e
    UCHAR Spare1:7;                                                         //0x8e
    UCHAR Spare2:8;                                                         //0x8f
    VOID* FileHandle;                                                       //0x90
    ULONGLONG Lock;                                                         //0x98
    struct _ETHREAD* LockOwner;                                             //0xa0
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

