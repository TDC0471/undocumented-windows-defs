#pragma once
/* ------------------ */

#include <_M128A.h>

//0x140 bytes (sizeof)
struct _KEXCEPTION_FRAME
{
    ULONGLONG P1Home;                                                       //0x0
    ULONGLONG P2Home;                                                       //0x8
    ULONGLONG P3Home;                                                       //0x10
    ULONGLONG P4Home;                                                       //0x18
    ULONGLONG P5;                                                           //0x20
    ULONGLONG Spare1;                                                       //0x28
    struct _M128A Xmm6;                                                     //0x30
    struct _M128A Xmm7;                                                     //0x40
    struct _M128A Xmm8;                                                     //0x50
    struct _M128A Xmm9;                                                     //0x60
    struct _M128A Xmm10;                                                    //0x70
    struct _M128A Xmm11;                                                    //0x80
    struct _M128A Xmm12;                                                    //0x90
    struct _M128A Xmm13;                                                    //0xa0
    struct _M128A Xmm14;                                                    //0xb0
    struct _M128A Xmm15;                                                    //0xc0
    ULONGLONG TrapFrame;                                                    //0xd0
    ULONGLONG OutputBuffer;                                                 //0xd8
    ULONGLONG OutputLength;                                                 //0xe0
    ULONGLONG Spare2;                                                       //0xe8
    ULONGLONG MxCsr;                                                        //0xf0
    ULONGLONG Rbp;                                                          //0xf8
    ULONGLONG Rbx;                                                          //0x100
    ULONGLONG Rdi;                                                          //0x108
    ULONGLONG Rsi;                                                          //0x110
    ULONGLONG R12;                                                          //0x118
    ULONGLONG R13;                                                          //0x120
    ULONGLONG R14;                                                          //0x128
    ULONGLONG R15;                                                          //0x130
    ULONGLONG Return;                                                       //0x138
};
