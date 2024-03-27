#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_TYPE_INITIALIZER.h>
#include <_ERESOURCE.h>
#include <_EX_PUSH_LOCK.h>

//0x238 bytes (sizeof)
struct _OBJECT_TYPE
{
    struct _LIST_ENTRY TypeList;                                            //0x0
    struct _UNICODE_STRING Name;                                            //0x10
    VOID* DefaultObject;                                                    //0x20
    ULONG Index;                                                            //0x28
    ULONG TotalNumberOfObjects;                                             //0x2c
    ULONG TotalNumberOfHandles;                                             //0x30
    ULONG HighWaterNumberOfObjects;                                         //0x34
    ULONG HighWaterNumberOfHandles;                                         //0x38
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;                               //0x40
    struct _ERESOURCE Mutex;                                                //0xb0
    struct _EX_PUSH_LOCK TypeLock;                                          //0x118
    ULONG Key;                                                              //0x120
    struct _EX_PUSH_LOCK ObjectLocks[32];                                   //0x128
    struct _LIST_ENTRY CallbackList;                                        //0x228
};
/* Used in */
// _OBJECT_HEADER
// _OB_DUPLICATE_OBJECT_STATE

