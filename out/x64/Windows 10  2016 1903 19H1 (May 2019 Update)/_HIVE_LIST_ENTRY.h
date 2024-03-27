#pragma once
/* ------------------ */

#include <_CMHIVE.h>
#include <_KEVENT.h>
#include <_UNICODE_STRING.h>

//0x98 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    WCHAR* FileName;                                                        //0x0
    WCHAR* BaseName;                                                        //0x8
    WCHAR* RegRootName;                                                     //0x10
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
    struct _UNICODE_STRING FilePath;                                        //0x88
};
