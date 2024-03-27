#pragma once
/* ------------------ */

#include <_PCI_MN_DISPATCH_TABLE.h>
#include <_PCI_DISPATCH_STYLE.h>
#include <_IRP.h>
#include <_IO_STACK_LOCATION.h>
#include <_PCI_COMMON_EXTENSION.h>

//0x20 bytes (sizeof)
struct _PCI_MJ_DISPATCH_TABLE
{
    ULONG PnpIrpMaximumMinorFunction;                                       //0x0
    struct _PCI_MN_DISPATCH_TABLE* PnpIrpDispatchTable;                     //0x4
    ULONG PowerIrpMaximumMinorFunction;                                     //0x8
    struct _PCI_MN_DISPATCH_TABLE* PowerIrpDispatchTable;                   //0xc
    enum _PCI_DISPATCH_STYLE SystemControlIrpDispatchStyle;                 //0x10
    LONG (*SystemControlIrpDispatchFunction)(struct _IRP* arg1, struct _IO_STACK_LOCATION* arg2, struct _PCI_COMMON_EXTENSION* arg3); //0x14
    enum _PCI_DISPATCH_STYLE OtherIrpDispatchStyle;                         //0x18
    LONG (*OtherIrpDispatchFunction)(struct _IRP* arg1, struct _IO_STACK_LOCATION* arg2, struct _PCI_COMMON_EXTENSION* arg3); //0x1c
};
/* Used in */
// _PCI_COMMON_EXTENSION
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

