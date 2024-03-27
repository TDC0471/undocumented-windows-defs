#pragma once
/* ------------------ */

#include <_FLOATING_SAVE_AREA.h>

//0x2cc bytes (sizeof)
struct _CONTEXT
{
    ULONG ContextFlags;                                                     //0x0
    ULONG Dr0;                                                              //0x4
    ULONG Dr1;                                                              //0x8
    ULONG Dr2;                                                              //0xc
    ULONG Dr3;                                                              //0x10
    ULONG Dr6;                                                              //0x14
    ULONG Dr7;                                                              //0x18
    struct _FLOATING_SAVE_AREA FloatSave;                                   //0x1c
    ULONG SegGs;                                                            //0x8c
    ULONG SegFs;                                                            //0x90
    ULONG SegEs;                                                            //0x94
    ULONG SegDs;                                                            //0x98
    ULONG Edi;                                                              //0x9c
    ULONG Esi;                                                              //0xa0
    ULONG Ebx;                                                              //0xa4
    ULONG Edx;                                                              //0xa8
    ULONG Ecx;                                                              //0xac
    ULONG Eax;                                                              //0xb0
    ULONG Ebp;                                                              //0xb4
    ULONG Eip;                                                              //0xb8
    ULONG SegCs;                                                            //0xbc
    ULONG EFlags;                                                           //0xc0
    ULONG Esp;                                                              //0xc4
    ULONG SegSs;                                                            //0xc8
    UCHAR ExtendedRegisters[512];                                           //0xcc
};
/* Used in */
// _EXCEPTION_POINTERS
// _EXCEPTION_REGISTRATION_RECORD
// _HEAP_FAILURE_INFORMATION
// _KPRCB
// _KPROCESSOR_STATE

