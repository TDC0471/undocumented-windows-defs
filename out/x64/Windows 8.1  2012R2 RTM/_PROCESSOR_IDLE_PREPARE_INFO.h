#pragma once
/* ------------------ */

#include <_PROCESSOR_IDLE_CONSTRAINTS.h>
#include <_PROCESSOR_IDLE_DEPENDENCY.h>

//0x68 bytes (sizeof)
struct _PROCESSOR_IDLE_PREPARE_INFO
{
    VOID* Context;                                                          //0x0
    struct _PROCESSOR_IDLE_CONSTRAINTS Constraints;                         //0x8
    ULONG DependencyCount;                                                  //0x48
    ULONG DependencyUsed;                                                   //0x4c
    struct _PROCESSOR_IDLE_DEPENDENCY* DependencyArray;                     //0x50
    ULONG PlatformIdleStateIndex;                                           //0x58
    ULONG ProcessorIdleStateIndex;                                          //0x5c
    ULONG IdleSelectFailureMask;                                            //0x60
};
/* Used in */
// _PPM_IDLE_STATES

