#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_LIST_ENTRY.h>
#include <_FAST_MUTEX.h>
#include <_FILE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_CM_KEY_SECURITY_CACHE_ENTRY.h>
#include <_KEVENT.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_CM_CELL_REMAP_BLOCK.h>

//0x49c bytes (sizeof)
struct _CMHIVE
{
    struct _HHIVE Hive;                                                     //0x0
    VOID* FileHandles[3];                                                   //0x210
    struct _LIST_ENTRY NotifyList;                                          //0x21c
    struct _LIST_ENTRY HiveList;                                            //0x224
    struct _FAST_MUTEX* HiveLock;                                           //0x22c
    struct _FAST_MUTEX* ViewLock;                                           //0x230
    struct _LIST_ENTRY LRUViewListHead;                                     //0x234
    struct _LIST_ENTRY PinViewListHead;                                     //0x23c
    struct _FILE_OBJECT* FileObject;                                        //0x244
    struct _UNICODE_STRING FileFullPath;                                    //0x248
    struct _UNICODE_STRING FileUserName;                                    //0x250
    USHORT MappedViews;                                                     //0x258
    USHORT PinnedViews;                                                     //0x25a
    ULONG UseCount;                                                         //0x25c
    ULONG SecurityCount;                                                    //0x260
    ULONG SecurityCacheSize;                                                //0x264
    LONG SecurityHitHint;                                                   //0x268
    struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;                     //0x26c
    struct _LIST_ENTRY SecurityHash[64];                                    //0x270
    struct _KEVENT* UnloadEvent;                                            //0x470
    struct _CM_KEY_CONTROL_BLOCK* RootKcb;                                  //0x474
    UCHAR Frozen;                                                           //0x478
    struct _WORK_QUEUE_ITEM* UnloadWorkItem;                                //0x47c
    UCHAR GrowOnlyMode;                                                     //0x480
    ULONG GrowOffset;                                                       //0x484
    struct _LIST_ENTRY KcbConvertListHead;                                  //0x488
    struct _LIST_ENTRY KnodeConvertListHead;                                //0x490
    struct _CM_CELL_REMAP_BLOCK* CellRemapArray;                            //0x498
};
/* Used in */
// _HIVE_LIST_ENTRY

