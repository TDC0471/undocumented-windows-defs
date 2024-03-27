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

//0x120 bytes (sizeof)
struct _POP_HIBER_CONTEXT
{
    UCHAR Reset;                                                            //0x0
    UCHAR HiberFlags;                                                       //0x1
    UCHAR WroteHiberFile;                                                   //0x2
    UCHAR VerifyKernelPhaseOnResume;                                        //0x3
    UCHAR KernelPhaseVerificationActive;                                    //0x4
    volatile UCHAR InitializationFinished;                                  //0x5
    volatile LONG NextTableLockHeld;                                        //0x8
    volatile LONG BootPhaseFinishedBarrier;                                 //0xc
    volatile LONG KernelResumeFinishedBarrier;                              //0x10
    UCHAR MapFrozen;                                                        //0x14
    union
    {
        struct _RTL_BITMAP DiscardMap;                                      //0x18
        struct _RTL_BITMAP KernelPhaseMap;                                  //0x18
    };
    struct _RTL_BITMAP BootPhaseMap;                                        //0x20
    struct _LIST_ENTRY ClonedRanges;                                        //0x28
    ULONG ClonedRangeCount;                                                 //0x30
    ULONGLONG ClonedPageCount;                                              //0x38
    struct _RTL_BITMAP* CurrentMap;                                         //0x40
    struct _LIST_ENTRY* NextCloneRange;                                     //0x44
    ULONG NextPreserve;                                                     //0x48
    struct _MDL* LoaderMdl;                                                 //0x4c
    struct _MDL* AllocatedMdl;                                              //0x50
    ULONGLONG PagesOut;                                                     //0x58
    VOID* IoPages;                                                          //0x60
    ULONG IoPagesCount;                                                     //0x64
    VOID* CurrentMcb;                                                       //0x68
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0x6c
    struct _KPROCESSOR_STATE* WakeState;                                    //0x70
    ULONG IoProgress;                                                       //0x74
    LONG Status;                                                            //0x78
    ULONG GraphicsProc;                                                     //0x7c
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0x80
    ULONG* PerformanceStats;                                                //0x84
    struct _MDL* BootLoaderLogMdl;                                          //0x88
    ULONG SiLogOffset;                                                      //0x8c
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0x90
    VOID* FirmwareRuntimeInformationVa;                                     //0x94
    VOID* ResumeContext;                                                    //0x98
    ULONG ResumeContextPages;                                               //0x9c
    ULONG ProcessorCount;                                                   //0xa0
    struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;                    //0xa4
    CHAR* ProdConsBuffer;                                                   //0xa8
    ULONG ProdConsSize;                                                     //0xac
    ULONG MaxDataPages;                                                     //0xb0
    VOID* ExtraBuffer;                                                      //0xb4
    ULONG ExtraBufferSize;                                                  //0xb8
    VOID* ExtraMapVa;                                                       //0xbc
    ULONG BitlockerKeyPFN;                                                  //0xc0
    struct _POP_IO_INFO IoInfo;                                             //0xc8
    ULONG HardwareConfigurationSignature;                                   //0x118
};
/* Used in */
// _POP_POWER_ACTION

