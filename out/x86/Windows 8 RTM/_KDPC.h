#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>

//0x20 bytes (sizeof)
struct _KDPC
{
    UCHAR Type;                                                             //0x0
    UCHAR Importance;                                                       //0x1
    volatile USHORT Number;                                                 //0x2
    struct _LIST_ENTRY DpcListEntry;                                        //0x4
    VOID (*DeferredRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0xc
    VOID* DeferredContext;                                                  //0x10
    VOID* SystemArgument1;                                                  //0x14
    VOID* SystemArgument2;                                                  //0x18
    VOID* DpcData;                                                          //0x1c
};
/* Used in */
// _DEVICE_OBJECT
// _ETIMER
// _KDPC
// _KENTROPY_TIMING_STATE
// _KPRCB
// _KSCHEDULING_GROUP
// _KTIMER
// _KTRANSACTION
// _LAZY_WRITER
// _POP_FX_DEVICE
// _POP_IRP_DATA
// _POP_THERMAL_ZONE
// _PROCESSOR_POWER_STATE
// _WAIT_CONTEXT_BLOCK
// _WHEAP_WORK_QUEUE
// _WMI_LOGGER_CONTEXT

