#pragma once
/* ------------------ */

#include <_KiIoAccessMap.h>

//0x20ac bytes (sizeof)
struct _KTSS
{
    USHORT Backlink;                                                        //0x0
    USHORT Reserved0;                                                       //0x2
    ULONG Esp0;                                                             //0x4
    USHORT Ss0;                                                             //0x8
    USHORT Reserved1;                                                       //0xa
    ULONG NotUsed1[4];                                                      //0xc
    ULONG CR3;                                                              //0x1c
    ULONG Eip;                                                              //0x20
    ULONG EFlags;                                                           //0x24
    ULONG Eax;                                                              //0x28
    ULONG Ecx;                                                              //0x2c
    ULONG Edx;                                                              //0x30
    ULONG Ebx;                                                              //0x34
    ULONG Esp;                                                              //0x38
    ULONG Ebp;                                                              //0x3c
    ULONG Esi;                                                              //0x40
    ULONG Edi;                                                              //0x44
    USHORT Es;                                                              //0x48
    USHORT Reserved2;                                                       //0x4a
    USHORT Cs;                                                              //0x4c
    USHORT Reserved3;                                                       //0x4e
    USHORT Ss;                                                              //0x50
    USHORT Reserved4;                                                       //0x52
    USHORT Ds;                                                              //0x54
    USHORT Reserved5;                                                       //0x56
    USHORT Fs;                                                              //0x58
    USHORT Reserved6;                                                       //0x5a
    USHORT Gs;                                                              //0x5c
    USHORT Reserved7;                                                       //0x5e
    USHORT LDT;                                                             //0x60
    USHORT Reserved8;                                                       //0x62
    USHORT Flags;                                                           //0x64
    USHORT IoMapBase;                                                       //0x66
    struct _KiIoAccessMap IoMaps[1];                                        //0x68
    UCHAR IntDirectionMap[32];                                              //0x208c
};
/* Used in */
// _KPCR

