#pragma once
/* ------------------ */

#include <_EXCEPTION_REGISTRATION_RECORD.h>

//0x8c bytes (sizeof)
struct _KTRAP_FRAME
{
    ULONG DbgEbp;                                                           //0x0
    ULONG DbgEip;                                                           //0x4
    ULONG DbgArgMark;                                                       //0x8
    USHORT TempSegCs;                                                       //0xc
    UCHAR Logging;                                                          //0xe
    UCHAR FrameType;                                                        //0xf
    ULONG TempEsp;                                                          //0x10
    ULONG Dr0;                                                              //0x14
    ULONG Dr1;                                                              //0x18
    ULONG Dr2;                                                              //0x1c
    ULONG Dr3;                                                              //0x20
    ULONG Dr6;                                                              //0x24
    ULONG Dr7;                                                              //0x28
    ULONG SegGs;                                                            //0x2c
    ULONG SegEs;                                                            //0x30
    ULONG SegDs;                                                            //0x34
    ULONG Edx;                                                              //0x38
    ULONG Ecx;                                                              //0x3c
    ULONG Eax;                                                              //0x40
    UCHAR PreviousPreviousMode;                                             //0x44
    UCHAR EntropyQueueDpc;                                                  //0x45
    union
    {
        UCHAR NmiMsrIbrs;                                                   //0x46
        UCHAR Reserved1;                                                    //0x46
    };
    UCHAR PreviousIrql;                                                     //0x47
    ULONG MxCsr;                                                            //0x48
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;                   //0x4c
    ULONG SegFs;                                                            //0x50
    ULONG Edi;                                                              //0x54
    ULONG Esi;                                                              //0x58
    ULONG Ebx;                                                              //0x5c
    ULONG Ebp;                                                              //0x60
    ULONG ErrCode;                                                          //0x64
    ULONG Eip;                                                              //0x68
    ULONG SegCs;                                                            //0x6c
    ULONG EFlags;                                                           //0x70
    ULONG HardwareEsp;                                                      //0x74
    ULONG HardwareSegSs;                                                    //0x78
    ULONG V86Es;                                                            //0x7c
    ULONG V86Ds;                                                            //0x80
    ULONG V86Fs;                                                            //0x84
    ULONG V86Gs;                                                            //0x88
};
/* Used in */
// _KINTERRUPT
// _KSTACK_CONTROL
// _KTHREAD

