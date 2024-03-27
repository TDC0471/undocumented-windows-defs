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
#include <_PNP_DEVICE_DELETE_TYPE.h>

//0x70 bytes (sizeof)
struct _PENDING_RELATIONS_LIST_ENTRY
{
    struct _LIST_ENTRY Link;                                                //0x0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x10
    struct _PNP_DEVICE_EVENT_ENTRY* DeviceEvent;                            //0x30
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x38
    struct _RELATION_LIST* RelationsList;                                   //0x40
    struct _IRP* EjectIrp;                                                  //0x48
    enum IRPLOCK Lock;                                                      //0x50
    ULONG Problem;                                                          //0x54
    UCHAR ProfileChangingEject;                                             //0x58
    UCHAR DisplaySafeRemovalDialog;                                         //0x59
    enum _SYSTEM_POWER_STATE LightestSleepState;                            //0x5c
    struct DOCK_INTERFACE* DockInterface;                                   //0x60
    UCHAR DequeuePending;                                                   //0x68
    enum _PNP_DEVICE_DELETE_TYPE DeleteType;                                //0x6c
};
/* Used in */
// _DEVICE_NODE

