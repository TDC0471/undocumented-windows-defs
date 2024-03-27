#pragma once
/* ------------------ */

#include <_KERNEL_STACK_CONTROL.h>
#include <_XSAVE_FORMAT.h>

//0x250 bytes (sizeof)
struct _KSTACK_AREA
{
    struct _KERNEL_STACK_CONTROL StackControl;                              //0x0
    struct _XSAVE_FORMAT NpxFrame;                                          //0x50
};
