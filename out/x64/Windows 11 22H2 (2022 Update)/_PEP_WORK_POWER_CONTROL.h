#pragma once
/* ------------------ */

#include <POHANDLE__.h>
#include <_GUID.h>

//0x38 bytes (sizeof)
struct _PEP_WORK_POWER_CONTROL
{
    struct POHANDLE__* DeviceHandle;                                        //0x0
    struct _GUID* PowerControlCode;                                         //0x8
    VOID* RequestContext;                                                   //0x10
    VOID* InBuffer;                                                         //0x18
    ULONGLONG InBufferSize;                                                 //0x20
    VOID* OutBuffer;                                                        //0x28
    ULONGLONG OutBufferSize;                                                //0x30
};
/* Used in */
// _PEP_WORK_INFORMATION

