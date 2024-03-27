#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_ULARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_KDPC.h>

//0x40 bytes (sizeof)
struct _KTIMER
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    union _ULARGE_INTEGER DueTime;                                          //0x18
    struct _LIST_ENTRY TimerListEntry;                                      //0x20
    struct _KDPC* Dpc;                                                      //0x30
    LONG Period;                                                            //0x38
};
/* Used in */
// _ETIMER
// _KPRCB
// _KTHREAD
// _KTRANSACTION
// _POP_THERMAL_ZONE
// _PROCESSOR_POWER_STATE

