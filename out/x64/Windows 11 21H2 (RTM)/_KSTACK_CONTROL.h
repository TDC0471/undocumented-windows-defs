#pragma once
/* ------------------ */

#include <_KERNEL_STACK_SEGMENT.h>

//0x50 bytes (sizeof)
struct _KSTACK_CONTROL
{
    ULONGLONG StackBase;                                                    //0x0
    union
    {
        ULONGLONG ActualLimit;                                              //0x8
        ULONGLONG StackExpansion:1;                                         //0x8
    };
    struct _KERNEL_STACK_SEGMENT Previous;                                  //0x10
};
