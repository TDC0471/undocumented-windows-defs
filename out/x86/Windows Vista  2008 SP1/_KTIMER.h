#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_ULARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_KDPC.h>

//0x28 bytes (sizeof)
struct _KTIMER
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    union _ULARGE_INTEGER DueTime;                                          //0x10
    struct _LIST_ENTRY TimerListEntry;                                      //0x18
    struct _KDPC* Dpc;                                                      //0x20
    LONG Period;                                                            //0x24
};
/* Used in */
// _ETIMER
// _KPRCB
// _KTHREAD
// _KTRANSACTION
// _LAZY_WRITER
// _POP_THERMAL_ZONE
// _PROCESSOR_POWER_STATE

