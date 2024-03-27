#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_OBJECT_CREATE_INFORMATION.h>
#include <_QUAD.h>

//0x20 bytes (sizeof)
struct _OBJECT_HEADER
{
    LONG PointerCount;                                                      //0x0
    union
    {
        LONG HandleCount;                                                   //0x4
        VOID* NextToFree;                                                   //0x4
    };
    struct _EX_PUSH_LOCK Lock;                                              //0x8
    UCHAR TypeIndex;                                                        //0xc
    union
    {
        UCHAR TraceFlags;                                                   //0xd
        struct
        {
            UCHAR DbgRefTrace:1;                                            //0xd
            UCHAR DbgTracePermanent:1;                                      //0xd
        };
    };
    UCHAR InfoMask;                                                         //0xe
    UCHAR Flags;                                                            //0xf
    union
    {
        struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;                //0x10
        VOID* QuotaBlockCharged;                                            //0x10
    };
    VOID* SecurityDescriptor;                                               //0x14
    struct _QUAD Body;                                                      //0x18
};
/* Used in */
// _DUMMY_FILE_OBJECT
// _OBJECT_REF_INFO

