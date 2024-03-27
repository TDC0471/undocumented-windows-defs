#pragma once
/* ------------------ */

#include <PEPHANDLE__.h>

//0x8 bytes (sizeof)
struct _PEP_CRASHDUMP_INFORMATION
{
    struct PEPHANDLE__* DeviceHandle;                                       //0x0
    VOID* DeviceContext;                                                    //0x4
};
/* Used in */
// _POP_FX_DEVICE

