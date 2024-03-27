#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <PCI_SIGNATURE.h>
#include <_PCI_MJ_DISPATCH_TABLE.h>
#include <_KEVENT.h>
#include <_DEVICE_OBJECT.h>
#include <_PCI_PDO_EXTENSION.h>
#include <_PCI_FDO_EXTENSION.h>
#include <_PCI_BUS_INTERFACE_STANDARD.h>
#include <_BUS_HANDLER.h>
#include <PCI_POWER_STATE.h>
#include <_PCI_COMMON_CONFIG.h>
#include <_PCI_LOCK.h>

//0x130 bytes (sizeof)
struct _PCI_FDO_EXTENSION
{
    struct _SINGLE_LIST_ENTRY List;                                         //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x8
    struct _PCI_MJ_DISPATCH_TABLE* IrpDispatchTable;                        //0x10
    UCHAR DeviceState;                                                      //0x18
    UCHAR TentativeNextState;                                               //0x19
    struct _KEVENT SecondaryExtLock;                                        //0x20
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x38
    struct _DEVICE_OBJECT* FunctionalDeviceObject;                          //0x40
    struct _DEVICE_OBJECT* AttachedDeviceObject;                            //0x48
    struct _KEVENT ChildListLock;                                           //0x50
    struct _PCI_PDO_EXTENSION* ChildPdoList;                                //0x68
    struct _PCI_FDO_EXTENSION* BusRootFdoExtension;                         //0x70
    struct _PCI_FDO_EXTENSION* ParentFdoExtension;                          //0x78
    struct _PCI_PDO_EXTENSION* ChildBridgePdoList;                          //0x80
    struct _PCI_BUS_INTERFACE_STANDARD* PciBusInterface;                    //0x88
    UCHAR MaxSubordinateBus;                                                //0x90
    struct _BUS_HANDLER* BusHandler;                                        //0x98
    UCHAR BaseBus;                                                          //0xa0
    UCHAR Fake;                                                             //0xa1
    UCHAR ChildDelete;                                                      //0xa2
    UCHAR Scanned;                                                          //0xa3
    UCHAR ArbitersInitialized;                                              //0xa4
    UCHAR BrokenVideoHackApplied;                                           //0xa5
    UCHAR Hibernated;                                                       //0xa6
    struct PCI_POWER_STATE PowerState;                                      //0xa8
    struct _SINGLE_LIST_ENTRY SecondaryExtension;                           //0xf8
    ULONG ChildWaitWakeCount;                                               //0x100
    struct _PCI_COMMON_CONFIG* PreservedConfig;                             //0x108
    struct _PCI_LOCK Lock;                                                  //0x110
    struct
    {
        UCHAR Acquired;                                                     //0x120
        UCHAR CacheLineSize;                                                //0x121
        UCHAR LatencyTimer;                                                 //0x122
        UCHAR EnablePERR;                                                   //0x123
        UCHAR EnableSERR;                                                   //0x124
    } HotPlugParameters;                                                    //0x120
    ULONG BusHackFlags;                                                     //0x128
};
/* Used in */
// _PCI_ARBITER_INSTANCE
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

