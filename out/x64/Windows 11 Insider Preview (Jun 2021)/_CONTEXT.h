#pragma once
/* ------------------ */

#include <_XSAVE_FORMAT.h>
#include <_M128A.h>

//0x4d0 bytes (sizeof)
struct _CONTEXT
{
    ULONGLONG P1Home;                                                       //0x0
    ULONGLONG P2Home;                                                       //0x8
    ULONGLONG P3Home;                                                       //0x10
    ULONGLONG P4Home;                                                       //0x18
    ULONGLONG P5Home;                                                       //0x20
    ULONGLONG P6Home;                                                       //0x28
    ULONG ContextFlags;                                                     //0x30
    ULONG MxCsr;                                                            //0x34
    USHORT SegCs;                                                           //0x38
    USHORT SegDs;                                                           //0x3a
    USHORT SegEs;                                                           //0x3c
    USHORT SegFs;                                                           //0x3e
    USHORT SegGs;                                                           //0x40
    USHORT SegSs;                                                           //0x42
    ULONG EFlags;                                                           //0x44
    ULONGLONG Dr0;                                                          //0x48
    ULONGLONG Dr1;                                                          //0x50
    ULONGLONG Dr2;                                                          //0x58
    ULONGLONG Dr3;                                                          //0x60
    ULONGLONG Dr6;                                                          //0x68
    ULONGLONG Dr7;                                                          //0x70
    ULONGLONG Rax;                                                          //0x78
    ULONGLONG Rcx;                                                          //0x80
    ULONGLONG Rdx;                                                          //0x88
    ULONGLONG Rbx;                                                          //0x90
    ULONGLONG Rsp;                                                          //0x98
    ULONGLONG Rbp;                                                          //0xa0
    ULONGLONG Rsi;                                                          //0xa8
    ULONGLONG Rdi;                                                          //0xb0
    ULONGLONG R8;                                                           //0xb8
    ULONGLONG R9;                                                           //0xc0
    ULONGLONG R10;                                                          //0xc8
    ULONGLONG R11;                                                          //0xd0
    ULONGLONG R12;                                                          //0xd8
    ULONGLONG R13;                                                          //0xe0
    ULONGLONG R14;                                                          //0xe8
    ULONGLONG R15;                                                          //0xf0
    ULONGLONG Rip;                                                          //0xf8
    union
    {
        struct _XSAVE_FORMAT FltSave;                                       //0x100
        struct
        {
            struct _M128A Header[2];                                        //0x100
            struct _M128A Legacy[8];                                        //0x120
            struct _M128A Xmm0;                                             //0x1a0
            struct _M128A Xmm1;                                             //0x1b0
            struct _M128A Xmm2;                                             //0x1c0
            struct _M128A Xmm3;                                             //0x1d0
            struct _M128A Xmm4;                                             //0x1e0
            struct _M128A Xmm5;                                             //0x1f0
            struct _M128A Xmm6;                                             //0x200
            struct _M128A Xmm7;                                             //0x210
            struct _M128A Xmm8;                                             //0x220
            struct _M128A Xmm9;                                             //0x230
            struct _M128A Xmm10;                                            //0x240
            struct _M128A Xmm11;                                            //0x250
            struct _M128A Xmm12;                                            //0x260
            struct _M128A Xmm13;                                            //0x270
            struct _M128A Xmm14;                                            //0x280
            struct _M128A Xmm15;                                            //0x290
        };
    };
    struct _M128A VectorRegister[26];                                       //0x300
    ULONGLONG VectorControl;                                                //0x4a0
    ULONGLONG DebugControl;                                                 //0x4a8
    ULONGLONG LastBranchToRip;                                              //0x4b0
    ULONGLONG LastBranchFromRip;                                            //0x4b8
    ULONGLONG LastExceptionToRip;                                           //0x4c0
    ULONGLONG LastExceptionFromRip;                                         //0x4c8
};
/* Used in */
// _ETHREAD
// _EXCEPTION_POINTERS
// _EXCEPTION_REGISTRATION_RECORD
// _HEAP_FAILURE_INFORMATION
// _KPRCB
// _KPROCESSOR_STATE

