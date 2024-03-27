#pragma once
/* ------------------ */

#include <_CM_KEY_HASH.h>
#include <_HHIVE.h>
#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_NAME_CONTROL_BLOCK.h>
#include <_CM_KEY_SECURITY_CACHE.h>
#include <_CACHED_CHILD_LIST.h>
#include <_CM_INDEX_HINT_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_CM_KEY_BODY.h>
#include <_LARGE_INTEGER.h>
#include <_CM_TRANS.h>
#include <_CM_INTENT_LOCK.h>
#include <_CHILD_LIST.h>
#include <_UNICODE_STRING.h>

//0xa0 bytes (sizeof)
struct _CM_KEY_CONTROL_BLOCK
{
    ULONG RefCount;                                                         //0x0
    ULONG ExtFlags:16;                                                      //0x4
    ULONG PrivateAlloc:1;                                                   //0x4
    ULONG Delete:1;                                                         //0x4
    ULONG HiveUnloaded:1;                                                   //0x4
    ULONG Decommissioned:1;                                                 //0x4
    ULONG LockTablePresent:1;                                               //0x4
    ULONG TotalLevels:10;                                                   //0x4
    ULONG DelayedDeref:1;                                                   //0x8
    ULONG DelayedClose:1;                                                   //0x8
    ULONG Parking:1;                                                        //0x8
    union
    {
        struct _CM_KEY_HASH KeyHash;                                        //0xc
        struct
        {
            ULONG ConvKey;                                                  //0xc
            struct _CM_KEY_HASH* NextHash;                                  //0x10
            struct _HHIVE* KeyHive;                                         //0x14
            ULONG KeyCell;                                                  //0x18
        };
    };
    struct _EX_PUSH_LOCK KcbPushlock;                                       //0x1c
    union
    {
        struct _KTHREAD* Owner;                                             //0x20
        LONG SharedCount;                                                   //0x20
    };
    ULONG SlotHint;                                                         //0x24
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x28
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x2c
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x30
    struct _CACHED_CHILD_LIST ValueCache;                                   //0x34
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x3c
        ULONG HashKey;                                                      //0x3c
        ULONG SubKeyCount;                                                  //0x3c
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x40
        struct _LIST_ENTRY FreeListEntry;                                   //0x40
    };
    struct _CM_KEY_BODY* KeyBodyArray[4];                                   //0x48
    union _LARGE_INTEGER KcbLastWriteTime;                                  //0x58
    USHORT KcbMaxNameLen;                                                   //0x60
    USHORT KcbMaxValueNameLen;                                              //0x62
    ULONG KcbMaxValueDataLen;                                               //0x64
    ULONG KcbUserFlags:4;                                                   //0x68
    ULONG KcbVirtControlFlags:4;                                            //0x68
    ULONG KcbDebug:8;                                                       //0x68
    ULONG Flags:16;                                                         //0x68
    struct _LIST_ENTRY KCBUoWListHead;                                      //0x6c
    union
    {
        struct _LIST_ENTRY DelayQueueEntry;                                 //0x74
        volatile UCHAR* Stolen;                                             //0x74
    };
    struct _CM_TRANS* TransKCBOwner;                                        //0x7c
    struct _CM_INTENT_LOCK KCBLock;                                         //0x80
    struct _CM_INTENT_LOCK KeyLock;                                         //0x88
    struct _CHILD_LIST TransValueCache;                                     //0x90
    struct _CM_TRANS* TransValueListOwner;                                  //0x98
    struct _UNICODE_STRING* FullKCBName;                                    //0x9c
};
/* Used in */
// _CACHED_CHILD_LIST
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

