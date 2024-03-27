#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_IRP.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_LIST_ENTRY.h>

//0x2c bytes (sizeof)
struct _POP_DEVICE_POWER_IRP
{
    struct _SINGLE_LIST_ENTRY Free;                                         //0x0
    struct _IRP* Irp;                                                       //0x4
    struct _PO_DEVICE_NOTIFY* Notify;                                       //0x8
    struct _LIST_ENTRY Pending;                                             //0xc
    struct _LIST_ENTRY Complete;                                            //0x14
    struct _LIST_ENTRY Abort;                                               //0x1c
    struct _LIST_ENTRY Failed;                                              //0x24
};
/* Used in */
// _POP_DEVICE_SYS_STATE

