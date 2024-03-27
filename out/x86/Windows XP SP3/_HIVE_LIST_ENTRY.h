#pragma once
/* ------------------ */

#include <_CMHIVE.h>

//0x18 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* Name;                                                           //0x0
    USHORT* BaseName;                                                       //0x4
    struct _CMHIVE* CmHive;                                                 //0x8
    ULONG Flags;                                                            //0xc
    struct _CMHIVE* CmHive2;                                                //0x10
    UCHAR ThreadFinished;                                                   //0x14
    UCHAR ThreadStarted;                                                    //0x15
    UCHAR Allocate;                                                         //0x16
};
