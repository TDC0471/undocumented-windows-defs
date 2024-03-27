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

//0xb8 bytes (sizeof)
struct _POP_FX_COMPONENT
{
    struct _GUID Id;                                                        //0x0
    ULONG Index;                                                            //0x10
    struct _POP_FX_WORK_ORDER WorkOrder;                                    //0x18
    struct _POP_FX_DEVICE* Device;                                          //0x40
    unionvolatile _POP_FX_COMPONENT_FLAGS Flags;                            //0x48
    volatile LONG Resident;                                                 //0x50
    struct _KEVENT ActiveEvent;                                             //0x58
    ULONGLONG IdleLock;                                                     //0x70
    volatile LONG IdleConditionComplete;                                    //0x78
    volatile LONG IdleStateComplete;                                        //0x7c
    ULONGLONG IdleStamp;                                                    //0x80
    volatile ULONG CurrentIdleState;                                        //0x88
    ULONG IdleStateCount;                                                   //0x8c
    struct _POP_FX_IDLE_STATE* IdleStates;                                  //0x90
    ULONG DeepestWakeableIdleState;                                         //0x98
    ULONG ProviderCount;                                                    //0x9c
    struct _POP_FX_PROVIDER* Providers;                                     //0xa0
    ULONG IdleProviderCount;                                                //0xa8
    ULONG DependentCount;                                                   //0xac
    struct _POP_FX_DEPENDENT* Dependents;                                   //0xb0
};
/* Used in */
// _POP_FX_DEVICE

