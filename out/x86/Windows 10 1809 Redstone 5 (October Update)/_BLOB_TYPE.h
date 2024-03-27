#pragma once
/* ------------------ */

#include <_BLOB_ID.h>
#include <_BLOB_COUNTERS.h>

//0x24 bytes (sizeof)
struct _BLOB_TYPE
{
    enum _BLOB_ID ResourceId;                                               //0x0
    ULONG PoolTag;                                                          //0x4
    ULONG LookasideIndex;                                                   //0x8
    ULONG Flags;                                                            //0xc
    struct _BLOB_COUNTERS* Counters;                                        //0x10
    VOID (*CleanupProcedure)(VOID* arg1);                                   //0x14
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x18
    LONG (*DestroyProcedure)(VOID* arg1);                                   //0x1c
    ULONG UsualSize;                                                        //0x20
};
