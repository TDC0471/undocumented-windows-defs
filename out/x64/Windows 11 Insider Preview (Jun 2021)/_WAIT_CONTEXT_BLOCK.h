#pragma once
/* ------------------ */

#include <_KDEVICE_QUEUE_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_IO_ALLOCATION_ACTION.h>
#include <_DEVICE_OBJECT.h>
#include <_IRP.h>
#include <_KDPC.h>

//0x48 bytes (sizeof)
struct _WAIT_CONTEXT_BLOCK
{
    union
    {
        struct _KDEVICE_QUEUE_ENTRY WaitQueueEntry;                         //0x0
        struct
        {
            struct _LIST_ENTRY DmaWaitEntry;                                //0x0
            ULONG NumberOfChannels;                                         //0x10
            ULONG SyncCallback:1;                                           //0x14
            ULONG DmaContext:1;                                             //0x14
            ULONG ZeroMapRegisters:1;                                       //0x14
            ULONG Reserved:9;                                               //0x14
            ULONG NumberOfRemapPages:20;                                    //0x14
        };
    };
    enum _IO_ALLOCATION_ACTION (*DeviceRoutine)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3, VOID* arg4); //0x18
    VOID* DeviceContext;                                                    //0x20
    ULONG NumberOfMapRegisters;                                             //0x28
    VOID* DeviceObject;                                                     //0x30
    VOID* CurrentIrp;                                                       //0x38
    struct _KDPC* BufferChainingDpc;                                        //0x40
};
/* Used in */
// _ADAPTER_OBJECT
// _DEVICE_OBJECT
// _DMA_TRANSFER_CONTEXT_V1

