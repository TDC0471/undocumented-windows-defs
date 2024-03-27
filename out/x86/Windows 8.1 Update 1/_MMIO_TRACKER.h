#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_IO_CACHE_INFO.h>

//0x38 bytes (sizeof)
struct _MMIO_TRACKER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG PageFrameIndex;                                                   //0x8
    ULONG NumberOfPages;                                                    //0xc
    union
    {
        VOID* BaseVa;                                                       //0x10
        ULONG CacheFlushTimeStamp;                                          //0x10
    };
    struct _MDL* Mdl;                                                       //0x14
    ULONG MdlPages;                                                         //0x18
    VOID* StackTrace[6];                                                    //0x1c
    struct _IO_CACHE_INFO CacheInfo[1];                                     //0x34
};
/* Used in */
// _MI_PHYSMEM_BLOCK

