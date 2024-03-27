#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _THERMAL_COOLING_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x4
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x8
    VOID (*InterfaceDereference)(VOID* arg1);                               //0xc
    ULONG Flags;                                                            //0x10
    VOID (*ActiveCooling)(VOID* arg1, UCHAR arg2);                          //0x14
    VOID (*PassiveCooling)(VOID* arg1, ULONG arg2);                         //0x18
};
/* Used in */
// _POP_COOLING_EXTENSION

