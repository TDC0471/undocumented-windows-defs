#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_SLIST_HEADER.h>

//0x58 bytes (sizeof)
struct _MI_VERIFIER_DRIVER_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG Loads;                                                            //0x8
    ULONG Unloads;                                                          //0xc
    struct _UNICODE_STRING BaseName;                                        //0x10
    VOID* StartAddress;                                                     //0x18
    VOID* EndAddress;                                                       //0x1c
    ULONG Flags;                                                            //0x20
    ULONG Signature;                                                        //0x24
    union _SLIST_HEADER PoolPageHeaders;                                    //0x28
    union _SLIST_HEADER PoolTrackers;                                       //0x30
    ULONG CurrentPagedPoolAllocations;                                      //0x38
    ULONG CurrentNonPagedPoolAllocations;                                   //0x3c
    ULONG PeakPagedPoolAllocations;                                         //0x40
    ULONG PeakNonPagedPoolAllocations;                                      //0x44
    ULONG PagedBytes;                                                       //0x48
    ULONG NonPagedBytes;                                                    //0x4c
    ULONG PeakPagedBytes;                                                   //0x50
    ULONG PeakNonPagedBytes;                                                //0x54
};
