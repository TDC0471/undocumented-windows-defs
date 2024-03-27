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
    struct CMP_OFFSET_ARRAY* FlushLogEntryOffsetArray;                      //0x458
    ULONG FlushLogEntryOffsetArrayCount;                                    //0x45c
    ULONG FlushLogEntrySize;                                                //0x460
    ULONG FlushHiveTruncated;                                               //0x464
    UCHAR FlushBaseBlockDirty;                                              //0x468
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x46c
    ULONG CapturedUnreconciledVectorSize;                                   //0x474
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x478
    ULONG UnreconciledOffsetArrayCount;                                     //0x47c
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x480
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x484
    ULONG LastShrinkHiveSize;                                               //0x488
    union _LARGE_INTEGER ActualFileSize;                                    //0x490
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x498
    struct _UNICODE_STRING FileFullPath;                                    //0x4a8
    struct _UNICODE_STRING FileUserName;                                    //0x4b0
    struct _UNICODE_STRING HiveRootPath;                                    //0x4b8
    ULONG SecurityCount;                                                    //0x4c0
    ULONG SecurityCacheSize;                                                //0x4c4
    LONG SecurityHitHint;                                                   //0x4c8
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x4cc
    struct _LIST_ENTRY SecurityHash[64];                                    //0x4d0
    ULONG UnloadEventCount;                                                 //0x6d0
    struct _KEVENT** UnloadEventArray;                                      //0x6d4
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x6d8
    UCHAR Frozen;                                                           //0x6dc
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x6e0
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x6e4
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0x6f8
    ULONG Flags;                                                            //0x980
    struct _LIST_ENTRY TrustClassEntry;                                     //0x984
    ULONGLONG DirtyTime;                                                    //0x990
    ULONGLONG UnreconciledTime;                                             //0x998
    struct _CM_RM* CmRm;                                                    //0x9a0
    ULONG CmRmInitFailPoint;                                                //0x9a4
    LONG CmRmInitFailStatus;                                                //0x9a8
    struct _KTHREAD* CreatorOwner;                                          //0x9ac
    struct _KTHREAD* RundownThread;                                         //0x9b0
    union _LARGE_INTEGER LastWriteTime;                                     //0x9b8
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x9c0
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x9c8
    union
    {
        ULONG FlushFlags;                                                   //0x9d0
        struct
        {
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

