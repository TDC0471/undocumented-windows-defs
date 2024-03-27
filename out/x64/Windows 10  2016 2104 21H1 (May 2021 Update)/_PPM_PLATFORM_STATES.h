#pragma once
/* ------------------ */

#include <_PROCESSOR_PLATFORM_STATE_RESIDENCIES.h>
#include <_PLATFORM_IDLE_ACCOUNTING.h>
#include <_PPM_PLATFORM_STATE.h>

//0x1c0 bytes (sizeof)
struct _PPM_PLATFORM_STATES
{
    ULONG StateCount;                                                       //0x0
    ULONG InterfaceVersion;                                                 //0x4
    ULONG ProcessorCount;                                                   //0x8
    UCHAR CoordinatedInterface;                                             //0xc
    ULONG (*IdleTest)(VOID* arg1, ULONG arg2, ULONG arg3);                  //0x10
    LONG (*IdlePreExecute)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x18
    VOID (*IdleComplete)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG* arg5); //0x20
    LONG (*QueryPlatformStateResidency)(VOID* arg1, struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES* arg2); //0x28
    struct _PLATFORM_IDLE_ACCOUNTING* Accounting;                           //0x30
    UCHAR DeepSleepEnabled;                                                 //0x38
    struct _PPM_PLATFORM_STATE State[1];                                    //0x40
};
