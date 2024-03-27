#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>
#include <_CM_KEY_HASH_TABLE_ENTRY.h>
#include <_CMSI_RW_LOCK.h>
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
#include <_CM_DIRTY_VECTOR_LOG.h>
#include <_CM_RM.h>
#include <_KTHREAD.h>
#include <_HIVE_WRITE_WAIT_QUEUE.h>
#include <_CMP_VOLUME_CONTEXT.h>

//0xc00 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x400
    struct _LIST_ENTRY NotifyList;                                          //0x418
    struct _LIST_ENTRY HiveList;                                            //0x420
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x428
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x430
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x434
    ULONG KcbCacheTableSize;                                                //0x438
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x43c
    ULONG DeletedKcbTableSize;                                              //0x440
    ULONG Identity;                                                         //0x444
    struct _CMSI_RW_LOCK HiveLock;                                          //0x448
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x44c
    ULONG FlushDirtyVectorSize;                                             //0x454
    UCHAR* FlushLogEntry;                                                   //0x458
    ULONG FlushLogEntrySize;                                                //0x45c
    ULONG FlushHiveTruncated;                                               //0x460
    UCHAR FlushBaseBlockDirty;                                              //0x464
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x468
    ULONG CapturedUnreconciledVectorSize;                                   //0x470
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x474
    ULONG UnreconciledOffsetArrayCount;                                     //0x478
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x47c
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x480
    ULONG LastShrinkHiveSize;                                               //0x484
    union _LARGE_INTEGER ActualFileSize;                                    //0x488
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x490
    struct _UNICODE_STRING FileFullPath;                                    //0x4a0
    struct _UNICODE_STRING FileUserName;                                    //0x4a8
    struct _UNICODE_STRING HiveRootPath;                                    //0x4b0
    ULONG SecurityCount;                                                    //0x4b8
    ULONG SecurityCacheSize;                                                //0x4bc
    LONG SecurityHitHint;                                                   //0x4c0
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x4c4
    struct _LIST_ENTRY SecurityHash[64];                                    //0x4c8
    ULONG UnloadEventCount;                                                 //0x6c8
    struct _KEVENT** UnloadEventArray;                                      //0x6cc
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x6d0
    UCHAR Frozen;                                                           //0x6d4
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x6d8
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x6dc
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0x6f0
    ULONG Flags;                                                            //0x978
    struct _LIST_ENTRY TrustClassEntry;                                     //0x97c
    ULONGLONG DirtyTime;                                                    //0x988
    ULONGLONG UnreconciledTime;                                             //0x990
    struct _CM_RM* CmRm;                                                    //0x998
    ULONG CmRmInitFailPoint;                                                //0x99c
    LONG CmRmInitFailStatus;                                                //0x9a0
    struct _KTHREAD* CreatorOwner;                                          //0x9a4
    struct _KTHREAD* RundownThread;                                         //0x9a8
    union _LARGE_INTEGER LastWriteTime;                                     //0x9b0
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x9b8
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x9c4
    union
    {
        ULONG FlushFlags;                                                   //0x9d0
        struct
        {
            ULONG FlushActive:1;                                            //0x9d0
            ULONG ReconcileActive:1;                                        //0x9d0
            ULONG PrimaryFilePurged:1;                                      //0x9d0
            ULONG DiskFileBad:1;                                            //0x9d0
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x9d4
    volatile LONG ReferenceCount;                                           //0x9d8
    LONG UnloadHistoryIndex;                                                //0x9dc
    ULONG UnloadHistory[128];                                               //0x9e0
    ULONG BootStart;                                                        //0xbe0
    ULONG UnaccessedStart;                                                  //0xbe4
    ULONG UnaccessedEnd;                                                    //0xbe8
    ULONG LoadedKeyCount;                                                   //0xbec
    volatile ULONG HandleClosePending;                                      //0xbf0
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0xbf4
    UCHAR FinalFlushSucceeded;                                              //0xbf8
    struct _CMP_VOLUME_CONTEXT* VolumeContext;                              //0xbfc
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

