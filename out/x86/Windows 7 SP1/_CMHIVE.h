#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>
#include <_CM_KEY_HASH_TABLE_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_ERESOURCE.h>
#include <_RTL_BITMAP.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_WORKITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_CM_RM.h>

//0x638 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x2ec
    struct _LIST_ENTRY NotifyList;                                          //0x304
    struct _LIST_ENTRY HiveList;                                            //0x30c
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x314
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x31c
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x320
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x328
    ULONG KcbCacheTableSize;                                                //0x32c
    ULONG Identity;                                                         //0x330
    struct _FAST_MUTEX* HiveLock;                                           //0x334
    struct _EX_PUSH_LOCK ViewLock;                                          //0x338
    struct _KTHREAD* ViewLockOwner;                                         //0x33c
    ULONG ViewLockLast;                                                     //0x340
    ULONG ViewUnLockLast;                                                   //0x344
    struct _FAST_MUTEX* WriterLock;                                         //0x348
    struct _ERESOURCE* FlusherLock;                                         //0x34c
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x350
    struct CMP_OFFSET_ARRAY* FlushOffsetArray;                              //0x358
    ULONG FlushOffsetArrayCount;                                            //0x35c
    ULONG FlushHiveTruncated;                                               //0x360
    struct _FAST_MUTEX* FlushLock2;                                         //0x364
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x368
    struct _LIST_ENTRY MappedViewList;                                      //0x36c
    struct _LIST_ENTRY PinnedViewList;                                      //0x374
    struct _LIST_ENTRY FlushedViewList;                                     //0x37c
    USHORT MappedViewCount;                                                 //0x384
    USHORT PinnedViewCount;                                                 //0x386
    ULONG UseCount;                                                         //0x388
    ULONG ViewsPerHive;                                                     //0x38c
    struct _FILE_OBJECT* FileObject;                                        //0x390
    ULONG LastShrinkHiveSize;                                               //0x394
    union _LARGE_INTEGER ActualFileSize;                                    //0x398
    struct _UNICODE_STRING FileFullPath;                                    //0x3a0
    struct _UNICODE_STRING FileUserName;                                    //0x3a8
    struct _UNICODE_STRING HiveRootPath;                                    //0x3b0
    ULONG SecurityCount;                                                    //0x3b8
    ULONG SecurityCacheSize;                                                //0x3bc
    LONG SecurityHitHint;                                                   //0x3c0
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x3c4
    struct _LIST_ENTRY SecurityHash[64];                                    //0x3c8
    ULONG UnloadEventCount;                                                 //0x5c8
    struct _KEVENT** UnloadEventArray;                                      //0x5cc
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x5d0
    UCHAR Frozen;                                                           //0x5d4
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x5d8
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x5dc
    UCHAR GrowOnlyMode;                                                     //0x5f0
    ULONG GrowOffset;                                                       //0x5f4
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x5f8
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x600
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x608
    ULONG Flags;                                                            //0x60c
    struct _LIST_ENTRY TrustClassEntry;                                     //0x610
    ULONG FlushCount;                                                       //0x618
    struct _CM_RM* CmRm;                                                    //0x61c
    ULONG CmRmInitFailPoint;                                                //0x620
    LONG CmRmInitFailStatus;                                                //0x624
    struct _KTHREAD* CreatorOwner;                                          //0x628
    struct _KTHREAD* RundownThread;                                         //0x62c
    union _LARGE_INTEGER LastWriteTime;                                     //0x630
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _HIVE_LIST_ENTRY

