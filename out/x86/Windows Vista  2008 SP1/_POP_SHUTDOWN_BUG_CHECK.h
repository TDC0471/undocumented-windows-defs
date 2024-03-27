#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    VOID* ThreadHandle;                                                     //0x0
    VOID* ThreadId;                                                         //0x4
    VOID* ProcessId;                                                        //0x8
    ULONG Code;                                                             //0xc
    ULONG Parameter1;                                                       //0x10
    ULONG Parameter2;                                                       //0x14
    ULONG Parameter3;                                                       //0x18
    ULONG Parameter4;                                                       //0x1c
};
/* Used in */
// _POP_POWER_ACTION

