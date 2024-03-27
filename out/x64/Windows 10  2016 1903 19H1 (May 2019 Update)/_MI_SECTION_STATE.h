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

//0x340 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x8
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x10
    volatile ULONGLONG UnusedSegmentPagedPool;                              //0x18
    ULONG DataSectionProtectionMask;                                        //0x20
    VOID* HighSectionBase;                                                  //0x28
    struct _MSUBSECTION PhysicalSubsection;                                 //0x30
    struct _CONTROL_AREA PhysicalControlArea;                               //0xc0
    struct _MMPFNLIST PurgingExtentPages;                                   //0x140
    struct _MMPFN* DanglingExtentPages;                                     //0x168
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0x170
    struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;  //0x190
    UCHAR FileOnlyMemoryPfnsCreated;                                        //0x1b0
    UCHAR DanglingExtentsWorkerActive;                                      //0x1b1
    UCHAR PurgingExtentsNeedWatchdog;                                       //0x1b2
    struct _RTL_AVL_TREE PrototypePtesTree;                                 //0x1b8
    volatile LONG PrototypePtesTreeSpinLock;                                //0x1c0
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x1c8
    struct _RTL_BITMAP_EX ImageBitMapNative;                                //0x1d0
    ULONGLONG ImageBiasNative;                                              //0x1e0
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;                              //0x1e8
    struct _MI_SECTION_WOW_STATE Wow[1];                                    //0x208
    ULONGLONG ImageBiasWow;                                                 //0x248
    struct _RTL_BITMAP_EX ImageBitMapWowScratch;                            //0x250
    struct _RTL_BITMAP_EX ImageBitMap64Low;                                 //0x260
    ULONGLONG ImageBias64Low;                                               //0x270
    VOID* ApiSetSection;                                                    //0x278
    VOID* ApiSetSchema;                                                     //0x280
    ULONGLONG ApiSetSchemaSize;                                             //0x288
    ULONG LostDataFiles;                                                    //0x290
    ULONG LostDataPages;                                                    //0x294
    ULONG ImageFailureReason;                                               //0x298
    struct _SECTION* CfgBitMapSection;                                      //0x2a0
    struct _CONTROL_AREA* CfgBitMapControlArea;                             //0x2a8
    struct _RTL_BITMAP_EX KernelCfgBitMap;                                  //0x2b0
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;                               //0x2c0
    ULONG ImageCfgFailure;                                                  //0x2c8
    ULONG RetpolineReservePages;                                            //0x2cc
    struct _MDL* RetpolineStubMdl;                                          //0x2d0
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;                            //0x2d8
    struct _RTL_RETPOLINE_ROUTINES* RetpolineRoutines;                      //0x2e8
    struct _MMPTE* RetpolineRevertPte;                                      //0x2f0
    struct _LIST_ENTRY NonRetpolineImageLoadList;                           //0x2f8
    ULONG RetpolineStubPages;                                               //0x308
    ULONG ImageBreakpointEnabled;                                           //0x30c
    ULONG ImageBreakpointChecksum;                                          //0x310
    ULONG ImageBreakpointSize;                                              //0x314
    volatile LONG ImageValidationFailed;                                    //0x318
    struct _RTL_AVL_TREE ImageExtentTree;                                   //0x320
    struct _EX_PUSH_LOCK ImageExtentTreeLock;                               //0x328
    ULONG HotPatchReserveSize;                                              //0x330
};
/* Used in */
// _MI_SYSTEM_INFORMATION

