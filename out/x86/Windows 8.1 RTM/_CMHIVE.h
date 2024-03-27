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
#include <_CM_DIRTY_VECTOR_LOG.h>
#include <_CM_RM.h>
#include <_KTHREAD.h>
#include <_HIVE_WRITE_WAIT_QUEUE.h>

//0xc20 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x3b8
    struct _LIST_ENTRY NotifyList;                                          //0x3d0
    struct _LIST_ENTRY HiveList;                                            //0x3d8
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x3e0
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x3e8
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x3ec
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x3f4
    ULONG KcbCacheTableSize;                                                //0x3f8
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x3fc
    ULONG DeletedKcbTableSize;                                              //0x400
    ULONG Identity;                                                         //0x404
    struct _FAST_MUTEX* HiveLock;                                           //0x408
    struct _FAST_MUTEX* WriterLock;                                         //0x40c
    struct _ERESOURCE* FlusherLock;                                         //0x410
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x414
    ULONG FlushDirtyVectorSize;                                             //0x41c
    UCHAR* FlushLogEntry;                                                   //0x420
    ULONG FlushLogEntrySize;                                                //0x424
    ULONG FlushHiveTruncated;                                               //0x428
    UCHAR FlushBaseBlockDirty;                                              //0x42c
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x430
    ULONG CapturedUnreconciledVectorSize;                                   //0x438
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x43c
    ULONG UnreconciledOffsetArrayCount;                                     //0x440
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x444
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x448
    ULONG UseCount;                                                         //0x44c
    ULONG LastShrinkHiveSize;                                               //0x450
    union _LARGE_INTEGER ActualFileSize;                                    //0x458
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x460
    struct _UNICODE_STRING FileFullPath;                                    //0x470
    struct _UNICODE_STRING FileUserName;                                    //0x478
    struct _UNICODE_STRING HiveRootPath;                                    //0x480
    ULONG SecurityCount;                                                    //0x488
    ULONG SecurityCacheSize;                                                //0x48c
    LONG SecurityHitHint;                                                   //0x490
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x494
    struct _LIST_ENTRY SecurityHash[64];                                    //0x498
    ULONG UnloadEventCount;                                                 //0x698
    struct _KEVENT** UnloadEventArray;                                      //0x69c
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x6a0
    UCHAR Frozen;                                                           //0x6a4
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x6a8
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x6ac
    UCHAR GrowOnlyMode;                                                     //0x6c0
    ULONG GrowOffset;                                                       //0x6c4
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x6c8
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x6d0
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x6d8
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0x6dc
    ULONG Flags;                                                            //0x9a4
    struct _LIST_ENTRY TrustClassEntry;                                     //0x9a8
    ULONGLONG DirtyTime;                                                    //0x9b0
    ULONGLONG UnreconciledTime;                                             //0x9b8
    struct _CM_RM* CmRm;                                                    //0x9c0
    ULONG CmRmInitFailPoint;                                                //0x9c4
    LONG CmRmInitFailStatus;                                                //0x9c8
    struct _KTHREAD* CreatorOwner;                                          //0x9cc
    struct _KTHREAD* RundownThread;                                         //0x9d0
    union _LARGE_INTEGER LastWriteTime;                                     //0x9d8
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x9e0
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x9ec
    union
    {
        ULONG FlushFlags;                                                   //0x9f8
        struct
        {
            ULONG FlushActive:1;                                            //0x9f8
            ULONG ReconcileActive:1;                                        //0x9f8
            ULONG PrimaryFilePurged:1;                                      //0x9f8
            ULONG DiskFileBad:1;                                            //0x9f8
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x9fc
    volatile LONG ReferenceCount;                                           //0xa00
    LONG UnloadHistoryIndex;                                                //0xa04
    ULONG UnloadHistory[128];                                               //0xa08
    ULONG BootStart;                                                        //0xc08
    ULONG UnaccessedStart;                                                  //0xc0c
    ULONG UnaccessedEnd;                                                    //0xc10
    ULONG LoadedKeyCount;                                                   //0xc14
    volatile ULONG HandleClosePending;                                      //0xc18
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0xc1c
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

