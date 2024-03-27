#pragma once
/* ------------------ */

#include <PCI_SIGNATURE.h>
#include <_PCI_MJ_DISPATCH_TABLE.h>
#include <_KEVENT.h>

//0x38 bytes (sizeof)
struct _PCI_COMMON_EXTENSION
{
    VOID* Next;                                                             //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x8
    struct _PCI_MJ_DISPATCH_TABLE* IrpDispatchTable;                        //0x10
    UCHAR DeviceState;                                                      //0x18
    UCHAR TentativeNextState;                                               //0x19
    struct _KEVENT SecondaryExtLock;                                        //0x20
};
/* Used in */
// _PCI_MJ_DISPATCH_TABLE
// _PCI_MN_DISPATCH_TABLE

