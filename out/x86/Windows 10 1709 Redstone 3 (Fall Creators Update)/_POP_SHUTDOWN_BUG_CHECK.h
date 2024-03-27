#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_EPROCESS.h>

//0x24 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    struct _ETHREAD* InitiatingThread;                                      //0x0
    struct _EPROCESS* InitiatingProcess;                                    //0x4
    VOID* ThreadId;                                                         //0x8
    VOID* ProcessId;                                                        //0xc
    ULONG Code;                                                             //0x10
    ULONG Parameter1;                                                       //0x14
    ULONG Parameter2;                                                       //0x18
    ULONG Parameter3;                                                       //0x1c
    ULONG Parameter4;                                                       //0x20
};
/* Used in */
// _POP_POWER_ACTION

