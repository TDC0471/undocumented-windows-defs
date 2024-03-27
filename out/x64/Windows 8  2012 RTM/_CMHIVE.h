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

//0xdd8 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x580
    struct _LIST_ENTRY NotifyList;                                          //0x5b0
    struct _LIST_ENTRY HiveList;                                            //0x5c0
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x5d0
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x5e0
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x5e8
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x5f8
    ULONG KcbCacheTableSize;                                                //0x600
    struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;                       //0x608
    ULONG DeletedKcbTableSize;                                              //0x610
    ULONG Identity;                                                         //0x614
    struct _FAST_MUTEX* HiveLock;                                           //0x618
    struct _FAST_MUTEX* WriterLock;                                         //0x620
    struct _ERESOURCE* FlusherLock;                                         //0x628
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x630
    struct CMP_OFFSET_ARRAY* FlushOffsetArray;                              //0x640
    ULONG FlushOffsetArrayCount;                                            //0x648
    struct _HBASE_BLOCK* FlushBaseBlock;                                    //0x650
    ULONG FlushHiveTruncated;                                               //0x658
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x660
    ULONG UseCount;                                                         //0x668
    ULONG LastShrinkHiveSize;                                               //0x66c
    union _LARGE_INTEGER ActualFileSize;                                    //0x670
    union _LARGE_INTEGER LogFileSizes[2];                                   //0x678
    struct _UNICODE_STRING FileFullPath;                                    //0x688
    struct _UNICODE_STRING FileUserName;                                    //0x698
    struct _UNICODE_STRING HiveRootPath;                                    //0x6a8
    ULONG SecurityCount;                                                    //0x6b8
    ULONG SecurityCacheSize;                                                //0x6bc
    LONG SecurityHitHint;                                                   //0x6c0
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x6c8
    struct _LIST_ENTRY SecurityHash[64];                                    //0x6d0
    ULONG UnloadEventCount;                                                 //0xad0
    struct _KEVENT** UnloadEventArray;                                      //0xad8
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xae0
    UCHAR Frozen;                                                           //0xae8
    struct _CM_WORKITEM* UnloadWorkItem;                                    //0xaf0
    struct _CM_WORKITEM UnloadWorkItemHolder;                               //0xaf8
    UCHAR GrowOnlyMode;                                                     //0xb20
    ULONG GrowOffset;                                                       //0xb24
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xb28
    struct _LIST_ENTRY KnodeConvertListHead;                                //0xb38
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xb48
    ULONG Flags;                                                            //0xb50
    struct _LIST_ENTRY TrustClassEntry;                                     //0xb58
    ULONGLONG DirtyTime;                                                    //0xb68
    struct _CM_RM* CmRm;                                                    //0xb70
    ULONG CmRmInitFailPoint;                                                //0xb78
    LONG CmRmInitFailStatus;                                                //0xb7c
    struct _KTHREAD* CreatorOwner;                                          //0xb80
    struct _KTHREAD* RundownThread;                                         //0xb88
    struct _ETHREAD* ActiveFlushThread;                                     //0xb90
    struct _EX_PUSH_LOCK FlushBoostLock;                                    //0xb98
    union _LARGE_INTEGER LastWriteTime;                                     //0xba0
    volatile LONG ReferenceCount;                                           //0xba8
    union
    {
        ULONG FlushFlags;                                                   //0xbac
        struct
        {
            ULONG FlushActive:1;                                            //0xbac
            ULONG DiskFileBad:1;                                            //0xbac
            ULONG FlushBoosted:1;                                           //0xbac
            ULONG PrimaryWritePending:1;                                    //0xbac
            ULONG PriorPurgeComplete:1;                                     //0xbac
        };
    };
    struct _HIVE_WAIT_PACKET* FlushWaitList;                                //0xbb0
    LONG UnloadHistoryIndex;                                                //0xbb8
    ULONG UnloadHistory[128];                                               //0xbbc
    ULONG BootStart;                                                        //0xdbc
    ULONG UnaccessedStart;                                                  //0xdc0
    ULONG UnaccessedEnd;                                                    //0xdc4
    ULONG LoadedKeyCount;                                                   //0xdc8
    volatile ULONG HandleClosePending;                                      //0xdcc
    struct _EX_PUSH_LOCK HandleClosePendingEvent;                           //0xdd0
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _HIVE_LIST_ENTRY

