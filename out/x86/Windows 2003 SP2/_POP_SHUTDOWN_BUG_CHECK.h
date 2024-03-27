#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _POP_SHUTDOWN_BUG_CHECK
{
    ULONG Code;                                                             //0x0
    ULONG Parameter1;                                                       //0x4
    ULONG Parameter2;                                                       //0x8
    ULONG Parameter3;                                                       //0xc
    ULONG Parameter4;                                                       //0x10
};
/* Used in */
// _POP_POWER_ACTION

