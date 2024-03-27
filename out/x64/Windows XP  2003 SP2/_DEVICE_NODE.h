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

//0x1c0 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x8
    struct _DEVICE_NODE* Parent;                                            //0x10
    struct _DEVICE_NODE* LastChild;                                         //0x18
    ULONG Level;                                                            //0x20
    struct _PO_DEVICE_NOTIFY* Notify;                                       //0x28
    enum _PNP_DEVNODE_STATE State;                                          //0x30
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x34
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x38
    ULONG StateHistoryEntry;                                                //0x88
    LONG CompletionStatus;                                                  //0x8c
    struct _IRP* PendingIrp;                                                //0x90
    ULONG Flags;                                                            //0x98
    ULONG UserFlags;                                                        //0x9c
    ULONG Problem;                                                          //0xa0
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0xa8
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0xb0
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0xb8
    struct _UNICODE_STRING InstancePath;                                    //0xc0
    struct _UNICODE_STRING ServiceName;                                     //0xd0
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0xe0
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0xe8
    enum _INTERFACE_TYPE InterfaceType;                                     //0xf0
    ULONG BusNumber;                                                        //0xf4
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0xf8
    ULONG ChildBusNumber;                                                   //0xfc
    USHORT ChildBusTypeIndex;                                               //0x100
    UCHAR RemovalPolicy;                                                    //0x102
    UCHAR HardwareRemovalPolicy;                                            //0x103
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x108
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x118
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x128
    USHORT NoTranslatorMask;                                                //0x138
    USHORT QueryTranslatorMask;                                             //0x13a
    USHORT NoArbiterMask;                                                   //0x13c
    USHORT QueryArbiterMask;                                                //0x13e
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x140
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x140
    } OverUsed1;                                                            //0x140
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x148
    } OverUsed2;                                                            //0x148
    struct _CM_RESOURCE_LIST* BootResources;                                //0x150
    ULONG CapabilityFlags;                                                  //0x158
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x160
        struct _LIST_ENTRY ListEntry;                                       //0x168
        USHORT* SerialNumber;                                               //0x178
    } DockInfo;                                                             //0x160
    ULONG DisableableDepends;                                               //0x180
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x188
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x198
    ULONG DriverUnloadRetryCount;                                           //0x1a8
    struct _DEVICE_NODE* PreviousParent;                                    //0x1b0
    ULONG DeletedChildren;                                                  //0x1b8
};
/* Used in */
// _DEVICE_NODE

