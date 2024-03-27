#pragma once
/* ------------------ */

#include <_BLOB_ID.h>

//0x24 bytes (sizeof)
struct _BLOB_TYPE
{
    enum _BLOB_ID ResourceId;                                               //0x0
    ULONG PoolTag;                                                          //0x4
    ULONG Flags;                                                            //0x8
    ULONG CreatedObjects;                                                   //0xc
    ULONG DeletedObjects;                                                   //0x10
    VOID (*DeleteProcedure)(VOID* arg1);                                    //0x14
    LONG (*DestroyProcedure)(VOID* arg1);                                   //0x18
    ULONG UsualSize;                                                        //0x1c
    ULONG LookasideIndex;                                                   //0x20
};
