#pragma once
/* ------------------ */

#include <_REQUEST_MAILBOX.h>
#include <_KREQUEST_PACKET.h>

//0x20 bytes (sizeof)
struct _REQUEST_MAILBOX
{
    struct _REQUEST_MAILBOX* Next;                                          //0x0
    ULONG RequestSummary;                                                   //0x4
    struct _KREQUEST_PACKET RequestPacket;                                  //0x8
    volatile LONG* NodeTargetCountAddr;                                     //0x18
    volatile LONG NodeTargetCount;                                          //0x1c
};
/* Used in */
// _KPRCB
// _REQUEST_MAILBOX

