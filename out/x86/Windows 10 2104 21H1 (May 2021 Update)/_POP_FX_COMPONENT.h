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

//0x170 bytes (sizeof)
struct _POP_FX_COMPONENT
{
    struct _GUID Id;                                                        //0x0
    ULONG Index;                                                            //0x10
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x14
    struct _POP_FX_DEVICE* Device;                                          //0x30
    unionvolatile _POP_FX_COMPONENT_FLAGS Flags;                            //0x34
    volatile LONG Resident;                                                 //0x3c
    struct _KEVENT ActiveEvent;                                             //0x40
    ULONG IdleLock;                                                         //0x50
    volatile LONG IdleConditionComplete;                                    //0x54
    volatile LONG IdleStateComplete;                                        //0x58
    ULONGLONG IdleStamp;                                                    //0x60
    volatile ULONG CurrentIdleState;                                        //0x68
    ULONG IdleStateCount;                                                   //0x6c
    struct _POP_FX_IDLE_STATE* IdleStates;                                  //0x70
    ULONG DeepestWakeableIdleState;                                         //0x74
    ULONG ProviderCount;                                                    //0x78
    struct _POP_FX_PROVIDER* Providers;                                     //0x7c
    ULONG IdleProviderCount;                                                //0x80
    ULONG DependentCount;                                                   //0x84
    struct _POP_FX_DEPENDENT* Dependents;                                   //0x88
    struct _POP_FX_ACCOUNTING Accounting;                                   //0x90
    struct _POP_FX_PERF_INFO* Performance;                                  //0x168
    struct _POP_COMPONENT_POWER_PROFILE* PowerProfile;                      //0x16c
};
/* Used in */
// _POP_FX_DEVICE
// _POP_FX_PERF_INFO

