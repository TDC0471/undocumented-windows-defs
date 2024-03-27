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

//0x1358 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x5a0
    struct _LIST_ENTRY NotifyList;                                          //0x5d0
    struct _LIST_ENTRY HiveList;                                            //0x5e0
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x5f0
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x600
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x608
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x618
    ULONG KcbCacheTableSize;                                                //0x620
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x628
    ULONG DeletedKcbTableSize;                                              //0x630
    ULONG Identity;                                                         //0x634
    struct _FAST_MUTEX* HiveLock;                                           //0x638
    struct _FAST_MUTEX* WriterLock;                                         //0x640
    struct _ERESOURCE* FlusherLock;                                         //0x648
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x650
    ULONG FlushDirtyVectorSize;                                             //0x660
    UCHAR* FlushLogEntry;                                                   //0x668
    ULONG FlushLogEntrySize;                                                //0x670
    ULONG FlushHiveTruncated;                                               //0x674
    UCHAR FlushBaseBlockDirty;                                              //0x678
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x680
    ULONG CapturedUnreconciledVectorSize;                                   //0x690
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x698
    ULONG UnreconciledOffsetArrayCount;                                     //0x6a0
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x6a8
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x6b0
    ULONG UseCount;                                                         //0x6b8
    ULONG LastShrinkHiveSize;                                               //0x6bc
    union _LARGE_INTEGER ActualFileSize;                                    //0x6c0
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x6c8
    struct _UNICODE_STRING FileFullPath;                                    //0x6d8
    struct _UNICODE_STRING FileUserName;                                    //0x6e8
    struct _UNICODE_STRING HiveRootPath;                                    //0x6f8
    ULONG SecurityCount;                                                    //0x708
    ULONG SecurityCacheSize;                                                //0x70c
    LONG SecurityHitHint;                                                   //0x710
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x718
    struct _LIST_ENTRY SecurityHash[64];                                    //0x720
    ULONG UnloadEventCount;                                                 //0xb20
    struct _KEVENT** UnloadEventArray;                                      //0xb28
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xb30
    UCHAR Frozen;                                                           //0xb38
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0xb40
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0xb48
    UCHAR GrowOnlyMode;                                                     //0xb70
    ULONG GrowOffset;                                                       //0xb74
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xb78
    struct _LIST_ENTRY KnodeConvertListHead;                                //0xb88
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xb98
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0xba0
    ULONG Flags;                                                            //0x10a8
    struct _LIST_ENTRY TrustClassEntry;                                     //0x10b0
    ULONGLONG DirtyTime;                                                    //0x10c0
    ULONGLONG UnreconciledTime;                                             //0x10c8
    struct _CM_RM* CmRm;                                                    //0x10d0
    ULONG CmRmInitFailPoint;                                                //0x10d8
    LONG CmRmInitFailStatus;                                                //0x10dc
    struct _KTHREAD* CreatorOwner;                                          //0x10e0
    struct _KTHREAD* RundownThread;                                         //0x10e8
    union _LARGE_INTEGER LastWriteTime;                                     //0x10f0
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x10f8
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x1110
    union
    {
        ULONG FlushFlags;                                                   //0x1128
        struct
        {
            ULONG FlushActive:1;                                            //0x1128
            ULONG ReconcileActive:1;                                        //0x1128
            ULONG PrimaryFilePurged:1;                                      //0x1128
            ULONG DiskFileBad:1;                                            //0x1128
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x112c
    volatile LONG ReferenceCount;                                           //0x1130
    LONG UnloadHistoryIndex;                                                //0x1134
    ULONG UnloadHistory[128];                                               //0x1138
    ULONG BootStart;                                                        //0x1338
    ULONG UnaccessedStart;                                                  //0x133c
    ULONG UnaccessedEnd;                                                    //0x1340
    ULONG LoadedKeyCount;                                                   //0x1344
    volatile ULONG HandleClosePending;                                      //0x1348
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x1350
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

