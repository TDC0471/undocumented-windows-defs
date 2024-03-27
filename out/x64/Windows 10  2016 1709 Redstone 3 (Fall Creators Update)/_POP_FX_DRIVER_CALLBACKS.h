#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_DEVICE_OBJECT.h>

//0x40 bytes (sizeof)
struct _POP_FX_DRIVER_CALLBACKS
{
    VOID (*ComponentActive)(VOID* arg1, ULONG arg2);                        //0x0
    VOID (*ComponentIdle)(VOID* arg1, ULONG arg2);                          //0x8
    VOID (*ComponentIdleState)(VOID* arg1, ULONG arg2, ULONG arg3);         //0x10
    VOID (*DevicePowerRequired)(VOID* arg1);                                //0x18
    VOID (*DevicePowerNotRequired)(VOID* arg1);                             //0x20
    LONG (*PowerControl)(VOID* arg1, struct _GUID* arg2, VOID* arg3, ULONGLONG arg4, VOID* arg5, ULONGLONG arg6, ULONGLONG* arg7); //0x28
    VOID (*ComponentCriticalTransition)(VOID* arg1, ULONG arg2, UCHAR arg3); //0x30
    VOID (*DripsWatchdogCallback)(VOID* arg1, struct _DEVICE_OBJECT* arg2, ULONG arg3); //0x38
};
/* Used in */
// _POP_FX_DEVICE

