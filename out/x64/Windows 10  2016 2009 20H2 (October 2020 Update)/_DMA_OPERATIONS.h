#pragma once
/* ------------------ */

#include <_DMA_ADAPTER.h>
#include <_LARGE_INTEGER.h>
#include <_DEVICE_OBJECT.h>
#include <_IO_ALLOCATION_ACTION.h>
#include <_IRP.h>
#include <_MDL.h>
#include <_SCATTER_GATHER_LIST.h>
#include <_DMA_ADAPTER_INFO.h>
#include <_DMA_TRANSFER_INFO.h>
#include <DMA_COMPLETION_STATUS.h>
#include <_MEMORY_CACHING_TYPE.h>
#include <_DMA_COMMON_BUFFER_VECTOR.h>

//0x138 bytes (sizeof)
struct _DMA_OPERATIONS
{
    ULONG Size;                                                             //0x0
    VOID (*PutDmaAdapter)(struct _DMA_ADAPTER* arg1);                       //0x8
    VOID* (*AllocateCommonBuffer)(struct _DMA_ADAPTER* arg1, ULONG arg2, union _LARGE_INTEGER* arg3, UCHAR arg4); //0x10
    VOID (*FreeCommonBuffer)(struct _DMA_ADAPTER* arg1, ULONG arg2, union _LARGE_INTEGER arg3, VOID* arg4, UCHAR arg5); //0x18
    LONG (*AllocateAdapterChannel)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, ULONG arg3, enum _IO_ALLOCATION_ACTION (*arg4)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3, VOID* arg4), VOID* arg5); //0x20
    UCHAR (*FlushAdapterBuffers)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, VOID* arg3, VOID* arg4, ULONG arg5, UCHAR arg6); //0x28
    VOID (*FreeAdapterChannel)(struct _DMA_ADAPTER* arg1);                  //0x30
    VOID (*FreeMapRegisters)(struct _DMA_ADAPTER* arg1, VOID* arg2, ULONG arg3); //0x38
    union _LARGE_INTEGER (*MapTransfer)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, VOID* arg3, VOID* arg4, ULONG* arg5, UCHAR arg6); //0x40
    ULONG (*GetDmaAlignment)(struct _DMA_ADAPTER* arg1);                    //0x48
    ULONG (*ReadDmaCounter)(struct _DMA_ADAPTER* arg1);                     //0x50
    LONG (*GetScatterGatherList)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, struct _MDL* arg3, VOID* arg4, ULONG arg5, VOID (*arg6)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, struct _SCATTER_GATHER_LIST* arg3, VOID* arg4), VOID* arg7, UCHAR arg8); //0x58
    VOID (*PutScatterGatherList)(struct _DMA_ADAPTER* arg1, struct _SCATTER_GATHER_LIST* arg2, UCHAR arg3); //0x60
    LONG (*CalculateScatterGatherList)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, VOID* arg3, ULONG arg4, ULONG* arg5, ULONG* arg6); //0x68
    LONG (*BuildScatterGatherList)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, struct _MDL* arg3, VOID* arg4, ULONG arg5, VOID (*arg6)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, struct _SCATTER_GATHER_LIST* arg3, VOID* arg4), VOID* arg7, UCHAR arg8, VOID* arg9, ULONG arg10); //0x70
    LONG (*BuildMdlFromScatterGatherList)(struct _DMA_ADAPTER* arg1, struct _SCATTER_GATHER_LIST* arg2, struct _MDL* arg3, struct _MDL** arg4); //0x78
    LONG (*GetDmaAdapterInfo)(struct _DMA_ADAPTER* arg1, struct _DMA_ADAPTER_INFO* arg2); //0x80
    LONG (*GetDmaTransferInfo)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, ULONGLONG arg3, ULONG arg4, UCHAR arg5, struct _DMA_TRANSFER_INFO* arg6); //0x88
    LONG (*InitializeDmaTransferContext)(struct _DMA_ADAPTER* arg1, VOID* arg2); //0x90
    VOID* (*AllocateCommonBufferEx)(struct _DMA_ADAPTER* arg1, union _LARGE_INTEGER* arg2, ULONG arg3, union _LARGE_INTEGER* arg4, UCHAR arg5, ULONG arg6); //0x98
    LONG (*AllocateAdapterChannelEx)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, ULONG arg4, ULONG arg5, enum _IO_ALLOCATION_ACTION (*arg6)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, VOID* arg3, VOID* arg4), VOID* arg7, VOID** arg8); //0xa0
    LONG (*ConfigureAdapterChannel)(struct _DMA_ADAPTER* arg1, ULONG arg2, VOID* arg3); //0xa8
    UCHAR (*CancelAdapterChannel)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3); //0xb0
    LONG (*MapTransferEx)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, VOID* arg3, ULONGLONG arg4, ULONG arg5, ULONG* arg6, UCHAR arg7, struct _SCATTER_GATHER_LIST* arg8, ULONG arg9, VOID (*arg10)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, enum DMA_COMPLETION_STATUS arg4), VOID* arg11); //0xb8
    LONG (*GetScatterGatherListEx)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, struct _MDL* arg4, ULONGLONG arg5, ULONG arg6, ULONG arg7, VOID (*arg8)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, struct _SCATTER_GATHER_LIST* arg3, VOID* arg4), VOID* arg9, UCHAR arg10, VOID (*arg11)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, enum DMA_COMPLETION_STATUS arg4), VOID* arg12, struct _SCATTER_GATHER_LIST** arg13); //0xc0
    LONG (*BuildScatterGatherListEx)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, struct _MDL* arg4, ULONGLONG arg5, ULONG arg6, ULONG arg7, VOID (*arg8)(struct _DEVICE_OBJECT* arg1, struct _IRP* arg2, struct _SCATTER_GATHER_LIST* arg3, VOID* arg4), VOID* arg9, UCHAR arg10, VOID* arg11, ULONG arg12, VOID (*arg13)(struct _DMA_ADAPTER* arg1, struct _DEVICE_OBJECT* arg2, VOID* arg3, enum DMA_COMPLETION_STATUS arg4), VOID* arg14, VOID* arg15); //0xc8
    LONG (*FlushAdapterBuffersEx)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, VOID* arg3, ULONGLONG arg4, ULONG arg5, UCHAR arg6); //0xd0
    VOID (*FreeAdapterObject)(struct _DMA_ADAPTER* arg1, enum _IO_ALLOCATION_ACTION arg2); //0xd8
    LONG (*CancelMappedTransfer)(struct _DMA_ADAPTER* arg1, VOID* arg2);    //0xe0
    LONG (*AllocateDomainCommonBuffer)(struct _DMA_ADAPTER* arg1, VOID* arg2, union _LARGE_INTEGER* arg3, ULONG arg4, ULONG arg5, enum _MEMORY_CACHING_TYPE* arg6, ULONG arg7, union _LARGE_INTEGER* arg8, VOID** arg9); //0xe8
    LONG (*FlushDmaBuffer)(struct _DMA_ADAPTER* arg1, struct _MDL* arg2, UCHAR arg3); //0xf0
    LONG (*JoinDmaDomain)(struct _DMA_ADAPTER* arg1, VOID* arg2);           //0xf8
    LONG (*LeaveDmaDomain)(struct _DMA_ADAPTER* arg1);                      //0x100
    VOID* (*GetDmaDomain)(struct _DMA_ADAPTER* arg1);                       //0x108
    VOID* (*AllocateCommonBufferWithBounds)(struct _DMA_ADAPTER* arg1, union _LARGE_INTEGER* arg2, union _LARGE_INTEGER* arg3, ULONG arg4, ULONG arg5, enum _MEMORY_CACHING_TYPE* arg6, ULONG arg7, union _LARGE_INTEGER* arg8); //0x110
    LONG (*AllocateCommonBufferVector)(struct _DMA_ADAPTER* arg1, union _LARGE_INTEGER arg2, union _LARGE_INTEGER arg3, enum _MEMORY_CACHING_TYPE arg4, ULONG arg5, ULONG arg6, ULONG arg7, ULONGLONG arg8, struct _DMA_COMMON_BUFFER_VECTOR** arg9); //0x118
    VOID (*GetCommonBufferFromVectorByIndex)(struct _DMA_ADAPTER* arg1, struct _DMA_COMMON_BUFFER_VECTOR* arg2, ULONG arg3, VOID** arg4, union _LARGE_INTEGER* arg5); //0x120
    VOID (*FreeCommonBufferFromVector)(struct _DMA_ADAPTER* arg1, struct _DMA_COMMON_BUFFER_VECTOR* arg2, ULONG arg3); //0x128
    VOID (*FreeCommonBufferVector)(struct _DMA_ADAPTER* arg1, struct _DMA_COMMON_BUFFER_VECTOR* arg2); //0x130
};
/* Used in */
// _DMA_ADAPTER

