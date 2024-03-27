#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _KERNEL_STACK_SEGMENT
{
    ULONGLONG StackBase;                                                    //0x0
    ULONGLONG StackLimit;                                                   //0x8
    ULONGLONG KernelStack;                                                  //0x10
    ULONGLONG InitialStack;                                                 //0x18
    ULONGLONG ActualLimit;                                                  //0x20
};
/* Used in */
// _KERNEL_STACK_CONTROL

