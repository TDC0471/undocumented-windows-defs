#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _HEAP_VS_SUBSEGMENT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG CommitBitmap;                                                 //0x8
    ULONG CommitLock;                                                       //0x10
    USHORT Size;                                                            //0x14
    USHORT Signature:15;                                                    //0x16
    USHORT FullCommit:1;                                                    //0x16
};
