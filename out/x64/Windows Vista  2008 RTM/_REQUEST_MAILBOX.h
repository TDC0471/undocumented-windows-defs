#pragma once
/* ------------------ */

#include <_KREQUEST_PACKET.h>

//0x40 bytes (sizeof)
struct _REQUEST_MAILBOX
{
    LONGLONG RequestSummary;                                                //0x0
    union
    {
        struct _KREQUEST_PACKET RequestPacket;                              //0x8
        VOID* Virtual[7];                                                   //0x8
    };
};
/* Used in */
// _KPRCB

