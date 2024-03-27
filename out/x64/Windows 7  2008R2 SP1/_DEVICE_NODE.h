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

//0x268 bytes (sizeof)
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
    ULONG Level;                                                            //0x50
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x58
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0xc0
    enum _PNP_DEVNODE_STATE State;                                          //0xe0
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0xe4
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0xe8
    ULONG StateHistoryEntry;                                                //0x138
    LONG CompletionStatus;                                                  //0x13c
    ULONG Flags;                                                            //0x140
    ULONG UserFlags;                                                        //0x144
    ULONG Problem;                                                          //0x148
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0x150
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0x158
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0x160
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0x168
    enum _INTERFACE_TYPE InterfaceType;                                     //0x170
    ULONG BusNumber;                                                        //0x174
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0x178
    ULONG ChildBusNumber;                                                   //0x17c
    USHORT ChildBusTypeIndex;                                               //0x180
    UCHAR RemovalPolicy;                                                    //0x182
    UCHAR HardwareRemovalPolicy;                                            //0x183
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0x188
    struct _LIST_ENTRY DeviceArbiterList;                                   //0x198
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x1a8
    USHORT NoTranslatorMask;                                                //0x1b8
    USHORT QueryTranslatorMask;                                             //0x1ba
    USHORT NoArbiterMask;                                                   //0x1bc
    USHORT QueryArbiterMask;                                                //0x1be
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x1c0
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x1c0
        VOID* Information;                                                  //0x1c0
    } OverUsed1;                                                            //0x1c0
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x1c8
    } OverUsed2;                                                            //0x1c8
    struct _CM_RESOURCE_LIST* BootResources;                                //0x1d0
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x1d8
    ULONG CapabilityFlags;                                                  //0x1e0
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x1e8
        struct _LIST_ENTRY ListEntry;                                       //0x1f0
        USHORT* SerialNumber;                                               //0x200
    } DockInfo;                                                             //0x1e8
    ULONG DisableableDepends;                                               //0x208
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x210
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x220
    ULONG DriverUnloadRetryCount;                                           //0x230
    struct _DEVICE_NODE* PreviousParent;                                    //0x238
    ULONG DeletedChildren;                                                  //0x240
    ULONG NumaNodeIndex;                                                    //0x244
    struct _GUID ContainerID;                                               //0x248
    UCHAR OverrideFlags;                                                    //0x258
    UCHAR RequiresUnloadedDriver;                                           //0x259
    struct _PENDING_RELATIONS_LIST_ENTRY* PendingEjectRelations;            //0x260
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY
// _PNP_DEVICE_COMPLETION_REQUEST

