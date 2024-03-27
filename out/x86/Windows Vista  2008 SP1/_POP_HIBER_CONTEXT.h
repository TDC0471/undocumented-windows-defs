#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_DUMP_STACK_CONTEXT.h>
#include <_KPROCESSOR_STATE.h>
#include <_LARGE_INTEGER.h>
#include <PO_MEMORY_IMAGE.h>
#include <_PO_MEMORY_RANGE_ARRAY.h>
#include <_PO_HIBER_PERF.h>

//0x100 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR WriteToFile;                                                      //0x0
    UCHAR ReserveLoaderMemory;                                              //0x1
    UCHAR ReserveFreeMemory;                                                //0x2
    UCHAR VerifyOnWake;                                                     //0x3
    UCHAR Reset;                                                            //0x4
    UCHAR HiberFlags;                                                       //0x5
    UCHAR WroteHiberFile;                                                   //0x6
    ULONG Lock;                                                             //0x8
    UCHAR MapFrozen;                                                        //0xc
    struct _RTL_BITMAP MemoryMap;                                           //0x10
    struct _RTL_BITMAP DiscardedMemoryPages;                                //0x18
    struct _LIST_ENTRY ClonedRanges;                                        //0x20
    ULONG ClonedRangeCount;                                                 //0x28
    struct _LIST_ENTRY* NextCloneRange;                                     //0x2c
    ULONG NextPreserve;                                                     //0x30
    struct _MDL* LoaderMdl;                                                 //0x34
    struct _MDL* AllocatedMdl;                                              //0x38
    ULONGLONG PagesOut;                                                     //0x40
    VOID* IoPages;                                                          //0x48
    ULONG IoPagesCount;                                                     //0x4c
    VOID* CurrentMcb;                                                       //0x50
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x54
    struct _KPROCESSOR_STATE* WakeState;                                    //0x58
    ULONG HiberVa;                                                          //0x5c
    union _LARGE_INTEGER HiberPte;                                          //0x60
    LONG Status;                                                            //0x68
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0x6c
    struct _PO_MEMORY_RANGE_ARRAY* TableHead;                               //0x70
    UCHAR* CompressionWorkspace;                                            //0x74
    UCHAR* CompressedWriteBuffer;                                           //0x78
    ULONG* PerformanceStats;                                                //0x7c
    VOID* CompressionBlock;                                                 //0x80
    VOID* DmaIO;                                                            //0x84
    VOID* TemporaryHeap;                                                    //0x88
    struct _PO_HIBER_PERF PerfInfo;                                         //0x90
    struct _MDL* BootLoaderLogMdl;                                          //0xf0
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0xf4
    VOID* ResumeContext;                                                    //0xf8
    ULONG ResumeContextPages;                                               //0xfc
};
/* Used in */
// _POP_POWER_ACTION

