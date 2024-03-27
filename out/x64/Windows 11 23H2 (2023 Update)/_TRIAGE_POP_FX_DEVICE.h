#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IRP.h>
#include <_TRIAGE_POP_IRP_DATA.h>
#include <_TRIAGE_DEVICE_NODE.h>

//0x38 bytes (sizeof)
struct _TRIAGE_POP_FX_DEVICE
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _IRP* Irp;                                                       //0x10
    struct _TRIAGE_POP_IRP_DATA* IrpData;                                   //0x18
    LONG Status;                                                            //0x20
    LONG PowerReqCall;                                                      //0x24
    LONG PowerNotReqCall;                                                   //0x28
    struct _TRIAGE_DEVICE_NODE* DeviceNode;                                 //0x30
};
/* Used in */
// _TRIAGE_DEVICE_NODE

