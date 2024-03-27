#pragma once
/* ------------------ */

#include <_POP_FX_COMPONENT.h>
#include <_KEVENT.h>
#include <_POP_FX_PERF_FLAGS.h>
#include <_PO_FX_PERF_STATE_CHANGE.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_POP_FX_PERF_SET.h>

//0xa0 bytes (sizeof)
struct _POP_FX_PERF_INFO
{
    struct _POP_FX_COMPONENT* Component;                                    //0x0
    struct _KEVENT CompletedEvent;                                          //0x8
    VOID (*ComponentPerfState)(VOID* arg1, ULONG arg2, UCHAR arg3, VOID* arg4); //0x20
    unionvolatile _POP_FX_PERF_FLAGS Flags;                                 //0x28
    struct _PO_FX_PERF_STATE_CHANGE* LastChange;                            //0x30
    ULONG LastChangeCount;                                                  //0x38
    ULONGLONG LastChangeStamp;                                              //0x40
    UCHAR LastChangeNominal;                                                //0x48
    UCHAR PepRegistered;                                                    //0x49
    UCHAR QueryOnIdleStates;                                                //0x4a
    VOID* volatile RequestDriverContext;                                    //0x50
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x58
    ULONG SetsCount;                                                        //0x90
    struct _POP_FX_PERF_SET* Sets;                                          //0x98
};
/* Used in */
// _POP_FX_COMPONENT

