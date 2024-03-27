#pragma once
/* ------------------ */

#include <_CM_KEY_HASH.h>
#include <_HHIVE.h>
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

//0x100 bytes (sizeof)
struct _CM_KEY_CONTROL_BLOCK
{
    ULONG RefCount;                                                         //0x0
    ULONG ExtFlags:8;                                                       //0x4
    ULONG PrivateAlloc:1;                                                   //0x4
    ULONG Delete:1;                                                         //0x4
    ULONG DelayedCloseIndex:12;                                             //0x4
    ULONG TotalLevels:10;                                                   //0x4
    union
    {
        struct _CM_KEY_HASH KeyHash;                                        //0x8
        struct
        {
            ULONG ConvKey;                                                  //0x8
            struct _CM_KEY_HASH* NextHash;                                  //0x10
            struct _HHIVE* KeyHive;                                         //0x18
            ULONG KeyCell;                                                  //0x20
        };
    };
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x28
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x30
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x38
    struct _CACHED_CHILD_LIST ValueCache;                                   //0x40
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x50
        ULONG HashKey;                                                      //0x50
        ULONG SubKeyCount;                                                  //0x50
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x58
        struct _LIST_ENTRY FreeListEntry;                                   //0x58
    };
    struct _CM_KEY_BODY* KeyBodyArray[4];                                   //0x68
    VOID* DelayCloseEntry;                                                  //0x88
    union _LARGE_INTEGER KcbLastWriteTime;                                  //0x90
    USHORT KcbMaxNameLen;                                                   //0x98
    USHORT KcbMaxValueNameLen;                                              //0x9a
    ULONG KcbMaxValueDataLen;                                               //0x9c
    ULONG KcbUserFlags:4;                                                   //0xa0
    ULONG KcbVirtControlFlags:4;                                            //0xa0
    ULONG KcbDebug:8;                                                       //0xa0
    ULONG Flags:16;                                                         //0xa0
    CHAR* RealKeyName;                                                      //0xa8
    struct _LIST_ENTRY KCBUoWListHead;                                      //0xb0
    struct _CM_TRANS* TransKCBOwner;                                        //0xc0
    struct _CM_INTENT_LOCK KCBLock;                                         //0xc8
    struct _CM_INTENT_LOCK KeyLock;                                         //0xd8
    struct _CHILD_LIST TransValueCache;                                     //0xe8
    struct _CM_TRANS* TransValueListOwner;                                  //0xf0
    struct _UNICODE_STRING* FullKCBName;                                    //0xf8
};
/* Used in */
// _CACHED_CHILD_LIST
// _CMHIVE
// _CM_KCB_UOW
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

