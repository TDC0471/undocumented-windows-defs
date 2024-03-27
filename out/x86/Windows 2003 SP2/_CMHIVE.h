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

//0x57c bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[3];                                                   //0x2d0
    struct _LIST_ENTRY NotifyList;                                          //0x2dc
    struct _LIST_ENTRY HiveList;                                            //0x2e4
    struct _EX_PUSH_LOCK HiveLock;                                          //0x2ec
    struct _KGUARDED_MUTEX* ViewLock;                                       //0x2f0
    struct _EX_PUSH_LOCK WriterLock;                                        //0x2f4
    struct _EX_PUSH_LOCK FlusherLock;                                       //0x2f8
    struct _EX_PUSH_LOCK SecurityLock;                                      //0x2fc
    struct _LIST_ENTRY LRUViewListHead;                                     //0x300
    struct _LIST_ENTRY PinViewListHead;                                     //0x308
    struct _FILE_OBJECT* FileObject;                                        //0x310
    struct _UNICODE_STRING FileFullPath;                                    //0x314
    struct _UNICODE_STRING FileUserName;                                    //0x31c
    USHORT MappedViews;                                                     //0x324
    USHORT PinnedViews;                                                     //0x326
    ULONG UseCount;                                                         //0x328
    ULONG SecurityCount;                                                    //0x32c
    ULONG SecurityCacheSize;                                                //0x330
    LONG SecurityHitHint;                                                   //0x334
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x338
    struct _LIST_ENTRY SecurityHash[64];                                    //0x33c
    struct _KEVENT* UnloadEvent;                                            //0x53c
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x540
    UCHAR Frozen;                                                           //0x544
    struct _WORK_QUEUE_ITEM* UnloadWorkItem;                                //0x548
    UCHAR GrowOnlyMode;                                                     //0x54c
    ULONG GrowOffset;                                                       //0x550
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x554
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x55c
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x564
    ULONG Flags;                                                            //0x568
    struct _LIST_ENTRY TrustClassEntry;                                     //0x56c
    ULONG FlushCount;                                                       //0x574
    struct _KTHREAD* CreatorOwner;                                          //0x578
};
/* Used in */
// _HIVE_LIST_ENTRY

