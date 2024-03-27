#pragma once
/* ------------------ */

#include <_M128A.h>

//0x190 bytes (sizeof)
struct _KTRAP_FRAME
{
    ULONGLONG P1Home;                                                       //0x0
    ULONGLONG P2Home;                                                       //0x8
    ULONGLONG P3Home;                                                       //0x10
    ULONGLONG P4Home;                                                       //0x18
    ULONGLONG P5;                                                           //0x20
    CHAR PreviousMode;                                                      //0x28
    UCHAR PreviousIrql;                                                     //0x29
    UCHAR FaultIndicator;                                                   //0x2a
    UCHAR ExceptionActive;                                                  //0x2b
    ULONG MxCsr;                                                            //0x2c
    ULONGLONG Rax;                                                          //0x30
    ULONGLONG Rcx;                                                          //0x38
    ULONGLONG Rdx;                                                          //0x40
    ULONGLONG R8;                                                           //0x48
    ULONGLONG R9;                                                           //0x50
    ULONGLONG R10;                                                          //0x58
    ULONGLONG R11;                                                          //0x60
    union
    {
        ULONGLONG GsBase;                                                   //0x68
        ULONGLONG GsSwap;                                                   //0x68
    };
    struct _M128A Xmm0;                                                     //0x70
    struct _M128A Xmm1;                                                     //0x80
    struct _M128A Xmm2;                                                     //0x90
    struct _M128A Xmm3;                                                     //0xa0
    struct _M128A Xmm4;                                                     //0xb0
    struct _M128A Xmm5;                                                     //0xc0
    union
    {
        ULONGLONG FaultAddress;                                             //0xd0
        ULONGLONG ContextRecord;                                            //0xd0
        ULONGLONG TimeStampCKCL;                                            //0xd0
    };
    ULONGLONG Dr0;                                                          //0xd8
    ULONGLONG Dr1;                                                          //0xe0
    ULONGLONG Dr2;                                                          //0xe8
    ULONGLONG Dr3;                                                          //0xf0
    ULONGLONG Dr6;                                                          //0xf8
    ULONGLONG Dr7;                                                          //0x100
    ULONGLONG DebugControl;                                                 //0x108
    ULONGLONG LastBranchToRip;                                              //0x110
    ULONGLONG LastBranchFromRip;                                            //0x118
    ULONGLONG LastExceptionToRip;                                           //0x120
    ULONGLONG LastExceptionFromRip;                                         //0x128
    USHORT SegDs;                                                           //0x130
    USHORT SegEs;                                                           //0x132
    USHORT SegFs;                                                           //0x134
    USHORT SegGs;                                                           //0x136
    ULONGLONG TrapFrame;                                                    //0x138
    ULONGLONG Rbx;                                                          //0x140
    ULONGLONG Rdi;                                                          //0x148
    ULONGLONG Rsi;                                                          //0x150
    ULONGLONG Rbp;                                                          //0x158
    union
    {
        ULONGLONG ErrorCode;                                                //0x160
        ULONGLONG ExceptionFrame;                                           //0x160
        ULONGLONG TimeStampKlog;                                            //0x160
    };
    ULONGLONG Rip;                                                          //0x168
    USHORT SegCs;                                                           //0x170
    UCHAR Fill0;                                                            //0x172
    UCHAR Logging;                                                          //0x173
    USHORT Fill1[2];                                                        //0x174
    ULONG EFlags;                                                           //0x178
    ULONG Fill2;                                                            //0x17c
    ULONGLONG Rsp;                                                          //0x180
    USHORT SegSs;                                                           //0x188
    USHORT Fill3;                                                           //0x18a
    ULONG Fill4;                                                            //0x18c
};
/* Used in */
// _KINTERRUPT
// _KTHREAD
// _KUMS_CONTEXT_HEADER

