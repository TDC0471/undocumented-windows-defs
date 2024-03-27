#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_IRP.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_LIST_ENTRY.h>

//0x58 bytes (sizeof)
struct _POP_DEVICE_POWER_IRP
{
    struct _SINGLE_LIST_ENTRY Free;                                         //0x0
    struct _IRP* Irp;                                                       //0x8
    struct _PO_DEVICE_NOTIFY* Notify;                                       //0x10
    struct _LIST_ENTRY Pending;                                             //0x18
    struct _LIST_ENTRY Complete;                                            //0x28
    struct _LIST_ENTRY Abort;                                               //0x38
    struct _LIST_ENTRY Failed;                                              //0x48
};
/* Used in */
// _POP_DEVICE_SYS_STATE

