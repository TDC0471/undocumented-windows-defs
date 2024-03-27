#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_DUMP_STACK_CONTEXT.h>
#include <_KPROCESSOR_STATE.h>
#include <_LARGE_INTEGER.h>
#include <PO_MEMORY_IMAGE.h>

//0xa0 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR WriteToFile;                                                      //0x0
    UCHAR ReserveLoaderMemory;                                              //0x1
    UCHAR ReserveFreeMemory;                                                //0x2
    UCHAR Reset;                                                            //0x3
    UCHAR HiberFlags;                                                       //0x4
    UCHAR WroteHiberFile;                                                   //0x5
    UCHAR MapFrozen;                                                        //0x6
    struct _RTL_BITMAP MemoryMap;                                           //0x8
    struct _RTL_BITMAP DiscardedMemoryPages;                                //0x10
    struct _LIST_ENTRY ClonedRanges;                                        //0x18
    ULONG ClonedRangeCount;                                                 //0x20
    struct _LIST_ENTRY* NextCloneRange;                                     //0x24
    ULONG NextPreserve;                                                     //0x28
    struct _MDL* LoaderMdl;                                                 //0x2c
    struct _MDL* AllocatedMdl;                                              //0x30
    ULONGLONG PagesOut;                                                     //0x38
    VOID* IoPages;                                                          //0x40
    ULONG IoPagesCount;                                                     //0x44
    VOID* CurrentMcb;                                                       //0x48
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x4c
    struct _KPROCESSOR_STATE* WakeState;                                    //0x50
    ULONG PreferredIoWriteSize;                                             //0x54
    ULONG IoProgress;                                                       //0x58
    ULONG HiberVa;                                                          //0x5c
    union _LARGE_INTEGER HiberPte;                                          //0x60
    LONG Status;                                                            //0x68
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0x6c
    VOID* CompressionWorkspace;                                             //0x70
    UCHAR* CompressedWriteBuffer;                                           //0x74
    ULONG CompressedWriteBufferSize;                                        //0x78
    ULONG MaxCompressedOutputSize;                                          //0x7c
    ULONG* PerformanceStats;                                                //0x80
    VOID* CompressionBlock;                                                 //0x84
    VOID* DmaIO;                                                            //0x88
    VOID* TemporaryHeap;                                                    //0x8c
    struct _MDL* BootLoaderLogMdl;                                          //0x90
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0x94
    VOID* ResumeContext;                                                    //0x98
    ULONG ResumeContextPages;                                               //0x9c
};
/* Used in */
// _POP_POWER_ACTION

