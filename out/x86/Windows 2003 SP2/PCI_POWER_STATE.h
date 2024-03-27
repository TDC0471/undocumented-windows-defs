#pragma once
/* ------------------ */

#include <_SYSTEM_POWER_STATE.h>
#include <_DEVICE_POWER_STATE.h>
#include <_IRP.h>
#include <_DEVICE_OBJECT.h>

//0x40 bytes (sizeof)
struct PCI_POWER_STATE
{
    enum _SYSTEM_POWER_STATE CurrentSystemState;                            //0x0
    enum _DEVICE_POWER_STATE CurrentDeviceState;                            //0x4
    enum _SYSTEM_POWER_STATE SystemWakeLevel;                               //0x8
    enum _DEVICE_POWER_STATE DeviceWakeLevel;                               //0xc
    enum _DEVICE_POWER_STATE SystemStateMapping[7];                         //0x10
    struct _IRP* WaitWakeIrp;                                               //0x2c
    VOID (*SavedCancelRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2); //0x30
    LONG Paging;                                                            //0x34
    LONG Hibernate;                                                         //0x38
    LONG CrashDump;                                                         //0x3c
};
/* Used in */
// _PCI_FDO_EXTENSION
// _PCI_PDO_EXTENSION

