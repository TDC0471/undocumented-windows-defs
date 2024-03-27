#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_OBJECT_TYPE_INITIALIZER.h>
#include <_EX_PUSH_LOCK.h>

//0x130 bytes (sizeof)
struct _OBJECT_TYPE
{
    struct _ERESOURCE Mutex;                                                //0x0
    struct _LIST_ENTRY TypeList;                                            //0x38
    struct _UNICODE_STRING Name;                                            //0x40
    VOID* DefaultObject;                                                    //0x48
    ULONG Index;                                                            //0x4c
    ULONG TotalNumberOfObjects;                                             //0x50
    ULONG TotalNumberOfHandles;                                             //0x54
    ULONG HighWaterNumberOfObjects;                                         //0x58
    ULONG HighWaterNumberOfHandles;                                         //0x5c
    struct _OBJECT_TYPE_INITIALIZER TypeInfo;                               //0x60
    ULONG Key;                                                              //0xac
    struct _EX_PUSH_LOCK ObjectLocks[32];                                   //0xb0
};
/* Used in */
// _OBJECT_HEADER

