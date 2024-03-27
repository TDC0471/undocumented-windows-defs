#pragma once
/* ------------------ */

#include <_MBCB.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_VACB.h>
#include <_ERESOURCE.h>
#include <_SHARED_CACHE_MAP.h>

//0xc0 bytes (sizeof)
struct _BCB
{
    union
    {
        struct _MBCB Dummy;                                                 //0x0
        struct
        {
            SHORT NodeTypeCode;                                             //0x0
            UCHAR Dirty;                                                    //0x2
            UCHAR Reserved;                                                 //0x3
            ULONG ByteLength;                                               //0x4
            union _LARGE_INTEGER FileOffset;                                //0x8
            struct _LIST_ENTRY BcbLinks;                                    //0x10
            union _LARGE_INTEGER BeyondLastByte;                            //0x20
            union _LARGE_INTEGER OldestLsn;                                 //0x28
            union _LARGE_INTEGER NewestLsn;                                 //0x30
            struct _VACB* Vacb;                                             //0x38
            ULONG PinCount;                                                 //0x40
            struct _ERESOURCE Resource;                                     //0x48
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0xb0
            VOID* BaseAddress;                                              //0xb8
        };
    };
};
/* Used in */
// _CC_FLUSH_PACKET

