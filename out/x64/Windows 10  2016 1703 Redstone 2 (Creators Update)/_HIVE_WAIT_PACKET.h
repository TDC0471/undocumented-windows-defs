#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_HIVE_WAIT_PACKET.h>

//0x28 bytes (sizeof)
struct _HIVE_WAIT_PACKET
{
    struct _KEVENT WakeEvent;                                               //0x0
    LONG Status;                                                            //0x18
    struct _HIVE_WAIT_PACKET* Next;                                         //0x20
};
/* Used in */
// _HIVE_WAIT_PACKET
// _HIVE_WRITE_WAIT_QUEUE

