#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _KERNEL_STACK_SEGMENT
{
    ULONG StackBase;                                                        //0x0
    ULONG StackLimit;                                                       //0x4
    ULONG KernelStack;                                                      //0x8
    ULONG InitialStack;                                                     //0xc
    ULONG ActualLimit;                                                      //0x10
};
/* Used in */
// _KERNEL_STACK_CONTROL

