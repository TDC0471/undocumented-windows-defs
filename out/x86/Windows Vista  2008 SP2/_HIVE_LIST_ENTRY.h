#pragma once
/* ------------------ */

#include <_CMHIVE.h>

//0x20 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* FileName;                                                       //0x0
    USHORT* BaseName;                                                       //0x4
    USHORT* RegRootName;                                                    //0x8
    struct _CMHIVE* CmHive;                                                 //0xc
    ULONG HHiveFlags;                                                       //0x10
    ULONG CmHiveFlags;                                                      //0x14
    struct _CMHIVE* CmHive2;                                                //0x18
    UCHAR ThreadFinished;                                                   //0x1c
    UCHAR ThreadStarted;                                                    //0x1d
    UCHAR Allocate;                                                         //0x1e
    UCHAR WinPERequired;                                                    //0x1f
};
