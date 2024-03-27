#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_HIVE_WAIT_PACKET.h>

//0x18 bytes (sizeof)
struct _HIVE_WRITE_WAIT_QUEUE
{
    struct _ETHREAD* ActiveThread;                                          //0x0
    struct _HIVE_WAIT_PACKET* WaitList;                                     //0x8
    volatile ULONG OwnerBoosted;                                            //0x10
};
/* Used in */
// _CMHIVE

