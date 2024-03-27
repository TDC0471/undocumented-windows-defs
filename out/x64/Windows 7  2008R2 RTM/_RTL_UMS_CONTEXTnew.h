#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_CONTEXT.h>
#include <_GROUP_AFFINITY.h>
#include <_RTL_UMS_CONTEXT.h>

//0x540 bytes (sizeof)
struct _RTL_UMS_CONTEXT
{
    struct _SINGLE_LIST_ENTRY Link;                                         //0x0
    struct _CONTEXT Context;                                                //0x10
    VOID* Teb;                                                              //0x4e0
    VOID* UserContext;                                                      //0x4e8
    union
    {
        struct
        {
            volatile ULONG ScheduledThread:1;                               //0x4f0
            volatile ULONG HasQuantumReq:1;                                 //0x4f0
            volatile ULONG HasAffinityReq:1;                                //0x4f0
            volatile ULONG HasPriorityReq:1;                                //0x4f0
            volatile ULONG Suspended:1;                                     //0x4f0
            volatile ULONG VolatileContext:1;                               //0x4f0
            volatile ULONG Terminated:1;                                    //0x4f0
            volatile ULONG DebugActive:1;                                   //0x4f0
            volatile ULONG RunningOnSelfThread:1;                           //0x4f0
            volatile ULONG DenyRunningOnSelfThread:1;                       //0x4f0
            volatile ULONG ReservedFlags:22;                                //0x4f0
        };
        volatile LONG Flags;                                                //0x4f0
    };
    union
    {
        struct
        {
            volatile ULONGLONG KernelUpdateLock:1;                          //0x4f8
            volatile ULONGLONG Reserved:1;                                  //0x4f8
            volatile ULONGLONG PrimaryClientID:62;                          //0x4f8
        };
        volatile ULONGLONG ContextLock;                                     //0x4f8
    };
    ULONGLONG QuantumValue;                                                 //0x500
    struct _GROUP_AFFINITY AffinityMask;                                    //0x508
    LONG Priority;                                                          //0x518
    struct _RTL_UMS_CONTEXT* PrimaryUmsContext;                             //0x520
    ULONG SwitchCount;                                                      //0x528
    ULONG KernelYieldCount;                                                 //0x52c
    ULONG MixedYieldCount;                                                  //0x530
    ULONG YieldCount;                                                       //0x534
};
/* Used in */
// _RTL_UMS_CONTEXT
// _UMS_CONTROL_BLOCK

