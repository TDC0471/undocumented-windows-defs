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

//0x138 bytes (sizeof)
struct _CM_KEY_CONTROL_BLOCK
{
    ULONGLONG RefCount;                                                     //0x0
    ULONG ExtFlags:16;                                                      //0x8
    ULONG Freed:1;                                                          //0x8
    ULONG Discarded:1;                                                      //0x8
    ULONG HiveUnloaded:1;                                                   //0x8
    ULONG Decommissioned:1;                                                 //0x8
    ULONG SpareExtFlag:1;                                                   //0x8
    ULONG TotalLevels:10;                                                   //0x8
    union
    {
        struct _CM_KEY_HASH KeyHash;                                        //0x10
        struct
        {
            struct _CM_PATH_HASH ConvKey;                                   //0x10
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
    UCHAR DelayedDeref:1;                                                   //0x40
    UCHAR DelayedClose:1;                                                   //0x40
    UCHAR Parking:1;                                                        //0x40
    UCHAR LayerSemantics;                                                   //0x41
    SHORT LayerHeight;                                                      //0x42
    ULONG Spare1;                                                           //0x44
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x48
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x50
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x58
    struct _CHILD_LIST ValueList;                                           //0x60
    struct _CM_KEY_CONTROL_BLOCK* LinkTarget;                               //0x68
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x70
        ULONG HashKey;                                                      //0x70
        ULONG SubKeyCount;                                                  //0x70
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x78
        struct _LIST_ENTRY ClonedListEntry;                                 //0x78
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
    ULONG Spare3;                                                           //0xbc
    struct _CM_KCB_LAYER_INFO* LayerInfo;                                   //0xc0
    CHAR* RealKeyName;                                                      //0xc8
    struct _LIST_ENTRY KCBUoWListHead;                                      //0xd0
    union
    {
        struct _LIST_ENTRY DelayQueueEntry;                                 //0xe0
        volatile UCHAR* Stolen;                                             //0xe0
    };
    struct _CM_TRANS* TransKCBOwner;                                        //0xf0
    struct _CM_INTENT_LOCK KCBLock;                                         //0xf8
    struct _CM_INTENT_LOCK KeyLock;                                         //0x108
    struct _CHILD_LIST TransValueCache;                                     //0x118
    struct _CM_TRANS* TransValueListOwner;                                  //0x120
    union
    {
        struct _UNICODE_STRING* FullKCBName;                                //0x128
        struct
        {
            ULONGLONG FullKCBNameStale:1;                                   //0x128
            ULONGLONG Reserved:63;                                          //0x128
        };
    };
    ULONGLONG SequenceNumber;                                               //0x130
};
/* Used in */
// _CMHIVE
// _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
// _CM_KCB_LAYER_INFO
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK
// _CM_PARSE_DEBUG_INFO

