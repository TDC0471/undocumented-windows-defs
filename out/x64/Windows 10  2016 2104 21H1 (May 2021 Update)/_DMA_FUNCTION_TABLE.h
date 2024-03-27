#pragma once
/* ------------------ */

#include <_DMA_REQUEST_LINE_BINDING_DESCRIPTION.h>
#include <_DMA_SCATTER_GATHER_LIST.h>
#include <_LARGE_INTEGER.h>
#include <_DMA_INTERRUPT_TYPE.h>

//0x50 bytes (sizeof)
struct _DMA_FUNCTION_TABLE
{
    VOID (*InitializeController)(VOID* arg1);                               //0x0
    UCHAR (*ValidateRequestLineBinding)(VOID* arg1, struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION* arg2); //0x8
    ULONG (*QueryMaxFragments)(VOID* arg1, ULONG arg2, ULONG arg3);         //0x10
    VOID (*ProgramChannel)(VOID* arg1, ULONG arg2, ULONG arg3, struct _DMA_SCATTER_GATHER_LIST* arg4, union _LARGE_INTEGER arg5, UCHAR arg6, UCHAR arg7); //0x18
    LONG (*ConfigureChannel)(VOID* arg1, ULONG arg2, ULONG arg3, VOID* arg4); //0x20
    VOID (*FlushChannel)(VOID* arg1, ULONG arg2);                           //0x28
    UCHAR (*HandleInterrupt)(VOID* arg1, ULONG* arg2, enum _DMA_INTERRUPT_TYPE* arg3); //0x30
    ULONG (*ReadDmaCounter)(VOID* arg1, ULONG arg2);                        //0x38
    VOID (*ReportCommonBuffer)(VOID* arg1, ULONG arg2, VOID* arg3, union _LARGE_INTEGER arg4); //0x40
    UCHAR (*CancelTransfer)(VOID* arg1, ULONG arg2);                        //0x48
};
/* Used in */
// _HALP_DMA_CONTROLLER

