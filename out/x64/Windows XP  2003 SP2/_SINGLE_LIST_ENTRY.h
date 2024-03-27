#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _SINGLE_LIST_ENTRY
{
    struct _SINGLE_LIST_ENTRY* Next;                                        //0x0
};
/* Used in */
// PCI_SECONDARY_EXTENSION
// _HEAP_SUBSEGMENT
// _HEAP_USERDATA_HEADER
// _KPRCB
// _KPROCESS
// _KTHREAD
// _LPCP_MESSAGE
// _MMPFN
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION
// _PI_BUS_EXTENSION
// _POP_DEVICE_POWER_IRP
// _SINGLE_LIST_ENTRY
// _WMI_BUFFER_HEADER

