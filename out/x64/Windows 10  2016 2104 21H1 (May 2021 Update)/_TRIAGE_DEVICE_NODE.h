#pragma once
/* ------------------ */

#include <_TRIAGE_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IRP.h>
#include <_TRIAGE_POP_FX_DEVICE.h>

//0x58 bytes (sizeof)
struct _TRIAGE_DEVICE_NODE
{
    struct _TRIAGE_DEVICE_NODE* Sibling;                                    //0x0
    struct _TRIAGE_DEVICE_NODE* Child;                                      //0x8
    struct _TRIAGE_DEVICE_NODE* Parent;                                     //0x10
    struct _TRIAGE_DEVICE_NODE* LastChild;                                  //0x18
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x20
    struct _UNICODE_STRING InstancePath;                                    //0x28
    struct _UNICODE_STRING ServiceName;                                     //0x38
    struct _IRP* PendingIrp;                                                //0x48
    struct _TRIAGE_POP_FX_DEVICE* FxDevice;                                 //0x50
};
/* Used in */
// _TRIAGE_DEVICE_NODE
// _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST
// _TRIAGE_POP_FX_DEVICE

