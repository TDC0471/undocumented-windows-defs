#pragma once
/* ------------------ */

#include <_PCI_COMMON_CONFIG.h>

//0x40 bytes (sizeof)
struct _PCI_BUS_INTERFACE_STANDARD
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x8
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x10
    VOID (*InterfaceDereference)(VOID* arg1);                               //0x18
    ULONG (*ReadConfig)(VOID* arg1, UCHAR arg2, ULONG arg3, VOID* arg4, ULONG arg5, ULONG arg6); //0x20
    ULONG (*WriteConfig)(VOID* arg1, UCHAR arg2, ULONG arg3, VOID* arg4, ULONG arg5, ULONG arg6); //0x28
    VOID (*PinToLine)(VOID* arg1, struct _PCI_COMMON_CONFIG* arg2);         //0x30
    VOID (*LineToPin)(VOID* arg1, struct _PCI_COMMON_CONFIG* arg2, struct _PCI_COMMON_CONFIG* arg3); //0x38
};
/* Used in */
// _PCI_FDO_EXTENSION

