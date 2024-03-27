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

//0xf20 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x6f0
    struct _LIST_ENTRY NotifyList;                                          //0x708
    struct _LIST_ENTRY HiveList;                                            //0x710
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x718
    struct _LIST_ENTRY FailedUnloadList;                                    //0x720
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x728
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x72c
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x734
    ULONG KcbCacheTableSize;                                                //0x738
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x73c
    ULONG DeletedKcbTableSize;                                              //0x740
    ULONG Identity;                                                         //0x744
    struct _FAST_MUTEX* HiveLock;                                           //0x748
    struct _FAST_MUTEX* WriterLock;                                         //0x74c
    struct _ERESOURCE* FlusherLock;                                         //0x750
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x754
    ULONG FlushDirtyVectorSize;                                             //0x75c
    UCHAR* FlushLogEntry;                                                   //0x760
    ULONG FlushLogEntrySize;                                                //0x764
    ULONG FlushHiveTruncated;                                               //0x768
    UCHAR FlushBaseBlockDirty;                                              //0x76c
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x770
    ULONG CapturedUnreconciledVectorSize;                                   //0x778
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x77c
    ULONG UnreconciledOffsetArrayCount;                                     //0x780
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x784
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x788
    ULONG UseCount;                                                         //0x78c
    ULONG LastShrinkHiveSize;                                               //0x790
    union _LARGE_INTEGER ActualFileSize;                                    //0x798
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x7a0
    struct _UNICODE_STRING FileFullPath;                                    //0x7b0
    struct _UNICODE_STRING FileUserName;                                    //0x7b8
    struct _UNICODE_STRING HiveRootPath;                                    //0x7c0
    ULONG SecurityCount;                                                    //0x7c8
    ULONG SecurityCacheSize;                                                //0x7cc
    LONG SecurityHitHint;                                                   //0x7d0
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x7d4
    struct _LIST_ENTRY SecurityHash[64];                                    //0x7d8
    ULONG UnloadEventCount;                                                 //0x9d8
    struct _KEVENT** UnloadEventArray;                                      //0x9dc
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x9e0
    UCHAR Frozen;                                                           //0x9e4
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x9e8
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x9ec
    UCHAR GrowOnlyMode;                                                     //0xa00
    ULONG GrowOffset;                                                       //0xa04
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xa08
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xa10
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0xa14
    ULONG Flags;                                                            //0xc9c
    struct _LIST_ENTRY TrustClassEntry;                                     //0xca0
    ULONGLONG DirtyTime;                                                    //0xca8
    ULONGLONG UnreconciledTime;                                             //0xcb0
    struct _CM_RM* CmRm;                                                    //0xcb8
    ULONG CmRmInitFailPoint;                                                //0xcbc
    LONG CmRmInitFailStatus;                                                //0xcc0
    struct _KTHREAD* CreatorOwner;                                          //0xcc4
    struct _KTHREAD* RundownThread;                                         //0xcc8
    union _LARGE_INTEGER LastWriteTime;                                     //0xcd0
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0xcd8
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0xce4
    union
    {
        ULONG FlushFlags;                                                   //0xcf0
        struct
        {
            ULONG FlushActive:1;                                            //0xcf0
            ULONG ReconcileActive:1;                                        //0xcf0
            ULONG PrimaryFilePurged:1;                                      //0xcf0
            ULONG DiskFileBad:1;                                            //0xcf0
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0xcf4
    volatile LONG ReferenceCount;                                           //0xcf8
    LONG UnloadHistoryIndex;                                                //0xcfc
    ULONG UnloadHistory[128];                                               //0xd00
    ULONG BootStart;                                                        //0xf00
    ULONG UnaccessedStart;                                                  //0xf04
    ULONG UnaccessedEnd;                                                    //0xf08
    ULONG LoadedKeyCount;                                                   //0xf0c
    volatile ULONG HandleClosePending;                                      //0xf10
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0xf14
    UCHAR FinalFlushSucceeded;                                              //0xf18
    UCHAR FailedUnload;                                                     //0xf19
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

