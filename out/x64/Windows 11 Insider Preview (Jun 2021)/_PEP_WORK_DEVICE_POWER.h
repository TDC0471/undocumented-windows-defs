#pragma once
/* ------------------ */

#include <POHANDLE__.h>

//0x10 bytes (sizeof)
struct _PEP_WORK_DEVICE_POWER
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    UCHAR PowerRequired;                                                    //0x8
};
/* Used in */
// _PEP_WORK_INFORMATION

