#pragma once
/* ------------------ */

#include <_DEVICE_NODE.h>
#include <_PO_DEVICE_NOTIFY.h>
#include <_PO_IRP_MANAGER.h>
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

//0x220 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x8
    struct _DEVICE_NODE* Parent;                                            //0x10
    struct _DEVICE_NODE* LastChild;                                         //0x18
    ULONG Level;                                                            //0x20
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x28
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0x68
    enum _PNP_DEVNODE_STATE State;                                          //0x88
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x8c
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x90
    ULONG StateHistoryEntry;                                                //0xe0
    LONG CompletionStatus;                                                  //0xe4
    struct _IRP* PendingIrp;                                                //0xe8
    ULONG Flags;                                                            //0xf0
    ULONG UserFlags;                                                        //0xf4
    ULONG Problem;                                                          //0xf8
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x100
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0x108
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0x110
    struct _UNICODE_STRING InstancePath;                                    //0x118
    struct _UNICODE_STRING ServiceName;                                     //0x128
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0x138
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x140
    enum _INTERFACE_TYPE InterfaceType;                                     //0x148
    ULONG BusNumber;                                                        //0x14c
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0x150
    ULONG ChildBusNumber;                                                   //0x154
    USHORT ChildBusTypeIndex;                                               //0x158
    UCHAR RemovalPolicy;                                                    //0x15a
    UCHAR HardwareRemovalPolicy;                                            //0x15b
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x160
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x170
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x180
    USHORT NoTranslatorMask;                                                //0x190
    USHORT QueryTranslatorMask;                                             //0x192
    USHORT NoArbiterMask;                                                   //0x194
    USHORT QueryArbiterMask;                                                //0x196
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x198
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x198
        VOID* Information;                                                  //0x198
    } OverUsed1;                                                            //0x198
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x1a0
    } OverUsed2;                                                            //0x1a0
    struct _CM_RESOURCE_LIST* BootResources;                                //0x1a8
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x1b0
    ULONG CapabilityFlags;                                                  //0x1b8
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x1c0
        struct _LIST_ENTRY ListEntry;                                       //0x1c8
        USHORT* SerialNumber;                                               //0x1d8
    } DockInfo;                                                             //0x1c0
    ULONG DisableableDepends;                                               //0x1e0
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x1e8
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x1f8
    ULONG DriverUnloadRetryCount;                                           //0x208
    struct _DEVICE_NODE* PreviousParent;                                    //0x210
    ULONG DeletedChildren;                                                  //0x218
    ULONG NumaNodeIndex;                                                    //0x21c
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY

