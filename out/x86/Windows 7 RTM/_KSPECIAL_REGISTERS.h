#pragma once
/* ------------------ */

#include <_DESCRIPTOR.h>

//0x54 bytes (sizeof)
struct _KSPECIAL_REGISTERS
{
    ULONG Cr0;                                                              //0x0
    ULONG Cr2;                                                              //0x4
    ULONG Cr3;                                                              //0x8
    ULONG Cr4;                                                              //0xc
    ULONG KernelDr0;                                                        //0x10
    ULONG KernelDr1;                                                        //0x14
    ULONG KernelDr2;                                                        //0x18
    ULONG KernelDr3;                                                        //0x1c
    ULONG KernelDr6;                                                        //0x20
    ULONG KernelDr7;                                                        //0x24
    struct _DESCRIPTOR Gdtr;                                                //0x28
    struct _DESCRIPTOR Idtr;                                                //0x30
    USHORT Tr;                                                              //0x38
    USHORT Ldtr;                                                            //0x3a
    ULONG Reserved[6];                                                      //0x3c
};
/* Used in */
// _KPROCESSOR_STATE

