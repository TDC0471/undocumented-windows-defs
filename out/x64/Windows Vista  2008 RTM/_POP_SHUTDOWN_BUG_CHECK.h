#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    ULONG Code;                                                             //0x0
    ULONGLONG Parameter1;                                                   //0x8
    ULONGLONG Parameter2;                                                   //0x10
    ULONGLONG Parameter3;                                                   //0x18
    ULONGLONG Parameter4;                                                   //0x20
};
/* Used in */
// _POP_POWER_ACTION

