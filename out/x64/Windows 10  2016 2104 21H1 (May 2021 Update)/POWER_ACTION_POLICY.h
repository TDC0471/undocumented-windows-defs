#pragma once
/* ------------------ */

#include <POWER_ACTION.h>

//0xc bytes (sizeof)
struct POWER_ACTION_POLICY
{
    enum POWER_ACTION Action;                                               //0x0
    ULONG Flags;                                                            //0x4
    ULONG EventCode;                                                        //0x8
};
/* Used in */
// SYSTEM_POWER_LEVEL
// _SYSTEM_POWER_POLICY

