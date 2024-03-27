#pragma once
/* ------------------ */

#include <_CMHIVE.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK.h>
#include <_LIST_ENTRY.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_UNICODE_STRING.h>

//0x78 bytes (sizeof)
struct _HIVE_LIST_ENTRY
{
    WCHAR* FileName;                                                        //0x0
    WCHAR* BaseName;                                                        //0x4
    WCHAR* RegRootName;                                                     //0x8
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
    struct _EX_PUSH_LOCK MountCallbackLock;                                 //0x58
    struct _EX_PUSH_LOCK CallbackListLock;                                  //0x5c
    struct _LIST_ENTRY CallbackListHead;                                    //0x60
    struct _WORK_QUEUE_ITEM* CallbackWorkItem;                              //0x68
    volatile LONG CallbackWorkItemBusy;                                     //0x6c
    struct _UNICODE_STRING FilePath;                                        //0x70
};
