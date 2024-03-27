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

//0x1360 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x5a8
    struct _LIST_ENTRY NotifyList;                                          //0x5d8
    struct _LIST_ENTRY HiveList;                                            //0x5e8
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x5f8
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x608
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x610
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x620
    ULONG KcbCacheTableSize;                                                //0x628
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x630
    ULONG DeletedKcbTableSize;                                              //0x638
    ULONG Identity;                                                         //0x63c
    struct _FAST_MUTEX* HiveLock;                                           //0x640
    struct _FAST_MUTEX* WriterLock;                                         //0x648
    struct _ERESOURCE* FlusherLock;                                         //0x650
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x658
    ULONG FlushDirtyVectorSize;                                             //0x668
    UCHAR* FlushLogEntry;                                                   //0x670
    ULONG FlushLogEntrySize;                                                //0x678
    ULONG FlushHiveTruncated;                                               //0x67c
    UCHAR FlushBaseBlockDirty;                                              //0x680
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x688
    ULONG CapturedUnreconciledVectorSize;                                   //0x698
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x6a0
    ULONG UnreconciledOffsetArrayCount;                                     //0x6a8
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x6b0
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x6b8
    ULONG UseCount;                                                         //0x6c0
    ULONG LastShrinkHiveSize;                                               //0x6c4
    union _LARGE_INTEGER ActualFileSize;                                    //0x6c8
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x6d0
    struct _UNICODE_STRING FileFullPath;                                    //0x6e0
    struct _UNICODE_STRING FileUserName;                                    //0x6f0
    struct _UNICODE_STRING HiveRootPath;                                    //0x700
    ULONG SecurityCount;                                                    //0x710
    ULONG SecurityCacheSize;                                                //0x714
    LONG SecurityHitHint;                                                   //0x718
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x720
    struct _LIST_ENTRY SecurityHash[64];                                    //0x728
    ULONG UnloadEventCount;                                                 //0xb28
    struct _KEVENT** UnloadEventArray;                                      //0xb30
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xb38
    UCHAR Frozen;                                                           //0xb40
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0xb48
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0xb50
    UCHAR GrowOnlyMode;                                                     //0xb78
    ULONG GrowOffset;                                                       //0xb7c
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xb80
    struct _LIST_ENTRY KnodeConvertListHead;                                //0xb90
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xba0
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0xba8
    ULONG Flags;                                                            //0x10b0
    struct _LIST_ENTRY TrustClassEntry;                                     //0x10b8
    ULONGLONG DirtyTime;                                                    //0x10c8
    ULONGLONG UnreconciledTime;                                             //0x10d0
    struct _CM_RM* CmRm;                                                    //0x10d8
    ULONG CmRmInitFailPoint;                                                //0x10e0
    LONG CmRmInitFailStatus;                                                //0x10e4
    struct _KTHREAD* CreatorOwner;                                          //0x10e8
    struct _KTHREAD* RundownThread;                                         //0x10f0
    union _LARGE_INTEGER LastWriteTime;                                     //0x10f8
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x1100
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x1118
    union
    {
        ULONG FlushFlags;                                                   //0x1130
        struct
        {
            ULONG FlushActive:1;                                            //0x1130
            ULONG ReconcileActive:1;                                        //0x1130
            ULONG PrimaryFilePurged:1;                                      //0x1130
            ULONG DiskFileBad:1;                                            //0x1130
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x1134
    volatile LONG ReferenceCount;                                           //0x1138
    LONG UnloadHistoryIndex;                                                //0x113c
    ULONG UnloadHistory[128];                                               //0x1140
    ULONG BootStart;                                                        //0x1340
    ULONG UnaccessedStart;                                                  //0x1344
    ULONG UnaccessedEnd;                                                    //0x1348
    ULONG LoadedKeyCount;                                                   //0x134c
    volatile ULONG HandleClosePending;                                      //0x1350
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x1358
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

