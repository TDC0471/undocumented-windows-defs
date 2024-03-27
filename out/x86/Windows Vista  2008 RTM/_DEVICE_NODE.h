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

//0x158 bytes (sizeof)
struct _DEVICE_NODE
{
    struct _DEVICE_NODE* Sibling;                                           //0x0
    struct _DEVICE_NODE* Child;                                             //0x4
    struct _DEVICE_NODE* Parent;                                            //0x8
    struct _DEVICE_NODE* LastChild;                                         //0xc
    ULONG Level;                                                            //0x10
    struct _PO_DEVICE_NOTIFY Notify;                                        //0x14
    struct _PO_IRP_MANAGER PoIrpManager;                                    //0x38
    enum _PNP_DEVNODE_STATE State;                                          //0x48
    enum _PNP_DEVNODE_STATE PreviousState;                                  //0x4c
    enum _PNP_DEVNODE_STATE StateHistory[20];                               //0x50
    ULONG StateHistoryEntry;                                                //0xa0
    LONG CompletionStatus;                                                  //0xa4
    struct _IRP* PendingIrp;                                                //0xa8
    ULONG Flags;                                                            //0xac
    ULONG UserFlags;                                                        //0xb0
    ULONG Problem;                                                          //0xb4
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0xb8
    struct _CM_RESOURCE_LIST* ResourceList;                                 //0xbc
    struct _CM_RESOURCE_LIST* ResourceListTranslated;                       //0xc0
    struct _UNICODE_STRING InstancePath;                                    //0xc4
    struct _UNICODE_STRING ServiceName;                                     //0xcc
    struct _DEVICE_OBJECT* DuplicatePDO;                                    //0xd4
    struct _IO_RESOURCE_REQUIREMENTS_LIST* ResourceRequirements;            //0xd8
    enum _INTERFACE_TYPE InterfaceType;                                     //0xdc
    ULONG BusNumber;                                                        //0xe0
    enum _INTERFACE_TYPE ChildInterfaceType;                                //0xe4
    ULONG ChildBusNumber;                                                   //0xe8
    USHORT ChildBusTypeIndex;                                               //0xec
    UCHAR RemovalPolicy;                                                    //0xee
    UCHAR HardwareRemovalPolicy;                                            //0xef
    struct _LIST_ENTRY TargetDeviceNotify;                                  //0xf0
    struct _LIST_ENTRY DeviceArbiterList;                                   //0xf8
    struct _LIST_ENTRY DeviceTranslatorList;                                //0x100
    USHORT NoTranslatorMask;                                                //0x108
    USHORT QueryTranslatorMask;                                             //0x10a
    USHORT NoArbiterMask;                                                   //0x10c
    USHORT QueryArbiterMask;                                                //0x10e
    union
    {
        struct _DEVICE_NODE* LegacyDeviceNode;                              //0x110
        struct _DEVICE_RELATIONS* PendingDeviceRelations;                   //0x110
        VOID* Information;                                                  //0x110
    } OverUsed1;                                                            //0x110
    union
    {
        struct _DEVICE_NODE* NextResourceDeviceNode;                        //0x114
    } OverUsed2;                                                            //0x114
    struct _CM_RESOURCE_LIST* BootResources;                                //0x118
    struct _CM_RESOURCE_LIST* BootResourcesTranslated;                      //0x11c
    ULONG CapabilityFlags;                                                  //0x120
    struct
    {
        enum PROFILE_STATUS DockStatus;                                     //0x124
        struct _LIST_ENTRY ListEntry;                                       //0x128
        USHORT* SerialNumber;                                               //0x130
    } DockInfo;                                                             //0x124
    ULONG DisableableDepends;                                               //0x134
    struct _LIST_ENTRY PendedSetInterfaceState;                             //0x138
    struct _LIST_ENTRY LegacyBusListEntry;                                  //0x140
    ULONG DriverUnloadRetryCount;                                           //0x148
    struct _DEVICE_NODE* PreviousParent;                                    //0x14c
    ULONG DeletedChildren;                                                  //0x150
    ULONG NumaNodeIndex;                                                    //0x154
};
/* Used in */
// _DEVICE_NODE
// _PI_RESOURCE_ARBITER_ENTRY

