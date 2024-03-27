#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_MINI_COMPLETION_PACKET_USER.h>

//0x28 bytes (sizeof)
struct _IO_MINI_COMPLETION_PACKET_USER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG PacketType;                                                       //0x8
    VOID* KeyContext;                                                       //0xc
    VOID* ApcContext;                                                       //0x10
    LONG IoStatus;                                                          //0x14
    ULONG IoStatusInformation;                                              //0x18
    VOID (*MiniPacketCallback)(struct _IO_MINI_COMPLETION_PACKET_USER* arg1, VOID* arg2); //0x1c
    VOID* Context;                                                          //0x20
    UCHAR Allocated;                                                        //0x24
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _IO_MINI_COMPLETION_PACKET_USER

