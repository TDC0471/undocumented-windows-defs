#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _PROC_FEEDBACK_COUNTER
{
    union
    {
        VOID (*InstantaneousRead)(ULONGLONG arg1, ULONG* arg2);             //0x0
        VOID (*DifferentialRead)(ULONGLONG arg1, UCHAR arg2, ULONGLONG* arg3, ULONGLONG* arg4); //0x0
    };
    ULONGLONG LastActualCount;                                              //0x8
    ULONGLONG LastReferenceCount;                                           //0x10
    ULONG CachedValue;                                                      //0x18
    UCHAR Affinitized;                                                      //0x20
    UCHAR Differential;                                                     //0x21
    UCHAR DisableInterrupts;                                                //0x22
    ULONGLONG Context;                                                      //0x28
};
/* Used in */
// _PROC_FEEDBACK

