#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>
#include <_ETHREAD.h>

//0x90 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONGLONG Size;                                                         //0x0
    ULONGLONG MaximumSize;                                                  //0x8
    ULONGLONG MinimumSize;                                                  //0x10
    ULONGLONG FreeSpace;                                                    //0x18
    ULONGLONG PeakUsage;                                                    //0x20
    ULONGLONG HighestPage;                                                  //0x28
    struct _FILE_OBJECT* File;                                              //0x30
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x38
    struct _UNICODE_STRING PageFileName;                                    //0x48
    struct _RTL_BITMAP* volatile Bitmap;                                    //0x58
    struct _RTL_BITMAP* volatile EvictStoreBitmap;                          //0x60
    ULONG BitmapHint;                                                       //0x68
    ULONG LastAllocationSize;                                               //0x6c
    ULONG ToBeEvictedCount;                                                 //0x70
    USHORT PageFileNumber:4;                                                //0x74
    USHORT BootPartition:1;                                                 //0x74
    USHORT Spare0:11;                                                       //0x74
    USHORT AdriftMdls:1;                                                    //0x76
    USHORT Spare1:15;                                                       //0x76
    VOID* FileHandle;                                                       //0x78
    ULONGLONG Lock;                                                         //0x80
    struct _ETHREAD* LockOwner;                                             //0x88
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

