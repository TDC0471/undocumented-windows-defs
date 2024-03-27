#pragma once
/* ------------------ */

#include <_KERNEL_SHADOW_STACK_LIMIT.h>

//0x40 bytes (sizeof)
struct _KERNEL_STACK_SEGMENT
{
    ULONGLONG StackBase;                                                    //0x0
    ULONGLONG StackLimit;                                                   //0x8
    ULONGLONG KernelStack;                                                  //0x10
    ULONGLONG InitialStack;                                                 //0x18
    ULONGLONG KernelShadowStackBase;                                        //0x20
    union _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;                //0x28
    ULONGLONG KernelShadowStack;                                            //0x30
    ULONGLONG KernelShadowStackInitial;                                     //0x38
};
/* Used in */
// _KSTACK_CONTROL

