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
    struct _EPROCESS* Process;                                              //0x10
    VOID* MappedSystemVa;                                                   //0x18
    VOID* StartVa;                                                          //0x20
    ULONG ByteCount;                                                        //0x28
    ULONG ByteOffset;                                                       //0x2c
};
/* Used in */
// _ALPC_COMPLETION_LIST
// _ALPC_MESSAGE_ZONE
// _DUMP_INITIALIZATION_CONTEXT
// _FAST_IO_DISPATCH
// _IRP
// _MDL
// _MI_PAGEFILE_TRACES
// _MMMOD_WRITER_MDL_ENTRY
// _POP_HIBER_CONTEXT
// _PTE_TRACKER

