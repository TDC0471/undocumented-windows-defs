#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_HANDLE_TABLE_ENTRY.h>

//0x40 bytes (sizeof)
struct _HANDLE_TABLE_FREE_LIST
{
    struct _EX_PUSH_LOCK FreeListLock;                                      //0x0
    union _HANDLE_TABLE_ENTRY* FirstFreeHandleEntry;                        //0x8
    union _HANDLE_TABLE_ENTRY* LastFreeHandleEntry;                         //0x10
    LONG HandleCount;                                                       //0x18
    ULONG HighWaterMark;                                                    //0x1c
};
/* Used in */
// _HANDLE_TABLE

