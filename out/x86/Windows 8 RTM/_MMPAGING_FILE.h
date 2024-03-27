#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_MI_PAGING_FILE_SPACE_BITMAPS.h>
#include <_ETHREAD.h>

//0x64 bytes (sizeof)
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
    struct _UNICODE_STRING PageFileName;                                    //0x2c
    struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;                          //0x34
    ULONG AllocationBitmapHint;                                             //0x38
    ULONG ReservationBitmapHint;                                            //0x3c
    ULONG LargestNonReservedClusterSize;                                    //0x40
    ULONG RefreshClusterSize;                                               //0x44
    ULONG LastRefreshClusterSize;                                           //0x48
    ULONG ReservedClusterSizeAggregate;                                     //0x4c
    ULONG ToBeEvictedCount;                                                 //0x50
    USHORT PageFileNumber:4;                                                //0x54
    USHORT BootPartition:1;                                                 //0x54
    USHORT WsSwapPagefile:1;                                                //0x54
    USHORT NoReservations:1;                                                //0x54
    USHORT Spare0:9;                                                        //0x54
    UCHAR AdriftMdls:1;                                                     //0x56
    UCHAR Spare1:7;                                                         //0x56
    UCHAR Spare2:8;                                                         //0x57
    VOID* FileHandle;                                                       //0x58
    ULONG Lock;                                                             //0x5c
    struct _ETHREAD* LockOwner;                                             //0x60
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

