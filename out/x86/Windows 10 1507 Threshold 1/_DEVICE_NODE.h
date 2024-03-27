#pragma once
/* ------------------ */

#include <_DEVICE_NODE.h>
#include <_DEVICE_OBJECT.h>
#include <_UNICODE_STRING.h>
#include <_IRP.h>
#include <_POP_FX_DEVICE.h>
#include <_KEVENT.h>
#include <_POP_FX_PLUGIN.h>
#include <_POWER_STATE.h>
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

//0x1cc bytes (sizeof)
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
    struct _POP_FX_DEVICE* FxDevice;                                        //0x28
    volatile LONG FxDeviceLock;                                             //0x2c
    struct _KEVENT FxRemoveEvent;                                           //0x30
    volatile LONG FxActivationCount;                                        //0x40
    volatile LONG FxSleepCount;                                             //0x44
    struct _POP_FX_PLUGIN* Plugin;                                          //0x48
    ULONG Level;                                                            //0x4c
    union _POWER_STATE CurrentPowerState;                                   //0x50
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x54
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0x90
    struct _UNICODE_STRING UniqueId;                                        //0xa0
    ULONG PowerFlags;                                                       //0xa8
    enum _PNP_DEVNODE_STATE State;                                          //0xac
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0xb0
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0xb4
    ULONG StateHistoryEntry;                                                //0x104
    LONG CompletionStatus;                                                  //0x108
    ULONG Flags;                                                            //0x10c
    ULONG UserFlags;                                                        //0x110
    ULONG Problem;                                                          //0x114
    LONG ProblemStatus;                                                     //0x118
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0x11c
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0x120
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0x124
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x128
    enum _INTERFACE_TYPE InterfaceType;                                     //0x12c
    ULONG BusNumber;                                                        //0x130
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0x134
    ULONG ChildBusNumber;                                                   //0x138
    USHORT ChildBusTypeIndex;                                               //0x13c
    UCHAR RemovalPolicy;                                                    //0x13e
    UCHAR HardwareRemovalPolicy;                                            //0x13f
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x140
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x148
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x150
    USHORT NoTranslatorMask;                                                //0x158
    USHORT QueryTranslatorMask;                                             //0x15a
    USHORT NoArbiterMask;                                                   //0x15c
    USHORT QueryArbiterMask;                                                //0x15e
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x160
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x160
        VOID* Information;                                                  //0x160
    } OverUsed1;                                                            //0x160
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x164
    } OverUsed2;                                                            //0x164
    struct _CM_RESOURCE_LIST* BootResources;                                //0x168
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x16c
    ULONG CapabilityFlags;                                                  //0x170
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x174
        struct _LIST_ENTRY ListEntry;                                       //0x178
        USHORT* SerialNumber;                                               //0x180
    } DockInfo;                                                             //0x174
    ULONG DisableableDepends;                                               //0x184
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x188
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x190
    ULONG DriverUnloadRetryCount;                                           //0x198
    struct _DEVICE_NODE* PreviousParent;                                    //0x19c
    LONG DeletedChildren;                                                   //0x1a0
    ULONG NumaNodeIndex;                                                    //0x1a4
    struct _GUID ContainerID;                                               //0x1a8
    UCHAR OverrideFlags;                                                    //0x1b8
    ULONG DeviceIdsHash;                                                    //0x1bc
    UCHAR RequiresUnloadedDriver;                                           //0x1c0
    struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;            //0x1c4
    ULONG StateFlags;                                                       //0x1c8
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_COMPLETION_REQUEST
// _POP_FX_DEVICE

