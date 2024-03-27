#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _HEAP_VS_SUBSEGMENT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG CommitBitmap;                                                 //0x10
    ULONGLONG CommitLock;                                                   //0x18
    USHORT Size;                                                            //0x20
    USHORT Signature:15;                                                    //0x22
    USHORT FullCommit:1;                                                    //0x22
};
