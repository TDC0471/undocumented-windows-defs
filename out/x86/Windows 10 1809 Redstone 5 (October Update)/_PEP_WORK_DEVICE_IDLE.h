#pragma once
/* ------------------ */

#include <POHANDLE__.h>

//0x8 bytes (sizeof)
struct _PEP_WORK_DEVICE_IDLE
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    UCHAR IgnoreIdleTimeout;                                                //0x4
};
/* Used in */
// _PEP_WORK_INFORMATION

