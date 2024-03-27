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

//0x128 bytes (sizeof)
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
        struct _CM_KEY_HASH KeyHash;                                        //0x10
        struct
        {
            ULONG ConvKey;                                                  //0x10
            struct _CM_KEY_HASH* NextHash;                                  //0x18
            struct _HHIVE* KeyHive;                                         //0x20
            ULONG KeyCell;                                                  //0x28
        };
    };
    struct _EX_PUSH_LOCK KcbPushlock;                                       //0x30
    union
    {
        struct _KTHREAD* Owner;                                             //0x38
        LONG SharedCount;                                                   //0x38
    };
    ULONG SlotHint;                                                         //0x40
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x48
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x50
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x58
    struct _CACHED_CHILD_LIST ValueCache;                                   //0x60
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x70
        ULONG HashKey;                                                      //0x70
        ULONG SubKeyCount;                                                  //0x70
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x78
        struct _LIST_ENTRY FreeListEntry;                                   //0x78
    };
    struct _CM_KEY_BODY* KeyBodyArray[4];                                   //0x88
    union _LARGE_INTEGER KcbLastWriteTime;                                  //0xa8
    USHORT KcbMaxNameLen;                                                   //0xb0
    USHORT KcbMaxValueNameLen;                                              //0xb2
    ULONG KcbMaxValueDataLen;                                               //0xb4
    ULONG KcbUserFlags:4;                                                   //0xb8
    ULONG KcbVirtControlFlags:4;                                            //0xb8
    ULONG KcbDebug:8;                                                       //0xb8
    ULONG Flags:16;                                                         //0xb8
    CHAR* RealKeyName;                                                      //0xc0
    struct _LIST_ENTRY KCBUoWListHead;                                      //0xc8
    union
    {
        struct _LIST_ENTRY DelayQueueEntry;                                 //0xd8
        volatile UCHAR* Stolen;                                             //0xd8
    };
    struct _CM_TRANS* TransKCBOwner;                                        //0xe8
    struct _CM_INTENT_LOCK KCBLock;                                         //0xf0
    struct _CM_INTENT_LOCK KeyLock;                                         //0x100
    struct _CHILD_LIST TransValueCache;                                     //0x110
    struct _CM_TRANS* TransValueListOwner;                                  //0x118
    struct _UNICODE_STRING* FullKCBName;                                    //0x120
};
/* Used in */
// _CACHED_CHILD_LIST
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

