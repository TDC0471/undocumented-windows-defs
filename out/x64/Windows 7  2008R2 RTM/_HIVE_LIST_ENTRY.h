#pragma once
/* ------------------ */

#include <_CMHIVE.h>
#include <_KEVENT.h>

//0x88 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* FileName;                                                       //0x0
    USHORT* BaseName;                                                       //0x8
    USHORT* RegRootName;                                                    //0x10
    struct _CMHIVE* CmHive;                                                 //0x18
    ULONG HHiveFlags;                                                       //0x20
    ULONG CmHiveFlags;                                                      //0x24
    ULONG CmKcbCacheSize;                                                   //0x28
    struct _CMHIVE* CmHive2;                                                //0x30
    UCHAR HiveMounted;                                                      //0x38
    UCHAR ThreadFinished;                                                   //0x39
    UCHAR ThreadStarted;                                                    //0x3a
    UCHAR Allocate;                                                         //0x3b
    UCHAR WinPERequired;                                                    //0x3c
    struct _KEVENT StartEvent;                                              //0x40
    struct _KEVENT FinishedEvent;                                           //0x58
    struct _KEVENT MountLock;                                               //0x70
};