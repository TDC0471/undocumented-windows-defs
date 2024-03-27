#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>

//0x30 bytes (sizeof)
struct _FSRTL_COMMON_FCB_HEADER
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    UCHAR Flags;                                                            //0x4
    UCHAR IsFastIoPossible;                                                 //0x5
    UCHAR Flags2;                                                           //0x6
    UCHAR Reserved:4;                                                       //0x7
    UCHAR Version:4;                                                        //0x7
    struct _ERESOURCE* Resource;                                            //0x8
    struct _ERESOURCE* PagingIoResource;                                    //0x10
    union _LARGE_INTEGER AllocationSize;                                    //0x18
    union _LARGE_INTEGER FileSize;                                          //0x20
    union _LARGE_INTEGER ValidDataLength;                                   //0x28
};
/* Used in */
// _CC_FLUSH_PACKET

