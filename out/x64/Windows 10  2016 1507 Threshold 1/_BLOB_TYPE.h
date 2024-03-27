#pragma once
/* ------------------ */

#include <_BLOB_ID.h>
#include <_BLOB_COUNTERS.h>

//0x30 bytes (sizeof)
struct _BLOB_TYPE
{
    enum _BLOB_ID ResourceId;                                               //0x0
    ULONG PoolTag;                                                          //0x4
    ULONG LookasideIndex;                                                   //0x8
    ULONG Flags;                                                            //0xc
    struct _BLOB_COUNTERS* Counters;                                        //0x10
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x18
    LONG (*DestroyProcedure)(VOID* arg1);                                   //0x20
    ULONGLONG UsualSize;                                                    //0x28
};
