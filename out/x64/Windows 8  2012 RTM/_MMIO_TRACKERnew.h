#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_IO_CACHE_INFO.h>

//0x70 bytes (sizeof)
struct _MMIO_TRACKER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG PageFrameIndex;                                               //0x10
    ULONGLONG NumberOfPages;                                                //0x18
    union
    {
        VOID* BaseVa;                                                       //0x20
        ULONG CacheFlushTimeStamp;                                          //0x20
    };
    struct _MDL* Mdl;                                                       //0x28
    ULONGLONG MdlPages;                                                     //0x30
    VOID* StackTrace[6];                                                    //0x38
    struct _IO_CACHE_INFO CacheInfo[1];                                     //0x68
};
/* Used in */
// _MI_PHYSMEM_BLOCK

