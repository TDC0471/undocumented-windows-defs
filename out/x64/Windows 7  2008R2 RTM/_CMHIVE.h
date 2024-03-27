#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_EX_RUNDOWN_REF.h>
#include <_CM_KEY_HASH_TABLE_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_ERESOURCE.h>
#include <_RTL_BITMAP.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_WORKITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_CM_RM.h>

//0xbe0 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[6];                                                   //0x598
    struct _LIST_ENTRY NotifyList;                                          //0x5c8
    struct _LIST_ENTRY HiveList;                                            //0x5d8
    struct _LIST_ENTRY PreloadedHiveList;                                   //0x5e8
    struct _EX_RUNDOWN_REF HiveRundown;                                     //0x5f8
    struct _LIST_ENTRY ParseCacheEntries;                                   //0x600
    struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;                         //0x610
    ULONG KcbCacheTableSize;                                                //0x618
    ULONG Identity;                                                         //0x61c
    struct _FAST_MUTEX* HiveLock;                                           //0x620
    struct _EX_PUSH_LOCK ViewLock;                                          //0x628
    struct _KTHREAD* ViewLockOwner;                                         //0x630
    ULONG ViewLockLast;                                                     //0x638
    ULONG ViewUnLockLast;                                                   //0x63c
    struct _FAST_MUTEX* WriterLock;                                         //0x640
    struct _ERESOURCE* FlusherLock;                                         //0x648
    struct _RTL_BITMAP FlushDirtyVector;                                    //0x650
    struct CMP_OFFSET_ARRAY* FlushOffsetArray;                              //0x660
    ULONG FlushOffsetArrayCount;                                            //0x668
    ULONG FlushHiveTruncated;                                               //0x66c
    struct _FAST_MUTEX* FlushLock2;                                         //0x670
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x678
    struct _LIST_ENTRY MappedViewList;                                      //0x680
    struct _LIST_ENTRY PinnedViewList;                                      //0x690
    struct _LIST_ENTRY FlushedViewList;                                     //0x6a0
    USHORT MappedViewCount;                                                 //0x6b0
    USHORT PinnedViewCount;                                                 //0x6b2
    ULONG UseCount;                                                         //0x6b4
    ULONG ViewsPerHive;                                                     //0x6b8
    struct _FILE_OBJECT* FileObject;                                        //0x6c0
    ULONG LastShrinkHiveSize;                                               //0x6c8
    union _LARGE_INTEGER ActualFileSize;                                    //0x6d0
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
    ULONG Flags;                                                            //0xba0
    struct _LIST_ENTRY TrustClassEntry;                                     //0xba8
    ULONG FlushCount;                                                       //0xbb8
    struct _CM_RM* CmRm;                                                    //0xbc0
    ULONG CmRmInitFailPoint;                                                //0xbc8
    LONG CmRmInitFailStatus;                                                //0xbcc
    struct _KTHREAD* CreatorOwner;                                          //0xbd0
    struct _KTHREAD* RundownThread;                                         //0xbd8
};
/* Used in */
// _CM_RM
// _CM_TRANS
// _CM_VIEW_OF_FILE
// _HIVE_LIST_ENTRY

