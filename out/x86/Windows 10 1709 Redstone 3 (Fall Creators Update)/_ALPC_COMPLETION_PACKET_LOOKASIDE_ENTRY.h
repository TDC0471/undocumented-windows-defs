#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_IO_MINI_COMPLETION_PACKET_USER.h>
#include <_ALPC_COMPLETION_PACKET_LOOKASIDE.h>

//0xc bytes (sizeof)
struct _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
{
    struct _SINGLE_LIST_ENTRY ListEntry;                                    //0x0
    struct _IO_MINI_COMPLETION_PACKET_USER* Packet;                         //0x4
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE* Lookaside;                    //0x8
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE

