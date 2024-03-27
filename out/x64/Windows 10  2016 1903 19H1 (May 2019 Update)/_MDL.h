#pragma once
/* ------------------ */

#include <_MDL.h>
#include <_EPROCESS.h>

//0x30 bytes (sizeof)
struct _MDL
{
    struct _MDL* Next;                                                      //0x0
    SHORT Size;                                                             //0x8
    SHORT MdlFlags;                                                         //0xa
    USHORT AllocationProcessorNumber;                                       //0xc
    USHORT Reserved;                                                        //0xe
    struct _EPROCESS* Process;                                              //0x10
    VOID* MappedSystemVa;                                                   //0x18
    VOID* StartVa;                                                          //0x20
    ULONG ByteCount;                                                        //0x28
    ULONG ByteOffset;                                                       //0x2c
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ALPC_COMPLETION_LIST
// _CC_ASYNC_READ_CONTEXT
// _DMA_IOMMU_INTERFACE
// _DUMP_INITIALIZATION_CONTEXT
// _FAST_IO_DISPATCH
// _IRP
// _LOCK_TRACKER
// _MDL
// _MI_PAGEFILE_TRACES
// _MI_SECTION_STATE
// _MMINPAGE_SUPPORT
// _MMMOD_WRITER_MDL_ENTRY
// _POP_HIBER_CONTEXT
// _POP_IO_INFO
// _PTE_TRACKER
// _WORK_QUEUE_ENTRY

