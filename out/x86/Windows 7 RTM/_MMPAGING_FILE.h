#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>
#include <_ETHREAD.h>

//0x50 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONG Size;                                                             //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG MinimumSize;                                                      //0x8
    ULONG FreeSpace;                                                        //0xc
    ULONG PeakUsage;                                                        //0x10
    ULONG HighestPage;                                                      //0x14
    struct _FILE_OBJECT* File;                                              //0x18
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x1c
    struct _UNICODE_STRING PageFileName;                                    //0x24
    struct _RTL_BITMAP* volatile Bitmap;                                    //0x2c
    struct _RTL_BITMAP* volatile EvictStoreBitmap;                          //0x30
    ULONG BitmapHint;                                                       //0x34
    ULONG LastAllocationSize;                                               //0x38
    ULONG ToBeEvictedCount;                                                 //0x3c
    USHORT PageFileNumber:4;                                                //0x40
    USHORT BootPartition:1;                                                 //0x40
    USHORT Spare0:11;                                                       //0x40
    USHORT AdriftMdls:1;                                                    //0x42
    USHORT Spare1:15;                                                       //0x42
    VOID* FileHandle;                                                       //0x44
    ULONG Lock;                                                             //0x48
    struct _ETHREAD* LockOwner;                                             //0x4c
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

