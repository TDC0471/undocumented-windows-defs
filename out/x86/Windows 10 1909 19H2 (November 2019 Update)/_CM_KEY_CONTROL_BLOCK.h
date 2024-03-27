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
#include <_CHILD_LIST.h>
#include <_CM_INDEX_HINT_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_CM_KEY_BODY.h>
#include <_LARGE_INTEGER.h>
#include <_CM_KCB_LAYER_INFO.h>
#include <_CM_TRANS.h>
#include <_CM_INTENT_LOCK.h>
#include <_UNICODE_STRING.h>

//0xb0 bytes (sizeof)
struct _CM_KEY_CONTROL_BLOCK
{
    ULONG RefCount;                                                         //0x0
    ULONG ExtFlags:16;                                                      //0x4
    ULONG Freed:1;                                                          //0x4
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
            struct _CM_KEY_HASH* NextHash;                                  //0xc
            struct _HHIVE* KeyHive;                                         //0x10
            ULONG KeyCell;                                                  //0x14
        };
    };
    struct _EX_PUSH_LOCK KcbPushlock;                                       //0x18
    union
    {
        struct _KTHREAD* Owner;                                             //0x1c
        LONG SharedCount;                                                   //0x1c
    };
    UCHAR DelayedDeref:1;                                                   //0x20
    UCHAR DelayedClose:1;                                                   //0x20
    UCHAR Parking:1;                                                        //0x20
    UCHAR LayerSemantics;                                                   //0x21
    SHORT LayerHeight;                                                      //0x22
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x24
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x28
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x2c
    struct _CHILD_LIST ValueList;                                           //0x30
    struct _CM_KEY_CONTROL_BLOCK* LinkTarget;                               //0x38
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x3c
        ULONG HashKey;                                                      //0x3c
        ULONG SubKeyCount;                                                  //0x3c
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x40
        struct _LIST_ENTRY ClonedListEntry;                                 //0x40
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
    struct _CM_KCB_LAYER_INFO* LayerInfo;                                   //0x6c
    struct _LIST_ENTRY KCBUoWListHead;                                      //0x70
    union
    {
        struct _LIST_ENTRY DelayQueueEntry;                                 //0x78
        volatile UCHAR* Stolen;                                             //0x78
    };
    struct _CM_TRANS* TransKCBOwner;                                        //0x80
    struct _CM_INTENT_LOCK KCBLock;                                         //0x84
    struct _CM_INTENT_LOCK KeyLock;                                         //0x8c
    struct _CHILD_LIST TransValueCache;                                     //0x94
    struct _CM_TRANS* TransValueListOwner;                                  //0x9c
    union
    {
        struct _UNICODE_STRING* FullKCBName;                                //0xa0
        struct
        {
            ULONG FullKCBNameStale:1;                                       //0xa0
            ULONG Reserved:31;                                              //0xa0
        };
    };
    ULONGLONG SequenceNumber;                                               //0xa8
};
/* Used in */
// _CMHIVE
// _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
// _CM_KCB_LAYER_INFO
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

