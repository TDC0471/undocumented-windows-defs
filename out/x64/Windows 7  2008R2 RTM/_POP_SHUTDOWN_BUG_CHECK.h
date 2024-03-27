#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    VOID* ThreadHandle;                                                     //0x0
    VOID* ThreadId;                                                         //0x8
    VOID* ProcessId;                                                        //0x10
    ULONG Code;                                                             //0x18
    ULONGLONG Parameter1;                                                   //0x20
    ULONGLONG Parameter2;                                                   //0x28
    ULONGLONG Parameter3;                                                   //0x30
    ULONGLONG Parameter4;                                                   //0x38
};
/* Used in */
// _POP_POWER_ACTION

