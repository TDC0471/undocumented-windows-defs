#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_SLIST_HEADER.h>

//0xa0 bytes (sizeof)
struct _MI_VERIFIER_DRIVER_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG Loads;                                                            //0x10
    ULONG Unloads;                                                          //0x14
    struct _UNICODE_STRING BaseName;                                        //0x18
    VOID* StartAddress;                                                     //0x28
    VOID* EndAddress;                                                       //0x30
    ULONG Flags;                                                            //0x38
    ULONGLONG Signature;                                                    //0x40
    struct _SLIST_HEADER PoolPageHeaders;                                   //0x50
    struct _SLIST_HEADER PoolTrackers;                                      //0x60
    ULONG CurrentPagedPoolAllocations;                                      //0x70
    ULONG CurrentNonPagedPoolAllocations;                                   //0x74
    ULONG PeakPagedPoolAllocations;                                         //0x78
    ULONG PeakNonPagedPoolAllocations;                                      //0x7c
    ULONGLONG PagedBytes;                                                   //0x80
    ULONGLONG NonPagedBytes;                                                //0x88
    ULONGLONG PeakPagedBytes;                                               //0x90
    ULONGLONG PeakNonPagedBytes;                                            //0x98
};
