#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_TYPE_INITIALIZER.h>
#include <_EX_PUSH_LOCK.h>

//0x220 bytes (sizeof)
struct _OBJECT_TYPE
{
    struct _ERESOURCE Mutex;                                                //0x0
    struct _LIST_ENTRY TypeList;                                            //0x68
    struct _UNICODE_STRING Name;                                            //0x78
    VOID* DefaultObject;                                                    //0x88
    ULONG Index;                                                            //0x90
    ULONG TotalNumberOfObjects;                                             //0x94
    ULONG TotalNumberOfHandles;                                             //0x98
    ULONG HighWaterNumberOfObjects;                                         //0x9c
    ULONG HighWaterNumberOfHandles;                                         //0xa0
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;                               //0xa8
    ULONG Key;                                                              //0x118
    struct _EX_PUSH_LOCK ObjectLocks[32];                                   //0x120
};
/* Used in */
// _OBJECT_HEADER

