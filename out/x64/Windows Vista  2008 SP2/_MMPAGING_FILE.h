#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>
#include <_SLIST_HEADER.h>

//0xa0 bytes (sizeof)
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
    ULONG BitmapHint;                                                       //0x60
    ULONG LastAllocationSize;                                               //0x64
    USHORT PageFileNumber:4;                                                //0x68
    USHORT BootPartition:1;                                                 //0x68
    USHORT Spare0:11;                                                       //0x68
    USHORT AdriftMdls:1;                                                    //0x6a
    USHORT Spare1:15;                                                       //0x6a
    VOID* FileHandle;                                                       //0x70
    union _SLIST_HEADER AvailableList;                                      //0x80
    union _SLIST_HEADER NeedProcessingList;                                 //0x90
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

