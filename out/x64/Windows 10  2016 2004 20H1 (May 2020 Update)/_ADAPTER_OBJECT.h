#pragma once
/* ------------------ */

#include <_HALP_DMA_ADAPTER_OBJECT.h>
#include <_HALP_DMA_MASTER_ADAPTER_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KDEVICE_QUEUE.h>
#include <_MDL.h>
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

//0x278 bytes (sizeof)
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
    VOID* AllocationHandle;                                                 //0x138
    VOID* VirtualAddress;                                                   //0x140
    UCHAR IsAllocationMdlBased;                                             //0x148
    UCHAR NoLocalPool;                                                      //0x149
    struct _WAIT_CONTEXT_BLOCK* CurrentWcb;                                 //0x150
    struct _DMA_TRANSFER_CONTEXT* CurrentTransferContext;                   //0x158
    struct _HALP_DMA_CONTROLLER* DmaController;                             //0x160
    ULONG Controller;                                                       //0x168
    ULONG ChannelNumber;                                                    //0x16c
    ULONG RequestLine;                                                      //0x170
    ULONG RequestedChannelCount;                                            //0x174
    ULONG AllocatedChannelCount;                                            //0x178
    ULONG AllocatedChannels[8];                                             //0x17c
    VOID* ChannelAdapter;                                                   //0x1a0
    UCHAR NeedsMapRegisters;                                                //0x1a8
    UCHAR MasterDevice;                                                     //0x1a9
    UCHAR ScatterGather;                                                    //0x1aa
    UCHAR AutoInitialize;                                                   //0x1ab
    UCHAR IgnoreCount;                                                      //0x1ac
    UCHAR CacheCoherent;                                                    //0x1ad
    union
    {
        struct
        {
            UCHAR Dma32BitAddresses;                                        //0x1b0
            UCHAR Dma64BitAddresses;                                        //0x1b1
        };
        ULONG DmaAddressWidth;                                              //0x1b0
    };
    enum _DMA_WIDTH DmaPortWidth;                                           //0x1b4
    union _LARGE_INTEGER DeviceAddress;                                     //0x1b8
    struct _LIST_ENTRY AdapterList;                                         //0x1c0
    struct _WORK_QUEUE_ITEM WorkItem;                                       //0x1d0
    struct _HALP_DMA_DOMAIN_OBJECT* DomainPointer;                          //0x1f0
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;                       //0x1f8
    UCHAR AdapterInUse;                                                     //0x1fc
    struct _DEVICE_OBJECT* DeviceObject;                                    //0x200
    struct _EXT_IOMMU_DEVICE_ID* DeviceId;                                  //0x208
    VOID* IommuDevice;                                                      //0x210
    struct _MDL* ScatterGatherMdl;                                          //0x218
    ULONGLONG LowMemoryLogicalAddressBase;                                  //0x220
    ULONGLONG LowMemoryLogicalAddressQueueLock;                             //0x228
    struct _LIST_ENTRY LowMemoryLogicalAddressQueue;                        //0x230
    UCHAR LowMemoryLogicalAddressQueueInUse;                                //0x240
    struct _HALP_EMERGENCY_LA_QUEUE_ENTRY LowMemoryLogicalAddressQueueEntry; //0x248
    enum _HALP_DMA_ADAPTER_ALLOCATION_STATE AllocationState;                //0x260
    ULONG ScatterGatherBufferLength;                                        //0x264
    struct _SCATTER_GATHER_LIST ScatterGatherBuffer;                        //0x268
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _DUMP_INITIALIZATION_CONTEXT
// _HALP_DMA_CHANNEL
// _HALP_DMA_DOMAIN_OBJECT

