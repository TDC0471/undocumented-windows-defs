#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>
#include <_SLIST_HEADER.h>

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
    ULONG BitmapHint;                                                       //0x30
    ULONG LastAllocationSize;                                               //0x34
    USHORT PageFileNumber:4;                                                //0x38
    USHORT BootPartition:1;                                                 //0x38
    USHORT Spare0:11;                                                       //0x38
    USHORT AdriftMdls:1;                                                    //0x3a
    USHORT Spare1:15;                                                       //0x3a
    VOID* FileHandle;                                                       //0x3c
    union _SLIST_HEADER AvailableList;                                      //0x40
    union _SLIST_HEADER NeedProcessingList;                                 //0x48
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

