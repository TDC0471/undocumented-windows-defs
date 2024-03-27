#pragma once
/* ------------------ */

#include <POHANDLE__.h>
#include <_GUID.h>

//0x1c bytes (sizeof)
struct _PEP_WORK_POWER_CONTROL
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    struct _GUID* PowerControlCode;                                         //0x4
    VOID* RequestContext;                                                   //0x8
    VOID* InBuffer;                                                         //0xc
    ULONG InBufferSize;                                                     //0x10
    VOID* OutBuffer;                                                        //0x14
    ULONG OutBufferSize;                                                    //0x18
};
/* Used in */
// _PEP_WORK_INFORMATION

