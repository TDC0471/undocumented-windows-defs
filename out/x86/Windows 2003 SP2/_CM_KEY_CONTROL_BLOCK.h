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

//0x68 bytes (sizeof)
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
            struct _CM_KEY_HASH* NextHash;                                  //0xc
            struct _HHIVE* KeyHive;                                         //0x10
            ULONG KeyCell;                                                  //0x14
        };
    };
    struct _CM_KEY_CONTROL_BLOCK* ParentKcb;                                //0x18
    struct _CM_NAME_CONTROL_BLOCK* NameBlock;                               //0x1c
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x20
    struct _CACHED_CHILD_LIST ValueCache;                                   //0x24
    union
    {
        struct _CM_INDEX_HINT_BLOCK* IndexHint;                             //0x2c
        ULONG HashKey;                                                      //0x2c
        ULONG SubKeyCount;                                                  //0x2c
    };
    union
    {
        struct _LIST_ENTRY KeyBodyListHead;                                 //0x30
        struct _LIST_ENTRY FreeListEntry;                                   //0x30
    };
    struct _CM_KEY_BODY* KeyBodyArray[4];                                   //0x38
    VOID* DelayCloseEntry;                                                  //0x48
    union _LARGE_INTEGER KcbLastWriteTime;                                  //0x50
    USHORT KcbMaxNameLen;                                                   //0x58
    USHORT KcbMaxValueNameLen;                                              //0x5a
    ULONG KcbMaxValueDataLen;                                               //0x5c
    ULONG KcbUserFlags:4;                                                   //0x60
    ULONG KcbVirtControlFlags:4;                                            //0x60
    ULONG KcbDebug:8;                                                       //0x60
    ULONG Flags:16;                                                         //0x60
};
/* Used in */
// _CACHED_CHILD_LIST
// _CMHIVE
// _CM_KEY_BODY
// _CM_KEY_CONTROL_BLOCK
// _CM_NOTIFY_BLOCK

