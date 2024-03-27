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

//0x12e8 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x600
    struct _LIST_ENTRY NotifyList;                                          //0x630
    struct _LIST_ENTRY HiveList;                                            //0x640
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x650
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x660
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x668
    ULONG KcbCacheTableSize;                                                //0x670
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x678
    ULONG DeletedKcbTableSize;                                              //0x680
    ULONG Identity;                                                         //0x684
    struct _CMSI_RW_LOCK HiveLock;                                          //0x688
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x690
    ULONG FlushDirtyVectorSize;                                             //0x6a0
    struct CMP_OFFSET_ARRAY* FlushLogEntryOffsetArray;                      //0x6a8
    ULONG FlushLogEntryOffsetArrayCount;                                    //0x6b0
    ULONG FlushLogEntrySize;                                                //0x6b4
    ULONG FlushHiveTruncated;                                               //0x6b8
    UCHAR FlushBaseBlockDirty;                                              //0x6bc
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x6c0
    ULONG CapturedUnreconciledVectorSize;                                   //0x6d0
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x6d8
    ULONG UnreconciledOffsetArrayCount;                                     //0x6e0
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x6e8
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x6f0
    ULONG LastShrinkHiveSize;                                               //0x6f8
    union _LARGE_INTEGER ActualFileSize;                                    //0x700
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x708
    struct _UNICODE_STRING FileFullPath;                                    //0x718
    struct _UNICODE_STRING FileUserName;                                    //0x728
    struct _UNICODE_STRING HiveRootPath;                                    //0x738
    ULONG SecurityCount;                                                    //0x748
    ULONG SecurityCacheSize;                                                //0x74c
    LONG SecurityHitHint;                                                   //0x750
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x758
    struct _LIST_ENTRY SecurityHash[64];                                    //0x760
    ULONG UnloadEventCount;                                                 //0xb60
    struct _KEVENT** UnloadEventArray;                                      //0xb68
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xb70
    UCHAR Frozen;                                                           //0xb78
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0xb80
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0xb88
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0xbb0
    ULONG Flags;                                                            //0x1038
    struct _LIST_ENTRY TrustClassEntry;                                     //0x1040
    ULONGLONG DirtyTime;                                                    //0x1050
    ULONGLONG UnreconciledTime;                                             //0x1058
    struct _CM_RM* CmRm;                                                    //0x1060
    ULONG CmRmInitFailPoint;                                                //0x1068
    LONG CmRmInitFailStatus;                                                //0x106c
    struct _KTHREAD* CreatorOwner;                                          //0x1070
    struct _KTHREAD* RundownThread;                                         //0x1078
    union _LARGE_INTEGER LastWriteTime;                                     //0x1080
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x1088
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x1098
    union
    {
        ULONG FlushFlags;                                                   //0x10a8
        struct
        {
            ULONG PrimaryFilePurged:1;                                      //0x10a8
            ULONG DiskFileBad:1;                                            //0x10a8
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x10ac
    volatile LONG ReferenceCount;                                           //0x10b0
    LONG UnloadHistoryIndex;                                                //0x10b4
    ULONG UnloadHistory[128];                                               //0x10b8
    ULONG BootStart;                                                        //0x12b8
    ULONG UnaccessedStart;                                                  //0x12bc
    ULONG UnaccessedEnd;                                                    //0x12c0
    ULONG LoadedKeyCount;                                                   //0x12c4
    volatile ULONG HandleClosePending;                                      //0x12c8
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x12d0
    UCHAR FinalFlushSucceeded;                                              //0x12d8
    struct _CMP_VOLUME_CONTEXT* VolumeContext;                              //0x12e0
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

