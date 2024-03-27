#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KDPC.h>

//0x40 bytes (sizeof)
struct _KDPC
{
    UCHAR Type;                                                             //0x0
    UCHAR Importance;                                                       //0x1
    UCHAR Number;                                                           //0x2
    UCHAR Expedite;                                                         //0x3
    struct _LIST_ENTRY DpcListEntry;                                        //0x8
    VOID (*DeferredRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x18
    VOID* DeferredContext;                                                  //0x20
    VOID* SystemArgument1;                                                  //0x28
    VOID* SystemArgument2;                                                  //0x30
    VOID* DpcData;                                                          //0x38
};
/* Used in */
// _DEVICE_OBJECT
// _ETIMER
// _KDPC
// _KPRCB
// _KTIMER
// _POP_THERMAL_ZONE
// _PROCESSOR_POWER_STATE
// _WAIT_CONTEXT_BLOCK

