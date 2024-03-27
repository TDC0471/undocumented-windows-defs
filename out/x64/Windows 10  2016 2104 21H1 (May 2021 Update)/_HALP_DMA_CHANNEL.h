#pragma once
/* ------------------ */

#include <_DMA_ADAPTER.h>
#include <_DEVICE_OBJECT.h>
#include <DMA_COMPLETION_STATUS.h>
#include <_ADAPTER_OBJECT.h>
#include <_DMA_INTERRUPT_TYPE.h>
#include <_KDPC.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>

//0xa0 bytes (sizeof)
struct _HALP_DMA_CHANNEL
{
    ULONG ChannelNumber;                                                    //0x0
    UCHAR Initialized;                                                      //0x4
    UCHAR Busy;                                                             //0x5
    UCHAR Complete;                                                         //0x6
    VOID (*CurrentCompletionRoutine)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, enum DMA_COMPLETION_STATUS arg4); //0x8
    VOID* CurrentCompletionContext;                                         //0x10
    struct _ADAPTER_OBJECT* CurrentChildAdapter;                            //0x18
    enum _DMA_INTERRUPT_TYPE CurrentInterruptType;                          //0x20
    struct _KDPC Dpc;                                                       //0x28
    UCHAR GeneratesInterrupt;                                               //0x68
    LONG Gsi;                                                               //0x6c
    enum _KINTERRUPT_POLARITY InterruptPolarity;                            //0x70
    enum _KINTERRUPT_MODE InterruptMode;                                    //0x74
    ULONG CommonBufferLength;                                               //0x78
    VOID* CommonBufferVirtualAddress;                                       //0x80
    union _LARGE_INTEGER CommonBufferLogicalAddress;                        //0x88
    struct _LIST_ENTRY AdapterQueue;                                        //0x90
};
/* Used in */
// _HALP_DMA_CONTROLLER

