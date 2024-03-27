#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_HIVE_WAIT_PACKET.h>

//0x1c bytes (sizeof)
struct _HIVE_WAIT_PACKET
{
    struct _KEVENT WakeEvent;                                               //0x0
    LONG Status;                                                            //0x10
    struct _HIVE_WAIT_PACKET* Next;                                         //0x14
    UCHAR PrimaryFileWritten;                                               //0x18
};
/* Used in */
// _CMHIVE
// _HIVE_WAIT_PACKET

