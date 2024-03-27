#pragma once
/* ------------------ */

#include <_KDEVICE_QUEUE_ENTRY.h>
#include <_IO_ALLOCATION_ACTION.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>
#include <_KDPC.h>

//0x28 bytes (sizeof)
struct _WAIT_CONTEXT_BLOCK
{
    struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;                             //0x0
    enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3, VOID* arg4); //0x10
    VOID* DeviceContext;                                                    //0x14
    ULONG NumberOfMapRegisters;                                             //0x18
    VOID* DeviceObject;                                                     //0x1c
    VOID* CurrentIrp;                                                       //0x20
    struct _KDPC* BufferChainingDpc;                                        //0x24
};
/* Used in */
// _DEVICE_OBJECT

