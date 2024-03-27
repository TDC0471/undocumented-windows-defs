#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_HIVE_WAIT_PACKET.h>

//0x18 bytes (sizeof)
struct _HIVE_WAIT_PACKET
{
    struct _KEVENT WakeEvent;                                               //0x0
    LONG Status;                                                            //0x10
    struct _HIVE_WAIT_PACKET* Next;                                         //0x14
};
/* Used in */
// _HIVE_WAIT_PACKET
// _HIVE_WRITE_WAIT_QUEUE

