#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_WORKITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_CM_RM.h>

//0x5e0 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x2e8
    struct _LIST_ENTRY NotifyList;                                          //0x300
    struct _LIST_ENTRY HiveList;                                            //0x308
    struct _FAST_MUTEX* HiveLock;                                           //0x310
    struct _EX_PUSH_LOCK ViewLock;                                          //0x314
    struct _KTHREAD* ViewLockOwner;                                         //0x318
    ULONG ViewLockLast;                                                     //0x31c
    ULONG ViewUnLockLast;                                                   //0x320
    struct _FAST_MUTEX* WriterLock;                                         //0x324
    struct _EX_PUSH_LOCK FlusherLock;                                       //0x328
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x32c
    struct _LIST_ENTRY MappedViewList;                                      //0x330
    struct _LIST_ENTRY PinnedViewList;                                      //0x338
    struct _LIST_ENTRY FlushedViewList;                                     //0x340
    USHORT MappedViewCount;                                                 //0x348
    USHORT PinnedViewCount;                                                 //0x34a
    ULONG UseCount;                                                         //0x34c
    ULONG ViewsPerHive;                                                     //0x350
    struct _FILE_OBJECT* FileObject;                                        //0x354
    ULONG LastShrinkHiveSize;                                               //0x358
    union _LARGE_INTEGER ActualFileSize;                                    //0x360
    struct _UNICODE_STRING FileFullPath;                                    //0x368
    struct _UNICODE_STRING FileUserName;                                    //0x370
    struct _UNICODE_STRING HiveRootPath;                                    //0x378
    ULONG SecurityCount;                                                    //0x380
    ULONG SecurityCacheSize;                                                //0x384
    LONG SecurityHitHint;                                                   //0x388
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x38c
    struct _LIST_ENTRY SecurityHash[64];                                    //0x390
    ULONG UnloadEventCount;                                                 //0x590
    struct _KEVENT** UnloadEventArray;                                      //0x594
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x598
    UCHAR Frozen;                                                           //0x59c
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x5a0
    UCHAR GrowOnlyMode;                                                     //0x5a4
    ULONG GrowOffset;                                                       //0x5a8
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x5ac
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x5b4
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x5bc
    ULONG Flags;                                                            //0x5c0
    struct _LIST_ENTRY TrustClassEntry;                                     //0x5c4
    ULONG FlushCount;                                                       //0x5cc
    struct _CM_RM* CmRm;                                                    //0x5d0
    ULONG CmRmInitFailPoint;                                                //0x5d4
    LONG CmRmInitFailStatus;                                                //0x5d8
    struct _KTHREAD* CreatorOwner;                                          //0x5dc
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _HIVE_LIST_ENTRY

