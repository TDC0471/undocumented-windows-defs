#pragma once
/* ------------------ */

#include <_MDL.h>
#include <_EPROCESS.h>

//0x1c bytes (sizeof)
struct _MDL
{
    struct _MDL* Next;                                                      //0x0
    SHORT Size;                                                             //0x4
    SHORT MdlFlags;                                                         //0x6
    struct _EPROCESS* Process;                                              //0x8
    VOID* MappedSystemVa;                                                   //0xc
    VOID* StartVa;                                                          //0x10
    ULONG ByteCount;                                                        //0x14
    ULONG ByteOffset;                                                       //0x18
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

