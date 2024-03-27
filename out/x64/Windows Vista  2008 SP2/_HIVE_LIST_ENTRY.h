#pragma once
/* ------------------ */

#include <_CMHIVE.h>

//0x38 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* FileName;                                                       //0x0
    USHORT* BaseName;                                                       //0x8
    USHORT* RegRootName;                                                    //0x10
    struct _CMHIVE* CmHive;                                                 //0x18
    ULONG HHiveFlags;                                                       //0x20
    ULONG CmHiveFlags;                                                      //0x24
    struct _CMHIVE* CmHive2;                                                //0x28
    UCHAR ThreadFinished;                                                   //0x30
    UCHAR ThreadStarted;                                                    //0x31
    UCHAR Allocate;                                                         //0x32
    UCHAR WinPERequired;                                                    //0x33
};
