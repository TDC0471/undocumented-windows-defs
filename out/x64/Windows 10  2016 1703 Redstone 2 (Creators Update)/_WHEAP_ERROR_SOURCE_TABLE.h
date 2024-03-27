#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x30 bytes (sizeof)
struct _WHEAP_ERROR_SOURCE_TABLE
{
    ULONG Signature;                                                        //0x0
    LONG Count;                                                             //0x4
    struct _LIST_ENTRY Items;                                               //0x8
    struct _KEVENT InsertLock;                                              //0x18
};
/* Used in */
// _WHEAP_INFO_BLOCK

