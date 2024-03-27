#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_DEVICE_POWER_STATE.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>

//0x50 bytes (sizeof)
struct PCI_POWER_STATE
{
    enum _SYSTEM_POWER_STATE CurrentSystemState;                            //0x0
    enum _DEVICE_POWER_STATE CurrentDeviceState;                            //0x4
    enum _SYSTEM_POWER_STATE SystemWakeLevel;                               //0x8
    enum _DEVICE_POWER_STATE DeviceWakeLevel;                               //0xc
    enum _DEVICE_POWER_STATE SystemStateMapping[7];                         //0x10
    struct _IRP* WaitWakeIrp;                                               //0x30
    VOID (*SavedCancelRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x38
    LONG Paging;                                                            //0x40
    LONG Hibernate;                                                         //0x44
    LONG CrashDump;                                                         //0x48
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

