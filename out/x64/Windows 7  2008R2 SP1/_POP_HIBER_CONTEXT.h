#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_DUMP_STACK_CONTEXT.h>
#include <_KPROCESSOR_STATE.h>
#include <_LARGE_INTEGER.h>
#include <PO_MEMORY_IMAGE.h>

//0x110 bytes (sizeof)
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
    struct _RTL_BITMAP DiscardedMemoryPages;                                //0x18
    struct _LIST_ENTRY ClonedRanges;                                        //0x28
    ULONG ClonedRangeCount;                                                 //0x38
    struct _LIST_ENTRY* NextCloneRange;                                     //0x40
    ULONGLONG NextPreserve;                                                 //0x48
    struct _MDL* LoaderMdl;                                                 //0x50
    struct _MDL* AllocatedMdl;                                              //0x58
    ULONGLONG PagesOut;                                                     //0x60
    VOID* IoPages;                                                          //0x68
    ULONG IoPagesCount;                                                     //0x70
    VOID* CurrentMcb;                                                       //0x78
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x80
    struct _KPROCESSOR_STATE* WakeState;                                    //0x88
    ULONG PreferredIoWriteSize;                                             //0x90
    ULONG IoProgress;                                                       //0x94
    ULONGLONG HiberVa;                                                      //0x98
    union _LARGE_INTEGER HiberPte;                                          //0xa0
    LONG Status;                                                            //0xa8
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0xb0
    VOID* CompressionWorkspace;                                             //0xb8
    UCHAR* CompressedWriteBuffer;                                           //0xc0
    ULONG CompressedWriteBufferSize;                                        //0xc8
    ULONG MaxCompressedOutputSize;                                          //0xcc
    ULONG* PerformanceStats;                                                //0xd0
    VOID* CompressionBlock;                                                 //0xd8
    VOID* DmaIO;                                                            //0xe0
    VOID* TemporaryHeap;                                                    //0xe8
    struct _MDL* BootLoaderLogMdl;                                          //0xf0
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0xf8
    VOID* ResumeContext;                                                    //0x100
    ULONG ResumeContextPages;                                               //0x108
};
/* Used in */
// _POP_POWER_ACTION

