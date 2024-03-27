#pragma once
/* ------------------ */

#include <_KTRAP_FRAME.h>
#include <_KERNEL_STACK_SEGMENT.h>

//0x20 bytes (sizeof)
struct _KSTACK_CONTROL
{
    ULONG StackBase;                                                        //0x0
    union
    {
        ULONG ActualLimit;                                                  //0x4
        ULONG StackExpansion:1;                                             //0x4
    };
    struct _KTRAP_FRAME* PreviousTrapFrame;                                 //0x8
    VOID* PreviousExceptionList;                                            //0xc
    struct _KERNEL_STACK_SEGMENT Previous;                                  //0x10
};
