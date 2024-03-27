#pragma once
/* ------------------ */

#include <_REQUEST_MAILBOX.h>
#include <_KREQUEST_PACKET.h>

//0x40 bytes (sizeof)
struct _REQUEST_MAILBOX
{
    struct _REQUEST_MAILBOX* Next;                                          //0x0
    LONGLONG RequestSummary;                                                //0x8
    struct _KREQUEST_PACKET RequestPacket;                                  //0x10
};
/* Used in */
// _KPRCB
// _REQUEST_MAILBOX

