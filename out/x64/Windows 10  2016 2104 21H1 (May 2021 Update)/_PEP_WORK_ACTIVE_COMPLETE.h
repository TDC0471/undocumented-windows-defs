#pragma once
/* ------------------ */

#include <POHANDLE__.h>

//0x10 bytes (sizeof)
struct _PEP_WORK_ACTIVE_COMPLETE
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    ULONG Component;                                                        //0x8
};
/* Used in */
// _PEP_WORK_INFORMATION

