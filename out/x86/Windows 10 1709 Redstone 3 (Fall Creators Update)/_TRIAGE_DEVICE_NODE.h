#pragma once
/* ------------------ */

#include <_TRIAGE_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IRP.h>
#include <_TRIAGE_POP_FX_DEVICE.h>

//0x2c bytes (sizeof)
struct _TRIAGE_DEVICE_NODE
{
    struct _TRIAGE_DEVICE_NODE* Sibling;                                    //0x0
    struct _TRIAGE_DEVICE_NODE* Child;                                      //0x4
    struct _TRIAGE_DEVICE_NODE* Parent;                                     //0x8
    struct _TRIAGE_DEVICE_NODE* LastChild;                                  //0xc
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x10
    struct _UNICODE_STRING InstancePath;                                    //0x14
    struct _UNICODE_STRING ServiceName;                                     //0x1c
    struct _IRP* PendingIrp;                                                //0x24
    struct _TRIAGE_POP_FX_DEVICE* FxDevice;                                 //0x28
};
/* Used in */
// _TRIAGE_DEVICE_NODE
// _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST
// _TRIAGE_POP_FX_DEVICE

