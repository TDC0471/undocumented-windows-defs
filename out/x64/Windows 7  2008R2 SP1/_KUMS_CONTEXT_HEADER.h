#pragma once
/* ------------------ */

#include <_XSAVE_FORMAT.h>
#include <_KTRAP_FRAME.h>
#include <_KEXCEPTION_FRAME.h>
#include <_KTHREAD.h>

//0x70 bytes (sizeof)
struct _KUMS_CONTEXT_HEADER
{
    ULONGLONG P1Home;                                                       //0x0
    ULONGLONG P2Home;                                                       //0x8
    ULONGLONG P3Home;                                                       //0x10
    ULONGLONG P4Home;                                                       //0x18
    VOID* StackTop;                                                         //0x20
    ULONGLONG StackSize;                                                    //0x28
    ULONGLONG RspOffset;                                                    //0x30
    ULONGLONG Rip;                                                          //0x38
    struct _XSAVE_FORMAT* FltSave;                                          //0x40
    union
    {
        struct
        {
            ULONGLONG Volatile:1;                                           //0x48
            ULONGLONG Reserved:63;                                          //0x48
        };
        ULONGLONG Flags;                                                    //0x48
    };
    struct _KTRAP_FRAME* TrapFrame;                                         //0x50
    struct _KEXCEPTION_FRAME* ExceptionFrame;                               //0x58
    struct _KTHREAD* SourceThread;                                          //0x60
    ULONGLONG Return;                                                       //0x68
};
/* Used in */
// _UMS_CONTROL_BLOCK

