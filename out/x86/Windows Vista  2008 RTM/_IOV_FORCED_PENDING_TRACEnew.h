#pragma once
/* ------------------ */

#include <_IRP.h>

//0x100 bytes (sizeof)
struct _IOV_FORCED_PENDING_TRACE
{
    struct _IRP* Irp;                                                       //0x0
    VOID* StackTrace[63];                                                   //0x4
};
