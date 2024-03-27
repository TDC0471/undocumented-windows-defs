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
#include <_EXT_IOMMU_TRANSLATION_TYPE.h>
#include <_DEVICE_OBJECT.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_HALP_EMERGENCY_LA_QUEUE_ENTRY.h>
#include <_HALP_DMA_ADAPTER_ALLOCATION_STATE.h>
#include <_SCATTER_GATHER_LIST.h>

//0x280 bytes (sizeof)
struct _ADAPTER_OBJECT
{
    struct _HALP_DMA_ADAPTER_OBJECT AdapterObject;                          //0x0
    struct _HALP_DMA_MASTER_ADAPTER_OBJECT* MasterAdapter;                  //0x98
    struct _LIST_ENTRY WaitQueueEntry;                                      //0xa0
    union
    {
        struct _KDEVICE_QUEUE ChannelWaitQueue;                             //0xb0
        struct
        {
            ULONGLONG ResourceWaitLock;                                     //0xb0
            struct _LIST_ENTRY ResourceWaitQueue;                           //0xb8
            struct _LIST_ENTRY ChannelResourceWaitQueue;                    //0xc8
        };
    };
    UCHAR ResourceQueueBusy;                                                //0xd8
    ULONG MapRegistersPerChannel;                                           //0xe0
    VOID* MapRegisterBase;                                                  //0xe8
    ULONG NumberOfMapRegisters;                                             //0xf0
    ULONG MaxTransferLength;                                                //0xf4
    VOID* CrashDumpRegisterBase[2];                                         //0xf8
    ULONG NumberOfCrashDumpRegisters[2];                                    //0x108
    ULONG CrashDumpRegisterRefCount[2];                                     //0x110
    struct _LIST_ENTRY AdapterCrashDumpList;                                //0x118
    struct _MDL* MapRegisterMdl;                                            //0x128
    ULONGLONG MapRegisterMdlLock;                                           //0x130
    struct _EX_PUSH_LOCK ExpiredLock;                                       //0x138
    VOID* AllocationHandle;                                                 //0x140
    VOID* VirtualAddress;                                                   //0x148
    UCHAR IsAllocationMdlBased;                                             //0x150
    UCHAR NoLocalPool;                                                      //0x151
    UCHAR ExpiredFlag;                                                      //0x152
    struct _WAIT_CONTEXT_BLOCK* CurrentWcb;                                 //0x158
    struct _DMA_TRANSFER_CONTEXT* CurrentTransferContext;                   //0x160
    struct _HALP_DMA_CONTROLLER* DmaController;                             //0x168
    ULONG Controller;                                                       //0x170
    ULONG ChannelNumber;                                                    //0x174
    ULONG RequestLine;                                                      //0x178
    ULONG RequestedChannelCount;                                            //0x17c
    ULONG AllocatedChannelCount;                                            //0x180
    ULONG AllocatedChannels[8];                                             //0x184
    VOID* ChannelAdapter;                                                   //0x1a8
    UCHAR NeedsMapRegisters;                                                //0x1b0
    UCHAR MasterDevice;                                                     //0x1b1
    UCHAR ScatterGather;                                                    //0x1b2
    UCHAR AutoInitialize;                                                   //0x1b3
    UCHAR IgnoreCount;                                                      //0x1b4
    UCHAR CacheCoherent;                                                    //0x1b5
    union
    {
        struct
        {
            UCHAR Dma32BitAddresses;                                        //0x1b8
            UCHAR Dma64BitAddresses;                                        //0x1b9
        };
        ULONG DmaAddressWidth;                                              //0x1b8
    };
    enum _DMA_WIDTH DmaPortWidth;                                           //0x1bc
    union _LARGE_INTEGER DeviceAddress;                                     //0x1c0
    struct _LIST_ENTRY AdapterList;                                         //0x1c8
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x1d8
    struct _HALP_DMA_DOMAIN_OBJECT* DomainPointer;                          //0x1f8
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;                       //0x200
    UCHAR AdapterInUse;                                                     //0x204
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x208
    struct _EXT_IOMMU_DEVICE_ID* DeviceId;                                  //0x210
    VOID* IommuDevice;                                                      //0x218
    struct _MDL* ScatterGatherMdl;                                          //0x220
    ULONGLONG LowMemoryLogicalAddressBase;                                  //0x228
    ULONGLONG LowMemoryLogicalAddressQueueLock;                             //0x230
    struct _LIST_ENTRY LowMemoryLogicalAddressQueue;                        //0x238
    UCHAR LowMemoryLogicalAddressQueueInUse;                                //0x248
    struct _HALP_EMERGENCY_LA_QUEUE_ENTRY LowMemoryLogicalAddressQueueEntry; //0x250
    enum _HALP_DMA_ADAPTER_ALLOCATION_STATE AllocationState;                //0x268
    ULONG ScatterGatherBufferLength;                                        //0x26c
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;                        //0x270
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _DUMP_INITIALIZATION_CONTEXT
// _HALP_DMA_CHANNEL
// _HALP_DMA_DOMAIN_OBJECT

