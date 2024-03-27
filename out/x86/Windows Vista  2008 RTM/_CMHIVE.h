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

//0x5d0 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x2e8
    struct _LIST_ENTRY NotifyList;                                          //0x300
    struct _LIST_ENTRY HiveList;                                            //0x308
    struct _FAST_MUTEX* HiveLock;                                           //0x310
    struct _FAST_MUTEX* ViewLock;                                           //0x314
    struct _FAST_MUTEX* WriterLock;                                         //0x318
    struct _EX_PUSH_LOCK FlusherLock;                                       //0x31c
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x320
    struct _LIST_ENTRY MappedViewList;                                      //0x324
    struct _LIST_ENTRY PinnedViewList;                                      //0x32c
    struct _LIST_ENTRY FlushedViewList;                                     //0x334
    USHORT MappedViewCount;                                                 //0x33c
    USHORT PinnedViewCount;                                                 //0x33e
    ULONG UseCount;                                                         //0x340
    ULONG ViewsPerHive;                                                     //0x344
    struct _FILE_OBJECT* FileObject;                                        //0x348
    ULONG LastShrinkHiveSize;                                               //0x34c
    union _LARGE_INTEGER ActualFileSize;                                    //0x350
    struct _UNICODE_STRING FileFullPath;                                    //0x358
    struct _UNICODE_STRING FileUserName;                                    //0x360
    struct _UNICODE_STRING HiveRootPath;                                    //0x368
    ULONG SecurityCount;                                                    //0x370
    ULONG SecurityCacheSize;                                                //0x374
    LONG SecurityHitHint;                                                   //0x378
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x37c
    struct _LIST_ENTRY SecurityHash[64];                                    //0x380
    ULONG UnloadEventCount;                                                 //0x580
    struct _KEVENT** UnloadEventArray;                                      //0x584
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x588
    UCHAR Frozen;                                                           //0x58c
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x590
    UCHAR GrowOnlyMode;                                                     //0x594
    ULONG GrowOffset;                                                       //0x598
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x59c
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x5a4
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x5ac
    ULONG Flags;                                                            //0x5b0
    struct _LIST_ENTRY TrustClassEntry;                                     //0x5b4
    ULONG FlushCount;                                                       //0x5bc
    struct _CM_RM* CmRm;                                                    //0x5c0
    ULONG CmRmInitFailPoint;                                                //0x5c4
    LONG CmRmInitFailStatus;                                                //0x5c8
    struct _KTHREAD* CreatorOwner;                                          //0x5cc
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _HIVE_LIST_ENTRY

