#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_POP_FX_WORK_ORDER.h>
#include <_POP_FX_DEVICE.h>
#include <_POP_FX_COMPONENT_FLAGS.h>
#include <_KEVENT.h>
#include <_POP_FX_IDLE_STATE.h>
#include <_POP_FX_PROVIDER.h>
#include <_POP_FX_DEPENDENT.h>
#include <_POP_FX_ACCOUNTING.h>
#include <_POP_FX_PERF_INFO.h>
#include <_POP_COMPONENT_POWER_PROFILE.h>

//0x1b8 bytes (sizeof)
struct _POP_FX_COMPONENT
{
    struct _GUID Id;                                                        //0x0
    ULONG Index;                                                            //0x10
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x18
    struct _POP_FX_DEVICE* Device;                                          //0x50
    unionvolatile _POP_FX_COMPONENT_FLAGS Flags;                            //0x58
    volatile LONG Resident;                                                 //0x60
    struct _KEVENT ActiveEvent;                                             //0x68
    ULONGLONG IdleLock;                                                     //0x80
    volatile LONG IdleConditionComplete;                                    //0x88
    volatile LONG IdleStateComplete;                                        //0x8c
    ULONGLONG IdleStamp;                                                    //0x90
    volatile ULONG CurrentIdleState;                                        //0x98
    ULONG IdleStateCount;                                                   //0x9c
    struct _POP_FX_IDLE_STATE* IdleStates;                                  //0xa0
    ULONG DeepestWakeableIdleState;                                         //0xa8
    ULONG ProviderCount;                                                    //0xac
    struct _POP_FX_PROVIDER* Providers;                                     //0xb0
    ULONG IdleProviderCount;                                                //0xb8
    ULONG DependentCount;                                                   //0xbc
    struct _POP_FX_DEPENDENT* Dependents;                                   //0xc0
    struct _POP_FX_ACCOUNTING Accounting;                                   //0xc8
    struct _POP_FX_PERF_INFO* Performance;                                  //0x1a8
    struct _POP_COMPONENT_POWER_PROFILE* PowerProfile;                      //0x1b0
};
/* Used in */
// _POP_FX_DEVICE
// _POP_FX_PERF_INFO

