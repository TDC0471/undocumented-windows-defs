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

//0xc8 bytes (sizeof)
struct _PCI_PDO_EXTENSION
{
    struct _PCI_PDO_EXTENSION* Next;                                        //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x4
    struct _PCI_MJ_DISPATCH_TABLE* IrpDispatchTable;                        //0x8
    UCHAR DeviceState;                                                      //0xc
    UCHAR TentativeNextState;                                               //0xd
    struct _KEVENT SecondaryExtLock;                                        //0x10
    struct _PCI_SLOT_NUMBER Slot;                                           //0x20
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x24
    struct _PCI_FDO_EXTENSION* ParentFdoExtension;                          //0x28
    struct _SINGLE_LIST_ENTRY SecondaryExtension;                           //0x2c
    ULONG BusInterfaceReferenceCount;                                       //0x30
    ULONG AgpInterfaceReferenceCount;                                       //0x34
    USHORT VendorId;                                                        //0x38
    USHORT DeviceId;                                                        //0x3a
    USHORT SubsystemVendorId;                                               //0x3c
    USHORT SubsystemId;                                                     //0x3e
    UCHAR RevisionId;                                                       //0x40
    UCHAR ProgIf;                                                           //0x41
    UCHAR SubClass;                                                         //0x42
    UCHAR BaseClass;                                                        //0x43
    UCHAR AdditionalResourceCount;                                          //0x44
    UCHAR AdjustedInterruptLine;                                            //0x45
    UCHAR InterruptPin;                                                     //0x46
    UCHAR RawInterruptLine;                                                 //0x47
    UCHAR CapabilitiesPtr;                                                  //0x48
    UCHAR SavedLatencyTimer;                                                //0x49
    UCHAR SavedCacheLineSize;                                               //0x4a
    UCHAR HeaderType;                                                       //0x4b
    UCHAR NotPresent;                                                       //0x4c
    UCHAR ReportedMissing;                                                  //0x4d
    UCHAR ExpectedWritebackFailure;                                         //0x4e
    UCHAR NoTouchPmeEnable;                                                 //0x4f
    UCHAR LegacyDriver;                                                     //0x50
    UCHAR UpdateHardware;                                                   //0x51
    UCHAR MovedDevice;                                                      //0x52
    UCHAR DisablePowerDown;                                                 //0x53
    UCHAR NeedsHotPlugConfiguration;                                        //0x54
    UCHAR SwitchedIDEToNativeMode;                                          //0x55
    UCHAR BIOSAllowsIDESwitchToNativeMode;                                  //0x56
    UCHAR IoSpaceUnderNativeIdeControl;                                     //0x57
    UCHAR OnDebugPath;                                                      //0x58
    struct PCI_POWER_STATE PowerState;                                      //0x5c
    union PCI_HEADER_TYPE_DEPENDENT Dependent;                              //0x9c
    ULONGLONG HackFlags;                                                    //0xa0
    struct PCI_FUNCTION_RESOURCES* Resources;                               //0xa8
    struct _PCI_FDO_EXTENSION* BridgeFdoExtension;                          //0xac
    struct _PCI_PDO_EXTENSION* NextBridge;                                  //0xb0
    struct _PCI_PDO_EXTENSION* NextHashEntry;                               //0xb4
    struct _PCI_LOCK Lock;                                                  //0xb8
    struct _PCI_PMC PowerCapabilities;                                      //0xc0
    UCHAR TargetAgpCapabilityId;                                            //0xc2
    USHORT CommandEnables;                                                  //0xc4
    USHORT InitialCommand;                                                  //0xc6
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

