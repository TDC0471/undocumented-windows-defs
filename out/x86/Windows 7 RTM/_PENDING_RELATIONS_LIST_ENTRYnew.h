#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_PNP_DEVICE_EVENT_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_RELATION_LIST.h>
#include <_IRP.h>
#include <IRPLOCK.h>
#include <_SYSTEM_POWER_STATE.h>
#include <DOCK_INTERFACE.h>

//0x3c bytes (sizeof)
struct _PENDING_RELATIONS_LIST_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x8
    struct _PNP_DEVICE_EVENT_ENTRY* DeviceEvent;                            //0x18
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x1c
    struct _RELATION_LIST* RelationsList;                                   //0x20
    struct _IRP* EjectIrp;                                                  //0x24
    enum IRPLOCK Lock;                                                      //0x28
    ULONG Problem;                                                          //0x2c
    UCHAR ProfileChangingEject;                                             //0x30
    UCHAR DisplaySafeRemovalDialog;                                         //0x31
    enum _SYSTEM_POWER_STATE LightestSleepState;                            //0x34
    struct DOCK_INTERFACE* DockInterface;                                   //0x38
};
/* Used in */
// _DEVICE_NODE

