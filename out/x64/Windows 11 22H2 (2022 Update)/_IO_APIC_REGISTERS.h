#pragma once
/* ------------------ */


//0x44 bytes (sizeof)
struct _IO_APIC_REGISTERS
{
    volatile ULONG RegisterIndex;                                           //0x0
    volatile ULONG Reserved1[3];                                            //0x4
    volatile ULONG RegisterValue;                                           //0x10
    volatile ULONG Reserved2[11];                                           //0x14
    volatile ULONG EndOfInterrupt;                                          //0x40
};
/* Used in */
// _IO_APIC_DATA

