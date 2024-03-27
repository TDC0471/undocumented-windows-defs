#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_KGUARDED_MUTEX.h>
#include <_FILE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>
#include <_KTHREAD.h>

//0xab8 bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[3];                                                   //0x578
    struct _LIST_ENTRY NotifyList;                                          //0x590
    struct _LIST_ENTRY HiveList;                                            //0x5a0
    struct _EX_PUSH_LOCK HiveLock;                                          //0x5b0
    struct _KGUARDED_MUTEX* ViewLock;                                       //0x5b8
    struct _EX_PUSH_LOCK WriterLock;                                        //0x5c0
    struct _EX_PUSH_LOCK FlusherLock;                                       //0x5c8
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x5d0
    struct _LIST_ENTRY LRUViewListHead;                                     //0x5d8
    struct _LIST_ENTRY PinViewListHead;                                     //0x5e8
    struct _FILE_OBJECT* FileObject;                                        //0x5f8
    struct _UNICODE_STRING FileFullPath;                                    //0x600
    struct _UNICODE_STRING FileUserName;                                    //0x610
    USHORT MappedViews;                                                     //0x620
    USHORT PinnedViews;                                                     //0x622
    ULONG UseCount;                                                         //0x624
    ULONG SecurityCount;                                                    //0x628
    ULONG SecurityCacheSize;                                                //0x62c
    LONG SecurityHitHint;                                                   //0x630
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x638
    struct _LIST_ENTRY SecurityHash[64];                                    //0x640
    struct _KEVENT* UnloadEvent;                                            //0xa40
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0xa48
    UCHAR Frozen;                                                           //0xa50
    struct _WORK_QUEUE_ITEM* UnloadWorkItem;                                //0xa58
    UCHAR GrowOnlyMode;                                                     //0xa60
    ULONG GrowOffset;                                                       //0xa64
    struct _LIST_ENTRY KcbConvertListHead;                                  //0xa68
    struct _LIST_ENTRY KnodeConvertListHead;                                //0xa78
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0xa88
    ULONG Flags;                                                            //0xa90
    struct _LIST_ENTRY TrustClassEntry;                                     //0xa98
    ULONG FlushCount;                                                       //0xaa8
    struct _KTHREAD* CreatorOwner;                                          //0xab0
};
/* Used in */
// _HIVE_LIST_ENTRY

