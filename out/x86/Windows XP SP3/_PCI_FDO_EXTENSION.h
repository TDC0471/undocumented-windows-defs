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

//0xc0 bytes (sizeof)
struct _PCI_FDO_EXTENSION
{
    struct _SINGLE_LIST_ENTRY List;                                         //0x0
    enum PCI_SIGNATURE ExtensionType;                                       //0x4
    struct _PCI_MJ_DISPATCH_TABLE* IrpDispatchTable;                        //0x8
    UCHAR DeviceState;                                                      //0xc
    UCHAR TentativeNextState;                                               //0xd
    struct _KEVENT SecondaryExtLock;                                        //0x10
    struct _DEVICE_OBJECT* PhysicalDeviceObject;                            //0x20
    struct _DEVICE_OBJECT* FunctionalDeviceObject;                          //0x24
    struct _DEVICE_OBJECT* AttachedDeviceObject;                            //0x28
    struct _KEVENT ChildListLock;                                           //0x2c
    struct _PCI_PDO_EXTENSION* ChildPdoList;                                //0x3c
    struct _PCI_FDO_EXTENSION* BusRootFdoExtension;                         //0x40
    struct _PCI_FDO_EXTENSION* ParentFdoExtension;                          //0x44
    struct _PCI_PDO_EXTENSION* ChildBridgePdoList;                          //0x48
    struct _PCI_BUS_INTERFACE_STANDARD* PciBusInterface;                    //0x4c
    UCHAR MaxSubordinateBus;                                                //0x50
    struct _BUS_HANDLER* BusHandler;                                        //0x54
    UCHAR BaseBus;                                                          //0x58
    UCHAR Fake;                                                             //0x59
    UCHAR ChildDelete;                                                      //0x5a
    UCHAR Scanned;                                                          //0x5b
    UCHAR ArbitersInitialized;                                              //0x5c
    UCHAR BrokenVideoHackApplied;                                           //0x5d
    UCHAR Hibernated;                                                       //0x5e
    struct PCI_POWER_STATE PowerState;                                      //0x60
    struct _SINGLE_LIST_ENTRY SecondaryExtension;                           //0xa0
    ULONG ChildWaitWakeCount;                                               //0xa4
    struct _PCI_COMMON_CONFIG* PreservedConfig;                             //0xa8
    struct _PCI_LOCK Lock;                                                  //0xac
    struct
    {
        UCHAR Acquired;                                                     //0xb4
        UCHAR CacheLineSize;                                                //0xb5
        UCHAR LatencyTimer;                                                 //0xb6
        UCHAR EnablePERR;                                                   //0xb7
        UCHAR EnableSERR;                                                   //0xb8
    } HotPlugParameters;                                                    //0xb4
    ULONG BusHackFlags;                                                     //0xbc
};
/* Used in */
// _PCI_ARBITER_INSTANCE
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

