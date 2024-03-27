#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_OBJECT_CREATE_INFORMATION.h>
#include <_QUAD.h>

//0x38 bytes (sizeof)
struct _OBJECT_HEADER
{
    LONGLONG PointerCount;                                                  //0x0
    union
    {
        LONGLONG HandleCount;                                               //0x8
        VOID* NextToFree;                                                   //0x8
    };
    struct _EX_PUSH_LOCK Lock;                                              //0x10
    UCHAR TypeIndex;                                                        //0x18
    union
    {
        UCHAR TraceFlags;                                                   //0x19
        struct
        {
            UCHAR DbgRefTrace:1;                                            //0x19
            UCHAR DbgTracePermanent:1;                                      //0x19
        };
    };
    UCHAR InfoMask;                                                         //0x1a
    union
    {
        UCHAR Flags;                                                        //0x1b
        struct
        {
            UCHAR NewObject:1;                                              //0x1b
            UCHAR KernelObject:1;                                           //0x1b
            UCHAR KernelOnlyAccess:1;                                       //0x1b
            UCHAR ExclusiveObject:1;                                        //0x1b
            UCHAR PermanentObject:1;                                        //0x1b
            UCHAR DefaultSecurityQuota:1;                                   //0x1b
            UCHAR SingleHandleEntry:1;                                      //0x1b
            UCHAR DeletedInline:1;                                          //0x1b
        };
    };
    ULONG Spare;                                                            //0x1c
    union
    {
        struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;                //0x20
        VOID* QuotaBlockCharged;                                            //0x20
    };
    VOID* SecurityDescriptor;                                               //0x28
    struct _QUAD Body;                                                      //0x30
};
/* Used in */
// _DUMMY_FILE_OBJECT
// _OBJECT_REF_INFO

