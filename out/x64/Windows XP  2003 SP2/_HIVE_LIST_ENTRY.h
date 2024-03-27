#pragma once
/* ------------------ */

#include <_CMHIVE.h>

//0x30 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* Name;                                                           //0x0
    USHORT* BaseName;                                                       //0x8
    struct _CMHIVE* CmHive;                                                 //0x10
    ULONG HHiveFlags;                                                       //0x18
    ULONG CmHiveFlags;                                                      //0x1c
    struct _CMHIVE* CmHive2;                                                //0x20
    UCHAR ThreadFinished;                                                   //0x28
    UCHAR ThreadStarted;                                                    //0x29
    UCHAR Allocate;                                                         //0x2a
};
