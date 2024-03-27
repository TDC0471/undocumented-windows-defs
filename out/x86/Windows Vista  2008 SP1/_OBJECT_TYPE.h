#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_TYPE_INITIALIZER.h>
#include <_ERESOURCE.h>
#include <_EX_PUSH_LOCK.h>

//0x140 bytes (sizeof)
struct _OBJECT_TYPE
{
    struct _LIST_ENTRY TypeList;                                            //0x0
    struct _UNICODE_STRING Name;                                            //0x8
    VOID* DefaultObject;                                                    //0x10
    ULONG Index;                                                            //0x14
    ULONG TotalNumberOfObjects;                                             //0x18
    ULONG TotalNumberOfHandles;                                             //0x1c
    ULONG HighWaterNumberOfObjects;                                         //0x20
    ULONG HighWaterNumberOfHandles;                                         //0x24
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;                               //0x28
    struct _ERESOURCE Mutex;                                                //0x78
    struct _EX_PUSH_LOCK TypeLock;                                          //0xb0
    ULONG Key;                                                              //0xb4
    struct _EX_PUSH_LOCK ObjectLocks[32];                                   //0xb8
    struct _LIST_ENTRY CallbackList;                                        //0x138
};
/* Used in */
// _OBJECT_HEADER
// _OB_DUPLICATE_OBJECT_STATE

