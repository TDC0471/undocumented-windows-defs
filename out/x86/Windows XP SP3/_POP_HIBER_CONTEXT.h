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

//0xe0 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR WriteToFile;                                                      //0x0
    UCHAR ReserveLoaderMemory;                                              //0x1
    UCHAR ReserveFreeMemory;                                                //0x2
    UCHAR VerifyOnWake;                                                     //0x3
    UCHAR Reset;                                                            //0x4
    UCHAR HiberFlags;                                                       //0x5
    UCHAR LinkFile;                                                         //0x6
    VOID* LinkFileHandle;                                                   //0x8
    ULONG Lock;                                                             //0xc
    UCHAR MapFrozen;                                                        //0x10
    struct _RTL_BITMAP MemoryMap;                                           //0x14
    struct _LIST_ENTRY ClonedRanges;                                        //0x1c
    ULONG ClonedRangeCount;                                                 //0x24
    struct _LIST_ENTRY* NextCloneRange;                                     //0x28
    ULONG NextPreserve;                                                     //0x2c
    struct _MDL* LoaderMdl;                                                 //0x30
    struct _MDL* Clones;                                                    //0x34
    UCHAR* NextClone;                                                       //0x38
    ULONG NoClones;                                                         //0x3c
    struct _MDL* Spares;                                                    //0x40
    ULONGLONG PagesOut;                                                     //0x48
    VOID* IoPage;                                                           //0x50
    VOID* CurrentMcb;                                                       //0x54
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x58
    struct _KPROCESSOR_STATE* WakeState;                                    //0x5c
    ULONG NoRanges;                                                         //0x60
    ULONG HiberVa;                                                          //0x64
    union _LARGE_INTEGER HiberPte;                                          //0x68
    LONG Status;                                                            //0x70
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0x74
    struct _PO_MEMORY_RANGE_ARRAY* TableHead;                               //0x78
    UCHAR* CompressionWorkspace;                                            //0x7c
    UCHAR* CompressedWriteBuffer;                                           //0x80
    ULONG* PerformanceStats;                                                //0x84
    VOID* CompressionBlock;                                                 //0x88
    VOID* DmaIO;                                                            //0x8c
    VOID* TemporaryHeap;                                                    //0x90
    struct _PO_HIBER_PERF PerfInfo;                                         //0x98
};
/* Used in */
// _POP_POWER_ACTION

