#pragma once
/* ------------------ */

#include <_PCI_DISPATCH_STYLE.h>
#include <_IRP.h>
#include <_IO_STACK_LOCATION.h>
#include <_PCI_COMMON_EXTENSION.h>

//0x10 bytes (sizeof)
struct _PCI_MN_DISPATCH_TABLE
{
    enum _PCI_DISPATCH_STYLE DispatchStyle;                                 //0x0
    LONG (*DispatchFunction)(struct _IRP* arg1, struct _IO_STACK_LOCATION* arg2, struct _PCI_COMMON_EXTENSION* arg3); //0x8
};
/* Used in */
// _PCI_MJ_DISPATCH_TABLE

