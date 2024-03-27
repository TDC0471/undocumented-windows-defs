#pragma once
/* ------------------ */

#include <_GUID.h>
#include <PCI_SIGNATURE.h>
#include <_INTERFACE.h>
#include <_PCI_ARBITER_INSTANCE.h>

//0x1c bytes (sizeof)
struct _PCI_INTERFACE
{
    struct _GUID* InterfaceType;                                            //0x0
    USHORT MinSize;                                                         //0x4
    USHORT MinVersion;                                                      //0x6
    USHORT MaxVersion;                                                      //0x8
    USHORT Flags;                                                           //0xa
    LONG ReferenceCount;                                                    //0xc
    enum PCI_SIGNATURE Signature;                                           //0x10
    LONG (*Constructor)(VOID* arg1, VOID* arg2, VOID* arg3, USHORT arg4, USHORT arg5, struct _INTERFACE* arg6); //0x14
    LONG (*Initializer)(struct _PCI_ARBITER_INSTANCE* arg1);                //0x18
};
/* Used in */
// _PCI_ARBITER_INSTANCE

