#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_EPROCESS.h>

//0x48 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    struct _ETHREAD* InitiatingThread;                                      //0x0
    struct _EPROCESS* InitiatingProcess;                                    //0x8
    VOID* ThreadId;                                                         //0x10
    VOID* ProcessId;                                                        //0x18
    ULONG Code;                                                             //0x20
    ULONGLONG Parameter1;                                                   //0x28
    ULONGLONG Parameter2;                                                   //0x30
    ULONGLONG Parameter3;                                                   //0x38
    ULONGLONG Parameter4;                                                   //0x40
};
/* Used in */
// _POP_POWER_ACTION

