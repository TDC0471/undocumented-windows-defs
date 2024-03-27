#pragma once
/* ------------------ */

#include <_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IRP.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_PO_IRP_MANAGER.h>
#include <_PNP_DEVNODE_STATE.h>
#include <_CM_RESOURCE_LIST.h>
#include <_IO_RESOURCE_REQUIREMENTS_LIST.h>
#include <_INTERFACE_TYPE.h>
#include <_LIST_ENTRY.h>
#include <_DEVICE_RELATIONS.h>
#include <PROFILE_STATUS.h>
#include <_GUID.h>
#include <_PENDING_RELATIONS_LIST_ENTRY.h>

//0x188 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x4
    struct _DEVICE_NODE* Parent;                                            //0x8
    struct _DEVICE_NODE* LastChild;                                         //0xc
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x10
    struct _UNICODE_STRING InstancePath;                                    //0x14
    struct _UNICODE_STRING ServiceName;                                     //0x1c
    struct _IRP* PendingIrp;                                                //0x24
    ULONG Level;                                                            //0x28
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x2c
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0x68
    enum _PNP_DEVNODE_STATE State;                                          //0x78
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x7c
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x80
    ULONG StateHistoryEntry;                                                //0xd0
    LONG CompletionStatus;                                                  //0xd4
    ULONG Flags;                                                            //0xd8
    ULONG UserFlags;                                                        //0xdc
    ULONG Problem;                                                          //0xe0
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0xe4
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0xe8
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0xec
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0xf0
    enum _INTERFACE_TYPE InterfaceType;                                     //0xf4
    ULONG BusNumber;                                                        //0xf8
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0xfc
    ULONG ChildBusNumber;                                                   //0x100
    USHORT ChildBusTypeIndex;                                               //0x104
    UCHAR RemovalPolicy;                                                    //0x106
    UCHAR HardwareRemovalPolicy;                                            //0x107
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x108
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x110
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x118
    USHORT NoTranslatorMask;                                                //0x120
    USHORT QueryTranslatorMask;                                             //0x122
    USHORT NoArbiterMask;                                                   //0x124
    USHORT QueryArbiterMask;                                                //0x126
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x128
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x128
        VOID* Information;                                                  //0x128
    } OverUsed1;                                                            //0x128
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x12c
    } OverUsed2;                                                            //0x12c
    struct _CM_RESOURCE_LIST* BootResources;                                //0x130
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x134
    ULONG CapabilityFlags;                                                  //0x138
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x13c
        struct _LIST_ENTRY ListEntry;                                       //0x140
        USHORT* SerialNumber;                                               //0x148
    } DockInfo;                                                             //0x13c
    ULONG DisableableDepends;                                               //0x14c
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x150
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x158
    ULONG DriverUnloadRetryCount;                                           //0x160
    struct _DEVICE_NODE* PreviousParent;                                    //0x164
    ULONG DeletedChildren;                                                  //0x168
    ULONG NumaNodeIndex;                                                    //0x16c
    struct _GUID ContainerID;                                               //0x170
    UCHAR OverrideFlags;                                                    //0x180
    UCHAR RequiresUnloadedDriver;                                           //0x181
    struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;            //0x184
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_COMPLETION_REQUEST

