#pragma once
/* ------------------ */

#include <_CMHIVE.h>
#include <_KEVENT.h>
#include <_UNICODE_STRING.h>

//0x60 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    USHORT* FileName;                                                       //0x0
    USHORT* BaseName;                                                       //0x4
    USHORT* RegRootName;                                                    //0x8
    struct _CMHIVE* CmHive;                                                 //0xc
    ULONG HHiveFlags;                                                       //0x10
    ULONG CmHiveFlags;                                                      //0x14
    ULONG CmKcbCacheSize;                                                   //0x18
    struct _CMHIVE* CmHive2;                                                //0x1c
    UCHAR HiveMounted;                                                      //0x20
    UCHAR ThreadFinished;                                                   //0x21
    UCHAR ThreadStarted;                                                    //0x22
    UCHAR Allocate;                                                         //0x23
    UCHAR WinPERequired;                                                    //0x24
    struct _KEVENT StartEvent;                                              //0x28
    struct _KEVENT FinishedEvent;                                           //0x38
    struct _KEVENT MountLock;                                               //0x48
    struct _UNICODE_STRING FilePath;                                        //0x58
};
