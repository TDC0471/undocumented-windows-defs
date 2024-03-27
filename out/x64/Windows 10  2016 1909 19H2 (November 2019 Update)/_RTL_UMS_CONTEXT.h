#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_CONTEXT.h>
#include <_RTL_UMS_CONTEXT.h>

//0x520 bytes (sizeof)
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
            volatile ULONG Suspended:1;                                     //0x4f0
            volatile ULONG VolatileContext:1;                               //0x4f0
            volatile ULONG Terminated:1;                                    //0x4f0
            volatile ULONG DebugActive:1;                                   //0x4f0
            volatile ULONG RunningOnSelfThread:1;                           //0x4f0
            volatile ULONG DenyRunningOnSelfThread:1;                       //0x4f0
        };
        volatile LONG Flags;                                                //0x4f0
    };
    union
    {
        struct
        {
            volatile ULONGLONG KernelUpdateLock:2;                          //0x4f8
            volatile ULONGLONG PrimaryClientID:62;                          //0x4f8
        };
        volatile ULONGLONG ContextLock;                                     //0x4f8
    };
    struct _RTL_UMS_CONTEXT* PrimaryUmsContext;                             //0x500
    ULONG SwitchCount;                                                      //0x508
    ULONG KernelYieldCount;                                                 //0x50c
    ULONG MixedYieldCount;                                                  //0x510
    ULONG YieldCount;                                                       //0x514
};
/* Used in */
// _RTL_UMS_CONTEXT
// _UMS_CONTROL_BLOCK

