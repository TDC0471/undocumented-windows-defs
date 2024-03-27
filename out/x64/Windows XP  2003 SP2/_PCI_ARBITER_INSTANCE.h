#pragma once
/* ------------------ */

#include <PCI_SECONDARY_EXTENSION.h>
#include <_PCI_INTERFACE.h>
#include <_PCI_FDO_EXTENSION.h>
#include <_ARBITER_INSTANCE.h>

//0x190 bytes (sizeof)
struct _PCI_ARBITER_INSTANCE
{
    struct PCI_SECONDARY_EXTENSION Header;                                  //0x0
    struct _PCI_INTERFACE* Interface;                                       //0x18
    struct _PCI_FDO_EXTENSION* BusFdoExtension;                             //0x20
    USHORT InstanceName[24];                                                //0x28
    struct _ARBITER_INSTANCE CommonInstance;                                //0x58
};
/* Used in */
// _PCI_INTERFACE

