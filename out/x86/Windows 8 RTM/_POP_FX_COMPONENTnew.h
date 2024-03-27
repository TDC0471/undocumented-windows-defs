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

//0x88 bytes (sizeof)
struct _POP_FX_COMPONENT
{
    struct _GUID Id;                                                        //0x0
    ULONG Index;                                                            //0x10
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x14
    struct _POP_FX_DEVICE* Device;                                          //0x28
    unionvolatile _POP_FX_COMPONENT_FLAGS Flags;                            //0x2c
    volatile LONG Resident;                                                 //0x34
    struct _KEVENT ActiveEvent;                                             //0x38
    ULONG IdleLock;                                                         //0x48
    volatile LONG IdleConditionComplete;                                    //0x4c
    volatile LONG IdleStateComplete;                                        //0x50
    ULONGLONG IdleStamp;                                                    //0x58
    volatile ULONG CurrentIdleState;                                        //0x60
    ULONG IdleStateCount;                                                   //0x64
    struct _POP_FX_IDLE_STATE* IdleStates;                                  //0x68
    ULONG DeepestWakeableIdleState;                                         //0x6c
    ULONG ProviderCount;                                                    //0x70
    struct _POP_FX_PROVIDER* Providers;                                     //0x74
    ULONG IdleProviderCount;                                                //0x78
    ULONG DependentCount;                                                   //0x7c
    struct _POP_FX_DEPENDENT* Dependents;                                   //0x80
};
/* Used in */
// _POP_FX_DEVICE

