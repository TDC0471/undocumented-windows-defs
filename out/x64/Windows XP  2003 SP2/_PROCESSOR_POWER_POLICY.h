#pragma once
/* ------------------ */

#include <_PROCESSOR_POWER_POLICY_INFO.h>

//0x4c bytes (sizeof)
struct _PROCESSOR_POWER_POLICY
{
    ULONG Revision;                                                         //0x0
    UCHAR DynamicThrottle;                                                  //0x4
    UCHAR Spare[3];                                                         //0x5
    ULONG DisableCStates:1;                                                 //0x8
    ULONG Reserved:31;                                                      //0x8
    ULONG PolicyCount;                                                      //0xc
    struct _PROCESSOR_POWER_POLICY_INFO Policy[3];                          //0x10
};
