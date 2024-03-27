#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY.h>

//0x50 bytes (sizeof)
struct _ALPC_COMPLETION_PACKET_LOOKASIDE
{
    ULONGLONG Lock;                                                         //0x0
    ULONG Size;                                                             //0x8
    ULONG ActiveCount;                                                      //0xc
    ULONG PendingNullCount;                                                 //0x10
    ULONG PendingCheckCompletionListCount;                                  //0x14
    ULONG PendingDelete;                                                    //0x18
    struct _SINGLE_LIST_ENTRY FreeListHead;                                 //0x20
    VOID* CompletionPort;                                                   //0x28
    VOID* CompletionKey;                                                    //0x30
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY Entry[1];                //0x38
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _ALPC_PORT

