#pragma once
/* ------------------ */

#include <_GUID.h>
#include <PCI_SIGNATURE.h>
#include <_INTERFACE.h>
#include <_PCI_ARBITER_INSTANCE.h>

//0x28 bytes (sizeof)
struct _PCI_INTERFACE
{
    struct _GUID* InterfaceType;                                            //0x0
    USHORT MinSize;                                                         //0x8
    USHORT MinVersion;                                                      //0xa
    USHORT MaxVersion;                                                      //0xc
    USHORT Flags;                                                           //0xe
    LONG ReferenceCount;                                                    //0x10
    enum PCI_SIGNATURE Signature;                                           //0x14
    LONG (*Constructor)(VOID* arg1, VOID* arg2, VOID* arg3, USHORT arg4, USHORT arg5, struct _INTERFACE* arg6); //0x18
    LONG (*Initializer)(struct _PCI_ARBITER_INSTANCE* arg1);                //0x20
};
/* Used in */
// _PCI_ARBITER_INSTANCE

