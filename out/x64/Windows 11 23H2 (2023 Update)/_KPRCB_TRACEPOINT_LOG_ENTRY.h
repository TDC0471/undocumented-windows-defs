#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _KPRCB_TRACEPOINT_LOG_ENTRY
{
    ULONGLONG OldPc;                                                        //0x0
    ULONGLONG OldSp;                                                        //0x8
    ULONGLONG NewPc;                                                        //0x10
    ULONGLONG NewSp;                                                        //0x18
};
/* Used in */
// _KPRCB_TRACEPOINT_LOG

