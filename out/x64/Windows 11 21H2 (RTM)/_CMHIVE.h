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
#include <_CM_DIRTY_VECTOR_LOG.h>
#include <_CM_RM.h>
#include <_KTHREAD.h>
#include <_HIVE_WRITE_WAIT_QUEUE.h>
#include <_CMP_VOLUME_CONTEXT.h>
#include <_WORK_QUEUE_ITEM.h>

//0x12d8 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x608
    struct _LIST_ENTRY NotifyList;                                          //0x638
    struct _LIST_ENTRY HiveList;                                            //0x648
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x658
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x668
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x670
    ULONG KcbCacheTableSize;                                                //0x678
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x680
    ULONG DeletedKcbTableSize;                                              //0x688
    ULONG Identity;                                                         //0x68c
    struct _CMSI_RW_LOCK HiveLock;                                          //0x690
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x698
    ULONG FlushDirtyVectorSize;                                             //0x6a8
    struct CMP_OFFSET_ARRAY* FlushLogEntryOffsetArray;                      //0x6b0
    ULONG FlushLogEntryOffsetArrayCount;                                    //0x6b8
    ULONG FlushLogEntrySize;                                                //0x6bc
    ULONG FlushHiveTruncated;                                               //0x6c0
    UCHAR FlushBaseBlockDirty;                                              //0x6c4
    struct _RTL_BITMAP CapturedUnreconciledVector;                          //0x6c8
    ULONG CapturedUnreconciledVectorSize;                                   //0x6d8
    struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;                       //0x6e0
    ULONG UnreconciledOffsetArrayCount;                                     //0x6e8
    struct _HBASE_BLOCK* UnreconciledBaseBlock;                             //0x6f0
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x6f8
    ULONG LastShrinkHiveSize;                                               //0x700
    union _LARGE_INTEGER ActualFileSize;                                    //0x708
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x710
    struct _UNICODE_STRING FileFullPath;                                    //0x720
    struct _UNICODE_STRING FileUserName;                                    //0x730
    struct _UNICODE_STRING HiveRootPath;                                    //0x740
    ULONG SecurityCount;                                                    //0x750
    ULONG SecurityCacheSize;                                                //0x754
    LONG SecurityHitHint;                                                   //0x758
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x760
    struct _LIST_ENTRY SecurityHash[64];                                    //0x768
    ULONG UnloadEventCount;                                                 //0xb68
    struct _KEVENT** UnloadEventArray;                                      //0xb70
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xb78
    UCHAR Frozen;                                                           //0xb80
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;                             //0xb88
    ULONG Flags;                                                            //0x1010
    struct _LIST_ENTRY TrustClassEntry;                                     //0x1018
    ULONGLONG DirtyTime;                                                    //0x1028
    ULONGLONG UnreconciledTime;                                             //0x1030
    struct _CM_RM* CmRm;                                                    //0x1038
    ULONG CmRmInitFailPoint;                                                //0x1040
    LONG CmRmInitFailStatus;                                                //0x1044
    struct _KTHREAD* CreatorOwner;                                          //0x1048
    struct _KTHREAD* RundownThread;                                         //0x1050
    union _LARGE_INTEGER LastWriteTime;                                     //0x1058
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;                               //0x1060
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;                           //0x1070
    union
    {
        ULONG FlushFlags;                                                   //0x1080
        struct
        {
            ULONG PrimaryFilePurged:1;                                      //0x1080
            ULONG DiskFileBad:1;                                            //0x1080
        };
    };
    ULONG PrimaryFileSizeBeforeLastFlush;                                   //0x1084
    volatile LONG ReferenceCount;                                           //0x1088
    LONG UnloadHistoryIndex;                                                //0x108c
    ULONG UnloadHistory[128];                                               //0x1090
    ULONG BootStart;                                                        //0x1290
    ULONG UnaccessedStart;                                                  //0x1294
    ULONG UnaccessedEnd;                                                    //0x1298
    ULONG LoadedKeyCount;                                                   //0x129c
    volatile ULONG HandleClosePending;                                      //0x12a0
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0x12a8
    UCHAR FinalFlushSucceeded;                                              //0x12b0
    struct _CMP_VOLUME_CONTEXT* VolumeContext;                              //0x12b8
    ULONG LateUnloadWorkItemState;                                          //0x12c0
    struct _EX_PUSH_LOCK LateUnloadFinishedEvent;                           //0x12c8
    struct _WORK_QUEUE_ITEM* LateUnloadWorkItem;                            //0x12d0
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

