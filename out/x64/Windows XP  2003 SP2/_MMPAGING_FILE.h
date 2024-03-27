#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>

//0x78 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONGLONG Size;                                                         //0x0
    ULONGLONG MaximumSize;                                                  //0x8
    ULONGLONG MinimumSize;                                                  //0x10
    ULONGLONG FreeSpace;                                                    //0x18
    ULONGLONG CurrentUsage;                                                 //0x20
    ULONGLONG PeakUsage;                                                    //0x28
    ULONGLONG HighestPage;                                                  //0x30
    struct _FILE_OBJECT* File;                                              //0x38
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x40
    struct _UNICODE_STRING PageFileName;                                    //0x50
    struct _RTL_BITMAP* Bitmap;                                             //0x60
    ULONG PageFileNumber:4;                                                 //0x68
    ULONG ReferenceCount:4;                                                 //0x68
    ULONG BootPartition:1;                                                  //0x68
    ULONG Reserved:23;                                                      //0x68
    VOID* FileHandle;                                                       //0x70
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

