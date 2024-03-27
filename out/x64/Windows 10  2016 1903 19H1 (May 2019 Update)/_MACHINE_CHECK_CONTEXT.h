#pragma once
/* ------------------ */

#include <_MACHINE_FRAME.h>

//0x50 bytes (sizeof)
struct _MACHINE_CHECK_CONTEXT
{
    struct _MACHINE_FRAME MachineFrame;                                     //0x0
    ULONGLONG Rax;                                                          //0x28
    ULONGLONG Rcx;                                                          //0x30
    ULONGLONG Rdx;                                                          //0x38
    ULONGLONG GsBase;                                                       //0x40
    ULONGLONG Cr3;                                                          //0x48
};
/* Used in */
// _KPRCB

