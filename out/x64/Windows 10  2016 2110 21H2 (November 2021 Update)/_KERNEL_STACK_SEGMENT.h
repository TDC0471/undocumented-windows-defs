#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _KERNEL_STACK_SEGMENT
{
    ULONGLONG StackBase;                                                    //0x0
    ULONGLONG StackLimit;                                                   //0x8
    ULONGLONG KernelStack;                                                  //0x10
    ULONGLONG InitialStack;                                                 //0x18
};
/* Used in */
// _KSTACK_CONTROL

