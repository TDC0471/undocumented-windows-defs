#pragma once
/* ------------------ */

#include <_PCI_PDO_EXTENSION.h>
#include <PCI_SIGNATURE.h>
#include <_PCI_MJ_DISPATCH_TABLE.h>
#include <_KEVENT.h>
#include <_PCI_SLOT_NUMBER.h>
#include <_DEVICE_OBJECT.h>
#include <_PCI_FDO_EXTENSION.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <PCI_POWER_STATE.h>
#include <PCI_HEADER_TYPE_DEPENDENT.h>
#include <PCI_FUNCTION_RESOURCES.h>
#include <_PCI_LOCK.h>
#include <_PCI_PMC.h>

//0x120 bytes (sizeof)
struct _PCI_PDO_EXTENSION
{
    struct _PCI_PDO_EXTENSION* Next;                                        //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x8
    struct _PCI_MJ_DISPATCH_TABLE* IrpDispatchTable;                        //0x10
    UCHAR DeviceState;                                                      //0x18
    UCHAR TentativeNextState;                                               //0x19
    struct _KEVENT SecondaryExtLock;                                        //0x20
    struct _PCI_SLOT_NUMBER Slot;                                           //0x38
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x40
    struct _PCI_FDO_EXTENSION* ParentFdoExtension;                          //0x48
    struct _SINGLE_LIST_ENTRY SecondaryExtension;                           //0x50
    ULONG BusInterfaceReferenceCount;                                       //0x58
    ULONG AgpInterfaceReferenceCount;                                       //0x5c
    USHORT VendorId;                                                        //0x60
    USHORT DeviceId;                                                        //0x62
    USHORT SubsystemVendorId;                                               //0x64
    USHORT SubsystemId;                                                     //0x66
    UCHAR RevisionId;                                                       //0x68
    UCHAR ProgIf;                                                           //0x69
    UCHAR SubClass;                                                         //0x6a
    UCHAR BaseClass;                                                        //0x6b
    UCHAR AdditionalResourceCount;                                          //0x6c
    UCHAR AdjustedInterruptLine;                                            //0x6d
    UCHAR InterruptPin;                                                     //0x6e
    UCHAR RawInterruptLine;                                                 //0x6f
    UCHAR CapabilitiesPtr;                                                  //0x70
    UCHAR SavedLatencyTimer;                                                //0x71
    UCHAR SavedCacheLineSize;                                               //0x72
    UCHAR HeaderType;                                                       //0x73
    UCHAR NotPresent;                                                       //0x74
    UCHAR ReportedMissing;                                                  //0x75
    UCHAR ExpectedWritebackFailure;                                         //0x76
    UCHAR NoTouchPmeEnable;                                                 //0x77
    UCHAR LegacyDriver;                                                     //0x78
    UCHAR UpdateHardware;                                                   //0x79
    UCHAR MovedDevice;                                                      //0x7a
    UCHAR DisablePowerDown;                                                 //0x7b
    UCHAR NeedsHotPlugConfiguration;                                        //0x7c
    UCHAR IDEInNativeMode;                                                  //0x7d
    UCHAR BIOSAllowsIDESwitchToNativeMode;                                  //0x7e
    UCHAR IoSpaceUnderNativeIdeControl;                                     //0x7f
    UCHAR OnDebugPath;                                                      //0x80
    UCHAR IoSpaceNotRequired;                                               //0x81
    struct PCI_POWER_STATE PowerState;                                      //0x88
    union PCI_HEADER_TYPE_DEPENDENT Dependent;                              //0xd8
    ULONGLONG HackFlags;                                                    //0xe0
    struct PCI_FUNCTION_RESOURCES* Resources;                               //0xe8
    struct _PCI_FDO_EXTENSION* BridgeFdoExtension;                          //0xf0
    struct _PCI_PDO_EXTENSION* NextBridge;                                  //0xf8
    struct _PCI_PDO_EXTENSION* NextHashEntry;                               //0x100
    struct _PCI_LOCK Lock;                                                  //0x108
    struct _PCI_PMC PowerCapabilities;                                      //0x118
    UCHAR TargetAgpCapabilityId;                                            //0x11a
    USHORT CommandEnables;                                                  //0x11c
    USHORT InitialCommand;                                                  //0x11e
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

