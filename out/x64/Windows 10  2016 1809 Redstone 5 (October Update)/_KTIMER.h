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
    ULONG Processor;                                                        //0x38
    ULONG Period;                                                           //0x3c
};
/* Used in */
// _ETIMER
// _EX_WORK_QUEUE_MANAGER
// _KPRCB
// _KTHREAD
// _KTIMER_TABLE
// _KTRANSACTION
// _LAZY_WRITER
// _MI_PARTITION_SEGMENTS
// _PNP_WATCHDOG
// _POP_FX_DEVICE
// _POP_FX_WORK_ORDER_WATCHDOG_INFO
// _POP_IRP_DATA
// _WMI_LOGGER_CONTEXT

