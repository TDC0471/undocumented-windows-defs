#pragma once
/* ------------------ */

#include <_CM_KEY_HASH.h>
#include <_CM_PATH_HASH.h>
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
#include <_CM_KCB_LAYER_INFO.h>
#include <_CM_TRANS.h>
#include <_CM_INTENT_LOCK.h>
#include <_CHILD_LIST.h>
#include <_UNICODE_STRING.h>

//0x130 bytes (sizeof)
struct _CM_KEY_CONTROL_BLOCK
{
    ULONG RefCount;                                                         //0x0
    ULONG ExtFlags:16;                                                      //0x4
    ULONG PrivateAlloc:1;                                                   //0x4
    ULONG Discarded:1;                                                      //0x4
    ULONG HiveUnloaded:1;                                                   //0x4
    ULONG Decommissioned:1;                                                 //0x4
    ULONG SpareExtFlag:1;                                                   //0x4
    ULONG TotalLevels:10;                                                   //0x4
    union
    {
        struct _CM_KEY_HASH KeyHash;                                        //0x8
        struct
        {
            struct _CM_PATH_HASH ConvKey;                                   //0x8
            struct _CM_KEY_HASH* NextHash;                                  //0x10
            struct _HHIVE* KeyHive;                                         //0x18
            ULONG KeyCell;                                                  //0x20
        };
    };
    struct _EX_PUSH_LOCK KcbPushlock;                                       //0x28
    union
    {
        struct _KTHREAD* Owner;                                             //0x30
        LONG SharedCount;                                                   //0x30
    };
    UCHAR DelayedDeref:1;                                                   //0x38
    UCHAR DelayedClose:1;                                                   //0x38
    UCHAR Parking:1;                                                        //0x38
    UCHAR LayerSemantics;                                                   //0x39
    SHORT LayerHeight;                                                      //0x3a
    ULONG Spare1;                                                           //0x3c
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x40
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x48
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x50
    struct _CACHED_CHILD_LIST ValueCache;                                   //0x58
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x68
        ULONG HashKey;                                                      //0x68
        ULONG SubKeyCount;                                                  //0x68
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x70
        struct _LIST_ENTRY FreeListEntry;                                   //0x70
    };
    struct _CM_KEY_BODY* KeyBodyArray[4];                                   //0x80
    union _LARGE_INTEGER KcbLastWriteTime;                                  //0xa0
    USHORT KcbMaxNameLen;                                                   //0xa8
    USHORT KcbMaxValueNameLen;                                              //0xaa
    ULONG KcbMaxValueDataLen;                                               //0xac
    ULONG KcbUserFlags:4;                                                   //0xb0
    ULONG KcbVirtControlFlags:4;                                            //0xb0
    ULONG KcbDebug:8;                                                       //0xb0
    ULONG Flags:16;                                                         //0xb0
    ULONG Spare3;                                                           //0xb4
    struct _CM_KCB_LAYER_INFO* LayerInfo;                                   //0xb8
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
    union
    {
        struct _UNICODE_STRING* FullKCBName;                                //0x120
        struct
        {
            ULONGLONG FullKCBNameStale:1;                                   //0x120
            ULONGLONG Reserved:63;                                          //0x120
        };
    };
    ULONGLONG SequenceNumber;                                               //0x128
};
/* Used in */
// _CACHED_CHILD_LIST
// _CMHIVE
// _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
// _CM_KCB_LAYER_INFO
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

