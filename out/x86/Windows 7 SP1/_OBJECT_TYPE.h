#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_TYPE_INITIALIZER.h>
#include <_EX_PUSH_LOCK.h>

//0x88 bytes (sizeof)
struct _OBJECT_TYPE
{
    struct _LIST_ENTRY TypeList;                                            //0x0
    struct _UNICODE_STRING Name;                                            //0x8
    VOID* DefaultObject;                                                    //0x10
    UCHAR Index;                                                            //0x14
    ULONG TotalNumberOfObjects;                                             //0x18
    ULONG TotalNumberOfHandles;                                             //0x1c
    ULONG HighWaterNumberOfObjects;                                         //0x20
    ULONG HighWaterNumberOfHandles;                                         //0x24
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;                               //0x28
    struct _EX_PUSH_LOCK TypeLock;                                          //0x78
    ULONG Key;                                                              //0x7c
    struct _LIST_ENTRY CallbackList;                                        //0x80
};
