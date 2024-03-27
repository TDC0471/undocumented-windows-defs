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

//0x150 bytes (sizeof)
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
    ULONGLONG Lock;                                                         //0x10
    UCHAR MapFrozen;                                                        //0x18
    struct _RTL_BITMAP MemoryMap;                                           //0x20
    struct _LIST_ENTRY ClonedRanges;                                        //0x30
    ULONG ClonedRangeCount;                                                 //0x40
    struct _LIST_ENTRY* NextCloneRange;                                     //0x48
    ULONGLONG NextPreserve;                                                 //0x50
    struct _MDL* LoaderMdl;                                                 //0x58
    struct _MDL* Clones;                                                    //0x60
    UCHAR* NextClone;                                                       //0x68
    ULONGLONG NoClones;                                                     //0x70
    struct _MDL* Spares;                                                    //0x78
    ULONGLONG PagesOut;                                                     //0x80
    VOID* IoPage;                                                           //0x88
    VOID* CurrentMcb;                                                       //0x90
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x98
    struct _KPROCESSOR_STATE* WakeState;                                    //0xa0
    ULONG NoRanges;                                                         //0xa8
    ULONGLONG HiberVa;                                                      //0xb0
    union _LARGE_INTEGER HiberPte;                                          //0xb8
    LONG Status;                                                            //0xc0
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0xc8
    struct _PO_MEMORY_RANGE_ARRAY* TableHead;                               //0xd0
    UCHAR* CompressionWorkspace;                                            //0xd8
    UCHAR* CompressedWriteBuffer;                                           //0xe0
    ULONG* PerformanceStats;                                                //0xe8
    VOID* CompressionBlock;                                                 //0xf0
    VOID* DmaIO;                                                            //0xf8
    VOID* TemporaryHeap;                                                    //0x100
    struct _PO_HIBER_PERF PerfInfo;                                         //0x108
};
/* Used in */
// _POP_POWER_ACTION

