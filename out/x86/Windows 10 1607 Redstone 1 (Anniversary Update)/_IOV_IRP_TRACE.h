#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_KTHREAD.h>

//0x40 bytes (sizeof)
struct _IOV_IRP_TRACE
{
    struct _IRP* Irp;                                                       //0x0
    struct _KTHREAD* Thread;                                                //0x4
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x8
            SHORT SpecialApcDisable;                                        //0xa
        };
        ULONG CombinedApcDisable;                                           //0x8
    };
    UCHAR Irql;                                                             //0xc
    VOID* StackTrace[12];                                                   //0x10
};
