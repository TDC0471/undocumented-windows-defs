#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_DEVICE_OBJECT.h>

//0x20 bytes (sizeof)
struct _POP_FX_DRIVER_CALLBACKS
{
    VOID (*ComponentActive)(VOID* arg1, ULONG arg2);                        //0x0
    VOID (*ComponentIdle)(VOID* arg1, ULONG arg2);                          //0x4
    VOID (*ComponentIdleState)(VOID* arg1, ULONG arg2, ULONG arg3);         //0x8
    VOID (*DevicePowerRequired)(VOID* arg1);                                //0xc
    VOID (*DevicePowerNotRequired)(VOID* arg1);                             //0x10
    LONG (*PowerControl)(VOID* arg1, struct _GUID* arg2, VOID* arg3, ULONG arg4, VOID* arg5, ULONG arg6, ULONG* arg7); //0x14
    VOID (*ComponentCriticalTransition)(VOID* arg1, ULONG arg2, UCHAR arg3); //0x18
    VOID (*DripsWatchdogCallback)(VOID* arg1, struct _DEVICE_OBJECT* arg2, ULONG arg3); //0x1c
};
/* Used in */
// _POP_FX_DEVICE

