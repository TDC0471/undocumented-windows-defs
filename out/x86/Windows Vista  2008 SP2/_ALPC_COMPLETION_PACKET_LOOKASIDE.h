#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.h>

//0x24 bytes (sizeof)
struct _ALPC_COMPLETION_PACKET_LOOKASIDE
{
    ULONG Lock;                                                             //0x0
    ULONG Size;                                                             //0x4
    ULONG ActiveCount;                                                      //0x8
    ULONG PendingNullCount;                                                 //0xc
    ULONG PendingCheckCompletionListCount;                                  //0x10
    ULONG PendingDelete;                                                    //0x14
    struct _SINGLE_LIST_ENTRY FreeListHead;                                 //0x18
    VOID* CompletionPort;                                                   //0x1c
    VOID* CompletionKey;                                                    //0x20
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[0];                //0x24
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _ALPC_PORT

