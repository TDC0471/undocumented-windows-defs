#pragma once
/* ------------------ */

#include <_OBJECT_TYPE.h>
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
    struct _OBJECT_TYPE* Type;                                              //0x8
    UCHAR NameInfoOffset;                                                   //0xc
    UCHAR HandleInfoOffset;                                                 //0xd
    UCHAR QuotaInfoOffset;                                                  //0xe
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
// _OBJECT_REF_INFO

