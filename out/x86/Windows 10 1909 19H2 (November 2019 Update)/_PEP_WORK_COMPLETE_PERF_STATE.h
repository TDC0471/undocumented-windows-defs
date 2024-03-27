#pragma once
/* ------------------ */

#include <POHANDLE__.h>

//0xc bytes (sizeof)
struct _PEP_WORK_COMPLETE_PERF_STATE
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    ULONG Component;                                                        //0x4
    UCHAR Succeeded;                                                        //0x8
};
/* Used in */
// _PEP_WORK_INFORMATION

