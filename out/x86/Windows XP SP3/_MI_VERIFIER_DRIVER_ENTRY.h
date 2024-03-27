#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_VI_POOL_ENTRY.h>

//0x60 bytes (sizeof)
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
    ULONG Reserved;                                                         //0x28
    ULONG VerifierPoolLock;                                                 //0x2c
    struct _VI_POOL_ENTRY* PoolHash;                                        //0x30
    ULONG PoolHashSize;                                                     //0x34
    ULONG PoolHashFree;                                                     //0x38
    ULONG PoolHashReserved;                                                 //0x3c
    ULONG CurrentPagedPoolAllocations;                                      //0x40
    ULONG CurrentNonPagedPoolAllocations;                                   //0x44
    ULONG PeakPagedPoolAllocations;                                         //0x48
    ULONG PeakNonPagedPoolAllocations;                                      //0x4c
    ULONG PagedBytes;                                                       //0x50
    ULONG NonPagedBytes;                                                    //0x54
    ULONG PeakPagedBytes;                                                   //0x58
    ULONG PeakNonPagedBytes;                                                //0x5c
};
/* Used in */
// _MI_VERIFIER_POOL_HEADER

