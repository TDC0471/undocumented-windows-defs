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

//0x1a0 bytes (sizeof)
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
    struct _RTL_BITMAP BootPhaseMap;                                        //0x28
    struct _LIST_ENTRY ClonedRanges;                                        //0x38
    ULONG ClonedRangeCount;                                                 //0x48
    ULONGLONG ClonedPageCount;                                              //0x50
    struct _RTL_BITMAP* CurrentMap;                                         //0x58
    struct _LIST_ENTRY* NextCloneRange;                                     //0x60
    ULONGLONG NextPreserve;                                                 //0x68
    struct _MDL* LoaderMdl;                                                 //0x70
    struct _MDL* AllocatedMdl;                                              //0x78
    ULONGLONG PagesOut;                                                     //0x80
    VOID* IoPages;                                                          //0x88
    ULONG IoPagesCount;                                                     //0x90
    VOID* CurrentMcb;                                                       //0x98
    struct _DUMP_STACK_CONTEXT* DumpStack;                                  //0xa0
    struct _KPROCESSOR_STATE* WakeState;                                    //0xa8
    ULONG IoProgress;                                                       //0xb0
    LONG Status;                                                            //0xb4
    ULONG GraphicsProc;                                                     //0xb8
    struct PO_MEMORY_IMAGE* MemoryImage;                                    //0xc0
    ULONG* PerformanceStats;                                                //0xc8
    struct _MDL* BootLoaderLogMdl;                                          //0xd0
    ULONG SiLogOffset;                                                      //0xd8
    struct _MDL* FirmwareRuntimeInformationMdl;                             //0xe0
    VOID* FirmwareRuntimeInformationVa;                                     //0xe8
    VOID* ResumeContext;                                                    //0xf0
    ULONG ResumeContextPages;                                               //0xf8
    ULONG ProcessorCount;                                                   //0xfc
    struct _POP_PER_PROCESSOR_CONTEXT* ProcessorContext;                    //0x100
    CHAR* ProdConsBuffer;                                                   //0x108
    ULONG ProdConsSize;                                                     //0x110
    ULONG MaxDataPages;                                                     //0x114
    VOID* ExtraBuffer;                                                      //0x118
    ULONGLONG ExtraBufferSize;                                              //0x120
    VOID* ExtraMapVa;                                                       //0x128
    ULONGLONG BitlockerKeyPFN;                                              //0x130
    struct _POP_IO_INFO IoInfo;                                             //0x138
    ULONG HardwareConfigurationSignature;                                   //0x198
};
/* Used in */
// _POP_POWER_ACTION

