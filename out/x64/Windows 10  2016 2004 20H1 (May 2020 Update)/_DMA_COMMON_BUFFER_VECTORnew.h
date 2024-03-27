#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_HALP_DMA_DOMAIN_OBJECT.h>
#include <_MDL.h>
#include <_DMA_COMMON_BUFFER_ENTRY.h>

//0x48 bytes (sizeof)
struct _DMA_COMMON_BUFFER_VECTOR
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG SizeOfEntries;                                                //0x10
    ULONG NumberOfEntries;                                                  //0x18
    struct _HALP_DMA_DOMAIN_OBJECT* Domain;                                 //0x20
    struct _MDL* Mdl;                                                       //0x28
    VOID* BaseAddress;                                                      //0x30
    ULONGLONG BaseLogicalAddress;                                           //0x38
    struct _DMA_COMMON_BUFFER_ENTRY* Entries;                               //0x40
};
/* Used in */
// _DMA_OPERATIONS

