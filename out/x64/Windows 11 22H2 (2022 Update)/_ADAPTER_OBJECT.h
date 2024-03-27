#pragma once
/* ------------------ */

#include <_HALP_DMA_ADAPTER_OBJECT.h>
#include <_HALP_DMA_MASTER_ADAPTER_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KDEVICE_QUEUE.h>
#include <_MDL.h>
#include <_EX_PUSH_LOCK.h>
#include <_WAIT_CONTEXT_BLOCK.h>
#include <_DMA_TRANSFER_CONTEXT.h>
#include <_HALP_DMA_CONTROLLER.h>
#include <_DMA_WIDTH.h>
#include <_LARGE_INTEGER.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_HALP_DMA_DOMAIN_OBJECT.h>
#include <_HALP_DMA_TRANSLATION_TYPE.h>
#include <_DEVICE_OBJECT.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_IOMMU_DMA_DEVICE.h>
#include <_IOMMU_DMA_LOGICAL_ADDRESS_TOKEN.h>
#include <_HALP_EMERGENCY_LA_QUEUE_ENTRY.h>
#include <_HALP_DMA_ADAPTER_ALLOCATION_STATE.h>
#include <_SCATTER_GATHER_LIST.h>

//0x288 bytes (sizeof)
struct _ADAPTER_OBJECT
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;                          //0x0
    struct _HALP_DMA_MASTER_ADAPTER_OBJECT* MasterAdapter;                  //0xa0
    struct _LIST_ENTRY WaitQueueEntry;                                      //0xa8
    union
    {
        struct _KDEVICE_QUEUE ChannelWaitQueue;                             //0xb8
        struct
        {
            ULONGLONG ResourceWaitLock;                                     //0xb8
            struct _LIST_ENTRY ResourceWaitQueue;                           //0xc0
            struct _LIST_ENTRY ChannelResourceWaitQueue;                    //0xd0
        };
    };
    UCHAR ResourceQueueBusy;                                                //0xe0
    ULONG MapRegistersPerChannel;                                           //0xe8
    VOID* MapRegisterBase;                                                  //0xf0
    ULONG NumberOfMapRegisters;                                             //0xf8
    ULONG MaxTransferLength;                                                //0xfc
    VOID* CrashDumpRegisterBase[2];                                         //0x100
    ULONG NumberOfCrashDumpRegisters[2];                                    //0x110
    ULONG CrashDumpRegisterRefCount[2];                                     //0x118
    struct _LIST_ENTRY AdapterCrashDumpList;                                //0x120
    struct _MDL* MapRegisterMdl;                                            //0x130
    ULONGLONG MapRegisterMdlLock;                                           //0x138
    struct _EX_PUSH_LOCK ExpiredLock;                                       //0x140
    VOID* AllocationHandle;                                                 //0x148
    VOID* VirtualAddress;                                                   //0x150
    UCHAR IsAllocationMdlBased;                                             //0x158
    UCHAR NoLocalPool;                                                      //0x159
    UCHAR ExpiredFlag;                                                      //0x15a
    struct _WAIT_CONTEXT_BLOCK* CurrentWcb;                                 //0x160
    struct _DMA_TRANSFER_CONTEXT* CurrentTransferContext;                   //0x168
    struct _HALP_DMA_CONTROLLER* DmaController;                             //0x170
    ULONG Controller;                                                       //0x178
    ULONG ChannelNumber;                                                    //0x17c
    ULONG RequestLine;                                                      //0x180
    ULONG RequestedChannelCount;                                            //0x184
    ULONG AllocatedChannelCount;                                            //0x188
    ULONG AllocatedChannels[8];                                             //0x18c
    VOID* ChannelAdapter;                                                   //0x1b0
    UCHAR NeedsMapRegisters;                                                //0x1b8
    UCHAR MasterDevice;                                                     //0x1b9
    UCHAR ScatterGather;                                                    //0x1ba
    UCHAR AutoInitialize;                                                   //0x1bb
    UCHAR IgnoreCount;                                                      //0x1bc
    UCHAR CacheCoherent;                                                    //0x1bd
    union
    {
        struct
        {
            UCHAR Dma32BitAddresses;                                        //0x1c0
            UCHAR Dma64BitAddresses;                                        //0x1c1
        };
        ULONG DmaAddressWidth;                                              //0x1c0
    };
    enum _DMA_WIDTH DmaPortWidth;                                           //0x1c4
    union _LARGE_INTEGER DeviceAddress;                                     //0x1c8
    struct _LIST_ENTRY AdapterList;                                         //0x1d0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x1e0
    struct _HALP_DMA_DOMAIN_OBJECT* DomainPointer;                          //0x200
    enum _HALP_DMA_TRANSLATION_TYPE TranslationType;                        //0x208
    UCHAR AdapterInUse;                                                     //0x20c
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x210
    struct _EXT_IOMMU_DEVICE_ID* DeviceId;                                  //0x218
    struct _IOMMU_DMA_DEVICE* IommuDevice;                                  //0x220
    struct _MDL* ScatterGatherMdl;                                          //0x228
    struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN* LowMemoryLogicalAddressToken;  //0x230
    ULONGLONG LowMemoryLogicalAddressQueueLock;                             //0x238
    struct _LIST_ENTRY LowMemoryLogicalAddressQueue;                        //0x240
    UCHAR LowMemoryLogicalAddressQueueInUse;                                //0x250
    struct _HALP_EMERGENCY_LA_QUEUE_ENTRY LowMemoryLogicalAddressQueueEntry; //0x258
    enum _HALP_DMA_ADAPTER_ALLOCATION_STATE AllocationState;                //0x270
    ULONG ScatterGatherBufferLength;                                        //0x274
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;                        //0x278
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _DUMP_INITIALIZATION_CONTEXT
// _HALP_DMA_CHANNEL
// _HALP_DMA_DOMAIN_OBJECT

