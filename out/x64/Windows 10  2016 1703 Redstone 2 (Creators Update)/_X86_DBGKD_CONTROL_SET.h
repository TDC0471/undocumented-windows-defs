#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _X86_DBGKD_CONTROL_SET
{
    ULONG TraceFlag;                                                        //0x0
    ULONG Dr7;                                                              //0x4
    ULONG CurrentSymbolStart;                                               //0x8
    ULONG CurrentSymbolEnd;                                                 //0xc
};
/* Used in */
// _DBGKD_ANY_CONTROL_SET

