#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_MINI_COMPLETION_PACKET_USER.h>

//0x50 bytes (sizeof)
struct _IO_MINI_COMPLETION_PACKET_USER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG PacketType;                                                       //0x10
    VOID* KeyContext;                                                       //0x18
    VOID* ApcContext;                                                       //0x20
    LONG IoStatus;                                                          //0x28
    ULONGLONG IoStatusInformation;                                          //0x30
    VOID (*MiniPacketCallback)(struct _IO_MINI_COMPLETION_PACKET_USER* arg1, VOID* arg2); //0x38
    VOID* Context;                                                          //0x40
    UCHAR Allocated;                                                        //0x48
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _IO_MINI_COMPLETION_PACKET_USER

