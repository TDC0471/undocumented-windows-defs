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

//0x1d0 bytes (sizeof)
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
    volatile LONG HvCaptureReadyBarrier;                                    //0x14
    volatile LONG HvCaptureCompletedBarrier;                                //0x18
    UCHAR MapFrozen;                                                        //0x1c
    union
    {
        struct _RTL_BITMAP DiscardMap;                                      //0x20
        struct _RTL_BITMAP KernelPhaseMap;                                  //0x20
    };
    struct _RTL_BITMAP BootPhaseMap;                                        //0x30
    struct _LIST_ENTRY ClonedRanges;                                        //0x40
    ULONG ClonedRangeCount;                                                 //0x50
    ULONGLONG ClonedPageCount;                                              //0x58
    struct _RTL_BITMAP* CurrentMap;                                         //0x60
    struct _LIST_ENTRY* NextCloneRange;                                     //0x68
    ULONGLONG NextPreserve;                                                 //0x70
    struct _MDL* LoaderMdl;                                                 //0x78
    struct _MDL* AllocatedMdl;                                              //0x80
    ULONGLONG PagesOut;                                                     //0x88
    VOID* IoPages;                                                          //0x90
    ULONG IoPagesCount;                                                     //0x98
    VOID* CurrentMcb;                                                       //0xa0
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0xa8
    struct _KPROCESSOR_STATE* WakeState;                                    //0xb0
    ULONG IoProgress;                                                       //0xb8
    LONG Status;                                                            //0xbc
    ULONG GraphicsProc;                                                     //0xc0
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0xc8
    ULONG* PerformanceStats;                                                //0xd0
    struct _MDL* BootLoaderLogMdl;                                          //0xd8
    ULONG SiLogOffset;                                                      //0xe0
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0xe8
    VOID* FirmwareRuntimeInformationVa;                                     //0xf0
    VOID* ResumeContext;                                                    //0xf8
    ULONG ResumeContextPages;                                               //0x100
    ULONG SecurePages;                                                      //0x104
    ULONG ProcessorCount;                                                   //0x108
    struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;                    //0x110
    CHAR* ProdConsBuffer;                                                   //0x118
    ULONG ProdConsSize;                                                     //0x120
    ULONG MaxDataPages;                                                     //0x124
    VOID* ExtraBuffer;                                                      //0x128
    ULONGLONG ExtraBufferSize;                                              //0x130
    VOID* ExtraMapVa;                                                       //0x138
    ULONGLONG BitlockerKeyPFN;                                              //0x140
    struct _POP_IO_INFO IoInfo;                                             //0x148
    USHORT* IoChecksums;                                                    //0x1b8
    ULONGLONG IoChecksumsSize;                                              //0x1c0
    ULONG HardwareConfigurationSignature;                                   //0x1c8
    UCHAR IumEnabled;                                                       //0x1cc
};
/* Used in */
// _POP_POWER_ACTION

