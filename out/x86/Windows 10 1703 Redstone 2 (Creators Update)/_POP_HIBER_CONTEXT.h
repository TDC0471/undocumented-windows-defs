#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_DUMP_STACK_CONTEXT.h>
#include <_KPROCESSOR_STATE.h>
#include <PO_MEMORY_IMAGE.h>
#include <_POP_PER_PROCESSOR_CONTEXT.h>
#include <_POP_IO_INFO.h>

//0x140 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR Reset;                                                            //0x0
    UCHAR HiberFlags;                                                       //0x1
    UCHAR WroteHiberFile;                                                   //0x2
    UCHAR KernelPhaseVerificationActive;                                    //0x3
    volatile UCHAR InitializationFinished;                                  //0x4
    volatile LONG NextTableLockHeld;                                        //0x8
    volatile LONG BootPhaseFinishedBarrier;                                 //0xc
    volatile LONG KernelResumeFinishedBarrier;                              //0x10
    volatile LONG HvCaptureReadyBarrier;                                    //0x14
    volatile LONG HvCaptureCompletedBarrier;                                //0x18
    UCHAR MapFrozen;                                                        //0x1c
    union
    {
        struct _RTL_BITMAP DiscardMap;                                      //0x20
        struct _RTL_BITMAP KernelPhaseMap;                                  //0x20
    };
    struct _RTL_BITMAP BootPhaseMap;                                        //0x28
    struct _LIST_ENTRY ClonedRanges;                                        //0x30
    ULONG ClonedRangeCount;                                                 //0x38
    ULONGLONG ClonedPageCount;                                              //0x40
    struct _RTL_BITMAP* CurrentMap;                                         //0x48
    struct _LIST_ENTRY* NextCloneRange;                                     //0x4c
    ULONG NextPreserve;                                                     //0x50
    struct _MDL* LoaderMdl;                                                 //0x54
    struct _MDL* AllocatedMdl;                                              //0x58
    ULONGLONG PagesOut;                                                     //0x60
    VOID* IoPages;                                                          //0x68
    ULONG IoPagesCount;                                                     //0x6c
    VOID* CurrentMcb;                                                       //0x70
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x74
    struct _KPROCESSOR_STATE* WakeState;                                    //0x78
    ULONG IoProgress;                                                       //0x7c
    LONG Status;                                                            //0x80
    ULONG GraphicsProc;                                                     //0x84
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0x88
    ULONG* PerformanceStats;                                                //0x8c
    struct _MDL* BootLoaderLogMdl;                                          //0x90
    ULONG SiLogOffset;                                                      //0x94
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0x98
    VOID* FirmwareRuntimeInformationVa;                                     //0x9c
    VOID* ResumeContext;                                                    //0xa0
    ULONG ResumeContextPages;                                               //0xa4
    ULONG ProcessorCount;                                                   //0xa8
    struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;                    //0xac
    CHAR* ProdConsBuffer;                                                   //0xb0
    ULONG ProdConsSize;                                                     //0xb4
    ULONG MaxDataPages;                                                     //0xb8
    VOID* ExtraBuffer;                                                      //0xbc
    ULONG ExtraBufferSize;                                                  //0xc0
    VOID* ExtraMapVa;                                                       //0xc4
    ULONG BitlockerKeyPFN;                                                  //0xc8
    struct _POP_IO_INFO IoInfo;                                             //0xd0
    USHORT* IoChecksums;                                                    //0x130
    ULONG IoChecksumsSize;                                                  //0x134
    ULONG HardwareConfigurationSignature;                                   //0x138
};
/* Used in */
// _POP_POWER_ACTION

