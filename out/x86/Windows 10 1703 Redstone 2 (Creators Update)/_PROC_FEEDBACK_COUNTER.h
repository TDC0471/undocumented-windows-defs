#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _PROC_FEEDBACK_COUNTER
{
    union
    {
        VOID (*InstantaneousRead)(ULONG arg1, ULONG* arg2);                 //0x0
        VOID (*DifferentialRead)(ULONG arg1, UCHAR arg2, ULONGLONG* arg3, ULONGLONG* arg4); //0x0
    };
    ULONGLONG LastActualCount;                                              //0x8
    ULONGLONG LastReferenceCount;                                           //0x10
    ULONG CachedValue;                                                      //0x18
    UCHAR Affinitized;                                                      //0x20
    UCHAR Differential;                                                     //0x21
    UCHAR Scaling;                                                          //0x22
    ULONG Context;                                                          //0x24
};
/* Used in */
// _PROC_FEEDBACK

