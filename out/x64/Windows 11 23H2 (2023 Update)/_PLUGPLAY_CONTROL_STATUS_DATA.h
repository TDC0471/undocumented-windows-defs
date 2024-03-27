#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>

//0x28 bytes (sizeof)
struct _PLUGPLAY_CONTROL_STATUS_DATA
{
    struct _UNICODE_STRING DeviceInstance;                                  //0x0
    ULONG Operation;                                                        //0x10
    ULONG DeviceStatus;                                                     //0x14
    ULONG DeviceProblem;                                                    //0x18
    ULONG Flags;                                                            //0x1c
    LONG ProblemStatus;                                                     //0x20
};
/* Used in */
// _PNP_DEVICE_ACTION_REQUEST_ARGUMENT

