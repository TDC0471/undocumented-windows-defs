#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_DUMP_STACK_CONTEXT.h>
#include <_KPROCESSOR_STATE.h>
#include <_LARGE_INTEGER.h>
#include <PO_MEMORY_IMAGE.h>
#include <_PO_MEMORY_RANGE_TABLE.h>
#include <_PO_HIBER_PERF.h>

//0x178 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR WriteToFile;                                                      //0x0
    UCHAR ReserveLoaderMemory;                                              //0x1
    UCHAR ReserveFreeMemory;                                                //0x2
    UCHAR VerifyOnWake;                                                     //0x3
    UCHAR Reset;                                                            //0x4
    UCHAR HiberFlags;                                                       //0x5
    UCHAR WroteHiberFile;                                                   //0x6
    ULONGLONG Lock;                                                         //0x8
    UCHAR MapFrozen;                                                        //0x10
    struct _RTL_BITMAP MemoryMap;                                           //0x18
    struct _RTL_BITMAP DiscardedMemoryPages;                                //0x28
    struct _LIST_ENTRY ClonedRanges;                                        //0x38
    ULONG ClonedRangeCount;                                                 //0x48
    struct _LIST_ENTRY* NextCloneRange;                                     //0x50
    ULONGLONG NextPreserve;                                                 //0x58
    struct _MDL* LoaderMdl;                                                 //0x60
    struct _MDL* AllocatedMdl;                                              //0x68
    ULONGLONG PagesOut;                                                     //0x70
    VOID* IoPages;                                                          //0x78
    ULONG IoPagesCount;                                                     //0x80
    VOID* CurrentMcb;                                                       //0x88
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x90
    struct _KPROCESSOR_STATE* WakeState;                                    //0x98
    ULONGLONG HiberVa;                                                      //0xa0
    union _LARGE_INTEGER HiberPte;                                          //0xa8
    LONG Status;                                                            //0xb0
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0xb8
    struct _PO_MEMORY_RANGE_TABLE* TableHead;                               //0xc0
    UCHAR* CompressionWorkspace;                                            //0xc8
    UCHAR* CompressedWriteBuffer;                                           //0xd0
    ULONG* PerformanceStats;                                                //0xd8
    VOID* CompressionBlock;                                                 //0xe0
    VOID* DmaIO;                                                            //0xe8
    VOID* TemporaryHeap;                                                    //0xf0
    struct _PO_HIBER_PERF PerfInfo;                                         //0xf8
    struct _MDL* BootLoaderLogMdl;                                          //0x158
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0x160
    VOID* ResumeContext;                                                    //0x168
    ULONG ResumeContextPages;                                               //0x170
};
/* Used in */
// _POP_POWER_ACTION

