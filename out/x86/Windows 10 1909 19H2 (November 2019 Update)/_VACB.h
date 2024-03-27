#pragma once
/* ------------------ */

#include <_SHARED_CACHE_MAP.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_VACB_ARRAY_HEADER.h>

//0x18 bytes (sizeof)
struct _VACB
{
    VOID* BaseAddress;                                                      //0x0
    struct _SHARED_CACHE_MAP* SharedCacheMap;                               //0x4
    union
    {
        union _LARGE_INTEGER FileOffset;                                    //0x8
        USHORT ActiveCount;                                                 //0x8
        struct _LIST_ENTRY Links;                                           //0x8
    } Overlay;                                                              //0x8
    struct _VACB_ARRAY_HEADER* ArrayHead;                                   //0x10
};
/* Used in */
// _SHARED_CACHE_MAP

