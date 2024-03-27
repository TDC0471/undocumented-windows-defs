#pragma once
/* ------------------ */

#include <_IRP.h>
#include <_ETHREAD.h>

//0x100 bytes (sizeof)
struct _IOV_FORCED_PENDING_TRACE
{
    struct _IRP* Irp;                                                       //0x0
    struct _ETHREAD* Thread;                                                //0x4
    VOID* StackTrace[62];                                                   //0x8
};
