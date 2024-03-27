#pragma once
/* ------------------ */

#include <_POP_FX_COMPONENT.h>
#include <_KEVENT.h>
#include <_POP_FX_PERF_FLAGS.h>
#include <_PO_FX_PERF_STATE_CHANGE.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_POP_FX_PERF_SET.h>

//0x60 bytes (sizeof)
struct _POP_FX_PERF_INFO
{
    struct _POP_FX_COMPONENT* Component;                                    //0x0
    struct _KEVENT CompletedEvent;                                          //0x4
    VOID (*ComponentPerfState)(VOID* arg1, ULONG arg2, UCHAR arg3, VOID* arg4); //0x14
    unionvolatile _POP_FX_PERF_FLAGS Flags;                                 //0x18
    struct _PO_FX_PERF_STATE_CHANGE* LastChange;                            //0x1c
    ULONG LastChangeCount;                                                  //0x20
    ULONGLONG LastChangeStamp;                                              //0x28
    UCHAR LastChangeNominal;                                                //0x30
    UCHAR PepRegistered;                                                    //0x31
    UCHAR QueryOnIdleStates;                                                //0x32
    VOID* volatile RequestDriverContext;                                    //0x34
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x38
    ULONG SetsCount;                                                        //0x54
    struct _POP_FX_PERF_SET* Sets;                                          //0x58
};
/* Used in */
// _POP_FX_COMPONENT

