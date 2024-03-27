#pragma once
/* ------------------ */

#include <_KERNEL_STACK_SEGMENT.h>

//0x50 bytes (sizeof)
struct _KERNEL_STACK_CONTROL
{
    struct _KERNEL_STACK_SEGMENT Current;                                   //0x0
    struct _KERNEL_STACK_SEGMENT Previous;                                  //0x28
};
/* Used in */
// _KSTACK_AREA

