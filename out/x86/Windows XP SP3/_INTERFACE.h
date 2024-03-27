#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x4
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x8
    VOID (*InterfaceDereference)(VOID* arg1);                               //0xc
};
/* Used in */
// _IO_STACK_LOCATION
// _PCI_INTERFACE

