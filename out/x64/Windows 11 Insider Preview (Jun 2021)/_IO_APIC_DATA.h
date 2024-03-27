#pragma once
/* ------------------ */

#include <_IO_APIC_REGISTERS.h>

//0x30 bytes (sizeof)
struct _IO_APIC_DATA
{
    ULONGLONG PhysicalAddress;                                              //0x0
    ULONG Identifier;                                                       //0x8
    struct _IO_APIC_REGISTERS* BaseAddress;                                 //0x10
    UCHAR Version;                                                          //0x18
    UCHAR PinCount;                                                         //0x19
    UCHAR Initialized;                                                      //0x1a
    UCHAR InitializedFirstLocalUnit;                                        //0x1b
    ULONG GsiBase;                                                          //0x1c
    ULONG CmciRegister;                                                     //0x20
    ULONG DeferredErrorRegister;                                            //0x24
    UCHAR IoUnitMissing;                                                    //0x28
};
