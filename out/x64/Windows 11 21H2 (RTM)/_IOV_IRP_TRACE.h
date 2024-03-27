#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_KTHREAD.h>

//0x80 bytes (sizeof)
struct _IOV_IRP_TRACE
{
    struct _IRP* Irp;                                                       //0x0
    struct _KTHREAD* Thread;                                                //0x8
    union
    {
        struct
        {
            SHORT KernelApcDisable;                                         //0x10
            SHORT SpecialApcDisable;                                        //0x12
        };
        ULONG CombinedApcDisable;                                           //0x10
    };
    UCHAR Irql;                                                             //0x14
    VOID* StackTrace[13];                                                   //0x18
};
