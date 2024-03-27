#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>
#include <_CM_KEY_HASH_TABLE_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_ERESOURCE.h>
#include <_RTL_BITMAP.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_EX_PUSH_LOCK.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_WORKITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_CM_RM.h>
#include <_KTHREAD.h>
#include <_ETHREAD.h>
#include <_HIVE_WAIT_PACKET.h>

//0x908 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x3a0
    struct _LIST_ENTRY NotifyList;                                          //0x3b8
    struct _LIST_ENTRY HiveList;                                            //0x3c0
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x3c8
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x3d0
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x3d4
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x3dc
    ULONG KcbCacheTableSize;                                                //0x3e0
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x3e4
    ULONG DeletedKcbTableSize;                                              //0x3e8
    ULONG Identity;                                                         //0x3ec
    struct _FAST_MUTEX* HiveLock;                                           //0x3f0
    struct _FAST_MUTEX* WriterLock;                                         //0x3f4
    struct _ERESOURCE* FlusherLock;                                         //0x3f8
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x3fc
    struct CMP_OFFSET_ARRAY* FlushOffsetArray;                              //0x404
    ULONG FlushOffsetArrayCount;                                            //0x408
    struct _HBASE_BLOCK* FlushBaseBlock;                                    //0x40c
    ULONG FlushHiveTruncated;                                               //0x410
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x414
    ULONG UseCount;                                                         //0x418
    ULONG LastShrinkHiveSize;                                               //0x41c
    union _LARGE_INTEGER ActualFileSize;                                    //0x420
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x428
    struct _UNICODE_STRING FileFullPath;                                    //0x438
    struct _UNICODE_STRING FileUserName;                                    //0x440
    struct _UNICODE_STRING HiveRootPath;                                    //0x448
    ULONG SecurityCount;                                                    //0x450
    ULONG SecurityCacheSize;                                                //0x454
    LONG SecurityHitHint;                                                   //0x458
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x45c
    struct _LIST_ENTRY SecurityHash[64];                                    //0x460
    ULONG UnloadEventCount;                                                 //0x660
    struct _KEVENT** UnloadEventArray;                                      //0x664
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x668
    UCHAR Frozen;                                                           //0x66c
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x670
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x674
    UCHAR GrowOnlyMode;                                                     //0x688
    ULONG GrowOffset;                                                       //0x68c
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x690
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x698
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x6a0
    ULONG Flags;                                                            //0x6a4
    struct _LIST_ENTRY TrustClassEntry;                                     //0x6a8
    ULONGLONG DirtyTime;                                                    //0x6b0
    struct _CM_RM* CmRm;                                                    //0x6b8
    ULONG CmRmInitFailPoint;                                                //0x6bc
    LONG CmRmInitFailStatus;                                                //0x6c0
    struct _KTHREAD* CreatorOwner;                                          //0x6c4
    struct _KTHREAD* RundownThread;                                         //0x6c8
    struct _ETHREAD* ActiveFlushThread;                                     //0x6cc
    struct _EX_PUSH_LOCK FlushBoostLock;                                    //0x6d0
    union _LARGE_INTEGER LastWriteTime;                                     //0x6d8
    volatile LONG ReferenceCount;                                           //0x6e0
    union
    {
        ULONG FlushFlags;                                                   //0x6e4
        struct
        {
            ULONG FlushActive:1;                                            //0x6e4
            ULONG DiskFileBad:1;                                            //0x6e4
            ULONG FlushBoosted:1;                                           //0x6e4
            ULONG PrimaryWritePending:1;                                    //0x6e4
            ULONG PriorPurgeComplete:1;                                     //0x6e4
        };
    };
    struct _HIVE_WAIT_PACKET* FlushWaitList;                                //0x6e8
    LONG UnloadHistoryIndex;                                                //0x6ec
    ULONG UnloadHistory[128];                                               //0x6f0
    ULONG BootStart;                                                        //0x8f0
    ULONG UnaccessedStart;                                                  //0x8f4
    ULONG UnaccessedEnd;                                                    //0x8f8
    ULONG LoadedKeyCount;                                                   //0x8fc
    volatile ULONG HandleClosePending;                                      //0x900
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x904
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

