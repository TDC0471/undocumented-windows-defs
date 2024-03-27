#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_KDPC.h>

//0x40 bytes (sizeof)
struct _KDPC
{
    union
    {
        ULONG TargetInfoAsUlong;                                            //0x0
        struct
        {
            UCHAR Type;                                                     //0x0
            UCHAR Importance;                                               //0x1
            volatile USHORT Number;                                         //0x2
        };
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;                                 //0x8
    ULONGLONG ProcessorHistory;                                             //0x10
    VOID (*DeferredRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x18
    VOID* DeferredContext;                                                  //0x20
    VOID* SystemArgument1;                                                  //0x28
    VOID* SystemArgument2;                                                  //0x30
    VOID* DpcData;                                                          //0x38
};
/* Used in */
// _DEVICE_OBJECT
// _ETIMER
// _ETW_STACK_TRACE_BLOCK
// _KDPC
// _KDPC_DATA
// _KENTROPY_TIMING_STATE
// _KPRCB
// _KSCHEDULING_GROUP
// _KTIMER
// _KTRANSACTION
// _LAZY_WRITER
// _MI_STANDBY_STATE
// _POP_FX_DEVICE
// _POP_FX_WORK_ORDER_WATCHDOG_INFO
// _POP_IRP_DATA
// _PROCESSOR_POWER_STATE
// _WAIT_CONTEXT_BLOCK
// _WHEAP_WORK_QUEUE
// _WMI_LOGGER_CONTEXT

