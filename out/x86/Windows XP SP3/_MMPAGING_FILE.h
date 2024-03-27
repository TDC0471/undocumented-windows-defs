#pragma once
/* ------------------ */

#include <_MMMOD_WRITER_MDL_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_FILE_OBJECT.h>
#include <_UNICODE_STRING.h>

//0x44 bytes (sizeof)
struct _MMPAGING_FILE
{
    ULONG Size;                                                             //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG MinimumSize;                                                      //0x8
    ULONG FreeSpace;                                                        //0xc
    ULONG CurrentUsage;                                                     //0x10
    ULONG PeakUsage;                                                        //0x14
    ULONG Hint;                                                             //0x18
    ULONG HighestPage;                                                      //0x1c
    struct _MMMOD_WRITER_MDL_ENTRY* Entry[2];                               //0x20
    struct _RTL_BITMAP* Bitmap;                                             //0x28
    struct _FILE_OBJECT* File;                                              //0x2c
    struct _UNICODE_STRING PageFileName;                                    //0x30
    ULONG PageFileNumber;                                                   //0x38
    UCHAR Extended;                                                         //0x3c
    UCHAR HintSetToZero;                                                    //0x3d
    UCHAR BootPartition;                                                    //0x3e
    VOID* FileHandle;                                                       //0x40
};
/* Used in */
// _MMMOD_WRITER_MDL_ENTRY

