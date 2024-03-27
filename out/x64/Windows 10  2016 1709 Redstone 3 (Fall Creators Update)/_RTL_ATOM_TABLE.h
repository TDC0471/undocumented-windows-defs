#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_HANDLE_TABLE.h>
#include <_RTL_ATOM_TABLE_ENTRY.h>

//0x28 bytes (sizeof)
struct _RTL_ATOM_TABLE
{
    ULONG Signature;                                                        //0x0
    volatile LONG ReferenceCount;                                           //0x4
    struct _EX_PUSH_LOCK PushLock;                                          //0x8
    struct _HANDLE_TABLE* ExHandleTable;                                    //0x10
    ULONG Flags;                                                            //0x18
    ULONG NumberOfBuckets;                                                  //0x1c
    struct _RTL_ATOM_TABLE_ENTRY* Buckets[1];                               //0x20
};
