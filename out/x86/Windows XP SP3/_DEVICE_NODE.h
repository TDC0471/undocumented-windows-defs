#pragma once
/* ------------------ */

#include <_DEVICE_NODE.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_PNP_DEVNODE_STATE.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>
#include <_CM_RESOURCE_LIST.h>
#include <_UNICODE_STRING.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <_INTERFACE_TYPE.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_RELATIONS.h>
#include <PROFILE_STATUS.h>

//0x118 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x4
    struct _DEVICE_NODE* Parent;                                            //0x8
    struct _DEVICE_NODE* LastChild;                                         //0xc
    ULONG Level;                                                            //0x10
    struct _PO_DEVICE_NOTIFY* Notify;                                       //0x14
    enum _PNP_DEVNODE_STATE State;                                          //0x18
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x1c
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x20
    ULONG StateHistoryEntry;                                                //0x70
    LONG CompletionStatus;                                                  //0x74
    struct _IRP* PendingIrp;                                                //0x78
    ULONG Flags;                                                            //0x7c
    ULONG UserFlags;                                                        //0x80
    ULONG Problem;                                                          //0x84
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x88
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0x8c
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0x90
    struct _UNICODE_STRING InstancePath;                                    //0x94
    struct _UNICODE_STRING ServiceName;                                     //0x9c
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0xa4
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0xa8
    enum _INTERFACE_TYPE InterfaceType;                                     //0xac
    ULONG BusNumber;                                                        //0xb0
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0xb4
    ULONG ChildBusNumber;                                                   //0xb8
    USHORT ChildBusTypeIndex;                                               //0xbc
    UCHAR RemovalPolicy;                                                    //0xbe
    UCHAR HardwareRemovalPolicy;                                            //0xbf
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0xc0
    struct _LIST_ENTRY DeviceArbiterList;                                   //0xc8
    struct _LIST_ENTRY DeviceTranslatorList;                                //0xd0
    USHORT NoTranslatorMask;                                                //0xd8
    USHORT QueryTranslatorMask;                                             //0xda
    USHORT NoArbiterMask;                                                   //0xdc
    USHORT QueryArbiterMask;                                                //0xde
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0xe0
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0xe0
    } OverUsed1;                                                            //0xe0
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0xe4
    } OverUsed2;                                                            //0xe4
    struct _CM_RESOURCE_LIST* BootResources;                                //0xe8
    ULONG CapabilityFlags;                                                  //0xec
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0xf0
        struct _LIST_ENTRY ListEntry;                                       //0xf4
        USHORT* SerialNumber;                                               //0xfc
    } DockInfo;                                                             //0xf0
    ULONG DisableableDepends;                                               //0x100
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x104
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x10c
    ULONG DriverUnloadRetryCount;                                           //0x114
};
/* Used in */
// _DEVICE_NODE

