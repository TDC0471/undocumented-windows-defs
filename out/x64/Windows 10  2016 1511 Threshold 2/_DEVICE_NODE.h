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

//0x2c8 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x8
    struct _DEVICE_NODE* Parent;                                            //0x10
    struct _DEVICE_NODE* LastChild;                                         //0x18
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x20
    struct _UNICODE_STRING InstancePath;                                    //0x28
    struct _UNICODE_STRING ServiceName;                                     //0x38
    struct _IRP* PendingIrp;                                                //0x48
    struct _POP_FX_DEVICE* FxDevice;                                        //0x50
    volatile LONG FxDeviceLock;                                             //0x58
    struct _KEVENT FxRemoveEvent;                                           //0x60
    volatile LONG FxActivationCount;                                        //0x78
    volatile LONG FxSleepCount;                                             //0x7c
    struct _POP_FX_PLUGIN* Plugin;                                          //0x80
    ULONG Level;                                                            //0x88
    union _POWER_STATE CurrentPowerState;                                   //0x8c
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x90
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0xf8
    struct _UNICODE_STRING UniqueId;                                        //0x118
    ULONG PowerFlags;                                                       //0x128
    enum _PNP_DEVNODE_STATE State;                                          //0x12c
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x130
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x134
    ULONG StateHistoryEntry;                                                //0x184
    LONG CompletionStatus;                                                  //0x188
    ULONG Flags;                                                            //0x18c
    ULONG UserFlags;                                                        //0x190
    ULONG Problem;                                                          //0x194
    LONG ProblemStatus;                                                     //0x198
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0x1a0
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0x1a8
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0x1b0
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x1b8
    enum _INTERFACE_TYPE InterfaceType;                                     //0x1c0
    ULONG BusNumber;                                                        //0x1c4
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0x1c8
    ULONG ChildBusNumber;                                                   //0x1cc
    USHORT ChildBusTypeIndex;                                               //0x1d0
    UCHAR RemovalPolicy;                                                    //0x1d2
    UCHAR HardwareRemovalPolicy;                                            //0x1d3
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x1d8
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x1e8
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x1f8
    USHORT NoTranslatorMask;                                                //0x208
    USHORT QueryTranslatorMask;                                             //0x20a
    USHORT NoArbiterMask;                                                   //0x20c
    USHORT QueryArbiterMask;                                                //0x20e
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x210
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x210
        VOID* Information;                                                  //0x210
    } OverUsed1;                                                            //0x210
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x218
    } OverUsed2;                                                            //0x218
    struct _CM_RESOURCE_LIST* BootResources;                                //0x220
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x228
    ULONG CapabilityFlags;                                                  //0x230
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x238
        struct _LIST_ENTRY ListEntry;                                       //0x240
        USHORT* SerialNumber;                                               //0x250
    } DockInfo;                                                             //0x238
    ULONG DisableableDepends;                                               //0x258
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x260
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x270
    ULONG DriverUnloadRetryCount;                                           //0x280
    struct _DEVICE_NODE* PreviousParent;                                    //0x288
    LONG DeletedChildren;                                                   //0x290
    ULONG NumaNodeIndex;                                                    //0x294
    struct _GUID ContainerID;                                               //0x298
    UCHAR OverrideFlags;                                                    //0x2a8
    ULONG DeviceIdsHash;                                                    //0x2ac
    UCHAR RequiresUnloadedDriver;                                           //0x2b0
    struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;            //0x2b8
    ULONG StateFlags;                                                       //0x2c0
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_COMPLETION_REQUEST
// _POP_FX_DEVICE

