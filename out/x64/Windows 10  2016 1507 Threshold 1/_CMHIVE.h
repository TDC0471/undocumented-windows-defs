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

//0x17a8 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0xa68
    struct _LIST_ENTRY NotifyList;                                          //0xa98
    struct _LIST_ENTRY HiveList;                                            //0xaa8
    struct _LIST_ENTRY PreloadedHiveList;                                   //0xab8
    struct _LIST_ENTRY FailedUnloadList;                                    //0xac8
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0xad8
    struct _LIST_ENTRY ParseCacheEntries;                                   //0xae0
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0xaf0
    ULONG KcbCacheTableSize;                                                //0xaf8
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0xb00
    ULONG DeletedKcbTableSize;                                              //0xb08
    ULONG Identity;                                                         //0xb0c
    struct _FAST_MUTEX* HiveLock;                                           //0xb10
    struct _FAST_MUTEX* WriterLock;                                         //0xb18
    struct _ERESOURCE* FlusherLock;                                         //0xb20
    struct _RTL_BITMAP FlushDirtyVector;                                    //0xb28
    ULONG FlushDirtyVectorSize;                                             //0xb38
    UCHAR* FlushLogEntry;                                                   //0xb40
    ULONG FlushLogEntrySize;                                                //0xb48
    ULONG FlushHiveTruncated;                                               //0xb4c
    UCHAR FlushBaseBlockDirty;                                              //0xb50
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0xb58
    ULONG CapturedUnreconciledVectorSize;                                   //0xb68
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0xb70
    ULONG UnreconciledOffsetArrayCount;                                     //0xb78
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0xb80
    struct _EX_PUSH_LOCK SecurityLock;                                      //0xb88
    ULONG UseCount;                                                         //0xb90
    ULONG LastShrinkHiveSize;                                               //0xb94
    union _LARGE_INTEGER ActualFileSize;                                    //0xb98
    union _LARGE_INTEGER LogFileSizes[2];                                   //0xba0
    struct _UNICODE_STRING FileFullPath;                                    //0xbb0
    struct _UNICODE_STRING FileUserName;                                    //0xbc0
    struct _UNICODE_STRING HiveRootPath;                                    //0xbd0
    ULONG SecurityCount;                                                    //0xbe0
    ULONG SecurityCacheSize;                                                //0xbe4
    LONG SecurityHitHint;                                                   //0xbe8
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0xbf0
    struct _LIST_ENTRY SecurityHash[64];                                    //0xbf8
    ULONG UnloadEventCount;                                                 //0xff8
    struct _KEVENT** UnloadEventArray;                                      //0x1000
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x1008
    UCHAR Frozen;                                                           //0x1010
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0x1018
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0x1020
    UCHAR GrowOnlyMode;                                                     //0x1048
    ULONG GrowOffset;                                                       //0x104c
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x1050
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x1060
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0x1068
    ULONG Flags;                                                            //0x14f0
    struct _LIST_ENTRY TrustClassEntry;                                     //0x14f8
    ULONGLONG DirtyTime;                                                    //0x1508
    ULONGLONG UnreconciledTime;                                             //0x1510
    struct _CM_RM* CmRm;                                                    //0x1518
    ULONG CmRmInitFailPoint;                                                //0x1520
    LONG CmRmInitFailStatus;                                                //0x1524
    struct _KTHREAD* CreatorOwner;                                          //0x1528
    struct _KTHREAD* RundownThread;                                         //0x1530
    union _LARGE_INTEGER LastWriteTime;                                     //0x1538
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x1540
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x1558
    union
    {
        ULONG FlushFlags;                                                   //0x1570
        struct
        {
            ULONG FlushActive:1;                                            //0x1570
            ULONG ReconcileActive:1;                                        //0x1570
            ULONG PrimaryFilePurged:1;                                      //0x1570
            ULONG DiskFileBad:1;                                            //0x1570
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x1574
    volatile LONG ReferenceCount;                                           //0x1578
    LONG UnloadHistoryIndex;                                                //0x157c
    ULONG UnloadHistory[128];                                               //0x1580
    ULONG BootStart;                                                        //0x1780
    ULONG UnaccessedStart;                                                  //0x1784
    ULONG UnaccessedEnd;                                                    //0x1788
    ULONG LoadedKeyCount;                                                   //0x178c
    volatile ULONG HandleClosePending;                                      //0x1790
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x1798
    UCHAR FinalFlushSucceeded;                                              //0x17a0
    UCHAR FailedUnload;                                                     //0x17a1
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

