#pragma once
/* ------------------ */

#include <_ARBITER_ACTION.h>
#include <_ARBITER_PARAMETERS.h>

//0x18 bytes (sizeof)
struct _ARBITER_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x4
    VOID (*InterfaceReference)(VOID* arg1);                                 //0x8
    VOID (*InterfaceDereference)(VOID* arg1);                               //0xc
    LONG (*ArbiterHandler)(VOID* arg1, enum _ARBITER_ACTION arg2, struct _ARBITER_PARAMETERS* arg3); //0x10
    ULONG Flags;                                                            //0x14
};
/* Used in */
// _ARBITER_INSTANCE
// _PI_RESOURCE_ARBITER_ENTRY

