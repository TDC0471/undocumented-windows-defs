#pragma once
/* ------------------ */

#include <_CMHIVE.h>

//0x1c bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* Name;                                                           //0x0
    USHORT* BaseName;                                                       //0x4
    struct _CMHIVE* CmHive;                                                 //0x8
    ULONG HHiveFlags;                                                       //0xc
    ULONG CmHiveFlags;                                                      //0x10
    struct _CMHIVE* CmHive2;                                                //0x14
    UCHAR ThreadFinished;                                                   //0x18
    UCHAR ThreadStarted;                                                    //0x19
    UCHAR Allocate;                                                         //0x1a
};
