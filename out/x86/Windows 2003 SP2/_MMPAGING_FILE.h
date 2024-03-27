#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_RTL_BITMAP.h>

//0x3c bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONG Size;                                                             //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG MinimumSize;                                                      //0x8
    ULONG FreeSpace;                                                        //0xc
    ULONG CurrentUsage;                                                     //0x10
    ULONG PeakUsage;                                                        //0x14
    ULONG HighestPage;                                                      //0x18
    struct _FILE_OBJECT* File;                                              //0x1c
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x20
    struct _UNICODE_STRING PageFileName;                                    //0x28
    struct _RTL_BITMAP* Bitmap;                                             //0x30
    ULONG PageFileNumber:4;                                                 //0x34
    ULONG ReferenceCount:4;                                                 //0x34
    ULONG BootPartition:1;                                                  //0x34
    ULONG Reserved:23;                                                      //0x34
    VOID* FileHandle;                                                       //0x38
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

