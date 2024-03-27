#pragma once
/* ------------------ */

#include <_REQUEST_MAILBOX.h>
#include <_KREQUEST_PACKET.h>

//0x40 bytes (sizeof)
struct _REQUEST_MAILBOX
{
    struct _REQUEST_MAILBOX* Next;                                          //0x0
    ULONGLONG RequestSummary;                                               //0x8
    struct _KREQUEST_PACKET RequestPacket;                                  //0x10
    volatile LONG* SubNodeTargetCountAddr;                                  //0x30
    volatile LONG SubNodeTargetCount;                                       //0x38
};
/* Used in */
// _KPRCB
// _REQUEST_MAILBOX

