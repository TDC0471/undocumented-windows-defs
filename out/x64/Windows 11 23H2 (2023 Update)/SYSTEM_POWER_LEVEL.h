#pragma once
/* ------------------ */

#include <POWER_ACTION_POLICY.h>
#include <_SYSTEM_POWER_STATE.h>

//0x18 bytes (sizeof)
struct SYSTEM_POWER_LEVEL
{
    UCHAR Enable;                                                           //0x0
    UCHAR Spare[3];                                                         //0x1
    ULONG BatteryLevel;                                                     //0x4
    struct POWER_ACTION_POLICY PowerPolicy;                                 //0x8
    enum _SYSTEM_POWER_STATE MinSystemState;                                //0x14
};
/* Used in */
// _SYSTEM_POWER_POLICY

