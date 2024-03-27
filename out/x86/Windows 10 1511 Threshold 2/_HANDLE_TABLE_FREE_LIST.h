#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_HANDLE_TABLE_ENTRY.h>

//0x34 bytes (sizeof)
struct _HANDLE_TABLE_FREE_LIST
{
    struct _EX_PUSH_LOCK FreeListLock;                                      //0x0
    union _HANDLE_TABLE_ENTRY* FirstFreeHandleEntry;                        //0x4
    union _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;                         //0x8
    LONG HandleCount;                                                       //0xc
    ULONG HighWaterMark;                                                    //0x10
    ULONG Reserved[8];                                                      //0x14
};
/* Used in */
// _HANDLE_TABLE

