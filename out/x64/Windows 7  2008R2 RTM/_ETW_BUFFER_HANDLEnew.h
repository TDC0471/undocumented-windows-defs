#pragma once
/* ------------------ */

#include <_WMI_BUFFER_HEADER.h>
#include <_EX_FAST_REF.h>

//0x10 bytes (sizeof)
struct _ETW_BUFFER_HANDLE
{
    struct _WMI_BUFFER_HEADER* TraceBuffer;                                 //0x0
    struct _EX_FAST_REF* BufferFastRef;                                     //0x8
};
