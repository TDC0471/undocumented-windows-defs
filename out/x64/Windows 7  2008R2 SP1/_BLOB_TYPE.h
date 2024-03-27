#pragma once
/* ------------------ */

#include <_BLOB_ID.h>

//0x38 bytes (sizeof)
struct _BLOB_TYPE
{
    enum _BLOB_ID ResourceId;                                               //0x0
    ULONG PoolTag;                                                          //0x4
    ULONG Flags;                                                            //0x8
    ULONG CreatedObjects;                                                   //0xc
    ULONG DeletedObjects;                                                   //0x10
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x18
    LONG (*DestroyProcedure)(VOID* arg1);                                   //0x20
    ULONGLONG UsualSize;                                                    //0x28
    ULONG LookasideIndex;                                                   //0x30
};
