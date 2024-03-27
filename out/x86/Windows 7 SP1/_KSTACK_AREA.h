#pragma once
/* ------------------ */

#include <_FNSAVE_FORMAT.h>
#include <_FXSAVE_FORMAT.h>
#include <_KERNEL_STACK_CONTROL.h>

//0x210 bytes (sizeof)
struct _KSTACK_AREA
{
    union
    {
        struct _FNSAVE_FORMAT FnArea;                                       //0x0
        struct _FXSAVE_FORMAT NpxFrame;                                     //0x0
    };
    struct _KERNEL_STACK_CONTROL StackControl;                              //0x1e0
    ULONG Cr0NpxState;                                                      //0x1fc
    ULONG Padding[4];                                                       //0x200
};
