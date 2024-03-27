#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_EX_PUSH_LOCK.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_WORKITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_CM_RM.h>
#include <_KTHREAD.h>

//0xb38 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x590
    struct _LIST_ENTRY NotifyList;                                          //0x5c0
    struct _LIST_ENTRY HiveList;                                            //0x5d0
    struct _FAST_MUTEX* HiveLock;                                           //0x5e0
    struct _FAST_MUTEX* ViewLock;                                           //0x5e8
    struct _FAST_MUTEX* WriterLock;                                         //0x5f0
    struct _EX_PUSH_LOCK FlusherLock;                                       //0x5f8
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x600
    struct _LIST_ENTRY MappedViewList;                                      //0x608
    struct _LIST_ENTRY PinnedViewList;                                      //0x618
    struct _LIST_ENTRY FlushedViewList;                                     //0x628
    USHORT MappedViewCount;                                                 //0x638
    USHORT PinnedViewCount;                                                 //0x63a
    ULONG UseCount;                                                         //0x63c
    ULONG ViewsPerHive;                                                     //0x640
    struct _FILE_OBJECT* FileObject;                                        //0x648
    ULONG LastShrinkHiveSize;                                               //0x650
    union _LARGE_INTEGER ActualFileSize;                                    //0x658
    struct _UNICODE_STRING FileFullPath;                                    //0x660
    struct _UNICODE_STRING FileUserName;                                    //0x670
    struct _UNICODE_STRING HiveRootPath;                                    //0x680
    ULONG SecurityCount;                                                    //0x690
    ULONG SecurityCacheSize;                                                //0x694
    LONG SecurityHitHint;                                                   //0x698
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x6a0
    struct _LIST_ENTRY SecurityHash[64];                                    //0x6a8
    ULONG UnloadEventCount;                                                 //0xaa8
    struct _KEVENT** UnloadEventArray;                                      //0xab0
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xab8
    UCHAR Frozen;                                                           //0xac0
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0xac8
    UCHAR GrowOnlyMode;                                                     //0xad0
    ULONG GrowOffset;                                                       //0xad4
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xad8
    struct _LIST_ENTRY KnodeConvertListHead;                                //0xae8
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xaf8
    ULONG Flags;                                                            //0xb00
    struct _LIST_ENTRY TrustClassEntry;                                     //0xb08
    ULONG FlushCount;                                                       //0xb18
    struct _CM_RM* CmRm;                                                    //0xb20
    ULONG CmRmInitFailPoint;                                                //0xb28
    LONG CmRmInitFailStatus;                                                //0xb2c
    struct _KTHREAD* CreatorOwner;                                          //0xb30
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _HIVE_LIST_ENTRY

