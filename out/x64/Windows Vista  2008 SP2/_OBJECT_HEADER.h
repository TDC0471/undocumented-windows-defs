#pragma once
/* ------------------ */

#include <_OBJECT_TYPE.h>
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
    struct _OBJECT_TYPE* Type;                                              //0x10
    UCHAR NameInfoOffset;                                                   //0x18
    UCHAR HandleInfoOffset;                                                 //0x19
    UCHAR QuotaInfoOffset;                                                  //0x1a
    UCHAR Flags;                                                            //0x1b
    union
    {
        struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;                //0x20
        VOID* QuotaBlockCharged;                                            //0x20
    };
    VOID* SecurityDescriptor;                                               //0x28
    struct _QUAD Body;                                                      //0x30
};
/* Used in */
// _OBJECT_REF_INFO

