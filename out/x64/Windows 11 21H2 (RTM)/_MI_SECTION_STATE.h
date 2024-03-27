#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFNLIST.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_EXTENT_DELETION_WAIT_BLOCK.h>
#include <_RTL_BITMAP_EX.h>
#include <_MI_DLL_OVERFLOW_AREA.h>
#include <_MI_SECTION_WOW_STATE.h>
#include <_SECTION.h>
#include <_MDL.h>
#include <_RTL_RETPOLINE_ROUTINES.h>
#include <_MMPTE.h>
#include <_LIST_ENTRY.h>

//0x380 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x8
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x10
    volatile ULONGLONG UnusedSegmentPagedPool;                              //0x18
    ULONG DataSectionProtectionMask;                                        //0x20
    VOID* HighSectionBase;                                                  //0x28
    struct _MSUBSECTION PhysicalSubsection;                                 //0x30
    struct _CONTROL_AREA PhysicalControlArea;                               //0xc8
    struct _MMPFNLIST PurgingExtentPages;                                   //0x148
    struct _MMPFN* DanglingExtentPages;                                     //0x1a0
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0x1a8
    struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;  //0x1c8
    UCHAR FileOnlyMemoryPfnsCreated;                                        //0x1e8
    UCHAR DanglingExtentsWorkerActive;                                      //0x1e9
    UCHAR PurgingExtentsNeedWatchdog;                                       //0x1ea
    struct _RTL_AVL_TREE PrototypePtesTree;                                 //0x1f0
    volatile LONG PrototypePtesTreeSpinLock;                                //0x1f8
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x200
    struct _RTL_BITMAP_EX ImageBitMapNative;                                //0x208
    ULONGLONG ImageBiasNative;                                              //0x218
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;                              //0x220
    struct _MI_SECTION_WOW_STATE Wow[1];                                    //0x240
    ULONGLONG ImageBiasWow;                                                 //0x280
    struct _RTL_BITMAP_EX ImageBitMapWowScratch;                            //0x288
    struct _RTL_BITMAP_EX ImageBitMap64Low;                                 //0x298
    ULONGLONG ImageBias64Low;                                               //0x2a8
    VOID* ApiSetSection;                                                    //0x2b0
    VOID* ApiSetSchema;                                                     //0x2b8
    ULONGLONG ApiSetSchemaSize;                                             //0x2c0
    ULONG LostDataFiles;                                                    //0x2c8
    ULONG LostDataPages;                                                    //0x2cc
    ULONG ImageFailureReason;                                               //0x2d0
    struct _SECTION* CfgBitMapSection;                                      //0x2d8
    struct _CONTROL_AREA* CfgBitMapControlArea;                             //0x2e0
    struct _RTL_BITMAP_EX KernelCfgBitMap;                                  //0x2e8
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;                               //0x2f8
    ULONG ImageCfgFailure;                                                  //0x300
    ULONG RetpolineReservePages;                                            //0x304
    struct _MDL* RetpolineStubMdl;                                          //0x308
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;                            //0x310
    struct _RTL_RETPOLINE_ROUTINES* RetpolineRoutines;                      //0x320
    struct _MMPTE* RetpolineRevertPte;                                      //0x328
    struct _LIST_ENTRY NonRetpolineImageLoadList;                           //0x330
    ULONG RetpolineStubPages;                                               //0x340
    LONG RetpolineBootStatus;                                               //0x344
    ULONG ImageBreakpointEnabled;                                           //0x348
    ULONG ImageBreakpointChecksum;                                          //0x34c
    ULONG ImageBreakpointSize;                                              //0x350
    volatile LONG ImageValidationFailed;                                    //0x354
    struct _RTL_AVL_TREE ExtentTree[2];                                     //0x358
    struct _EX_PUSH_LOCK ExtentTreeLock;                                    //0x368
    struct _EX_PUSH_LOCK ExtentForwardProgressMappingLock;                  //0x370
    ULONG HotPatchReserveSize;                                              //0x378
};
/* Used in */
// _MI_SYSTEM_INFORMATION

