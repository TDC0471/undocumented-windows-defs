#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFNLIST.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_KEVENT.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>
#include <_RTL_BITMAP_EX.h>
#include <_MDL.h>
#include <_RTL_RETPOLINE_ROUTINES.h>
#include <_MMPTE.h>

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
    struct _KEVENT DanglingExtentsDeletionComplete;                         //0x190
    UCHAR DanglingExtentsWorkerActive;                                      //0x1a8
    UCHAR PurgingExtentsNeedWatchdog;                                       //0x1a9
    struct _RTL_AVL_TREE PrototypePtesTree;                                 //0x1b0
    volatile LONG PrototypePtesTreeSpinLock;                                //0x1b8
    ULONG ImageBias;                                                        //0x1bc
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x1c0
    struct _RTL_BITMAP ImageBitMap;                                         //0x1c8
    ULONG ImageBias64Low;                                                   //0x1d8
    ULONG ImageBias64High;                                                  //0x1dc
    struct _RTL_BITMAP ImageBitMap64Low;                                    //0x1e0
    struct _RTL_BITMAP ImageBitMap64High;                                   //0x1f0
    struct _RTL_BITMAP ImageBitMapWow64Dll;                                 //0x200
    VOID* ApiSetSection;                                                    //0x210
    VOID* ApiSetSchema;                                                     //0x218
    ULONGLONG ApiSetSchemaSize;                                             //0x220
    ULONG LostDataFiles;                                                    //0x228
    ULONG LostDataPages;                                                    //0x22c
    ULONG ImageFailureReason;                                               //0x230
    struct _SECTION* CfgBitMapSection32;                                    //0x238
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x240
    struct _SECTION* CfgBitMapSection64;                                    //0x248
    struct _CONTROL_AREA* CfgBitMapControlArea64;                           //0x250
    struct _RTL_BITMAP_EX KernelCfgBitMap;                                  //0x258
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;                               //0x268
    ULONG ImageCfgFailure;                                                  //0x270
    struct _MDL* RetpolineStubMdl;                                          //0x278
    VOID* RetpolineStubStart;                                               //0x280
    ULONG RetpolineStubPages;                                               //0x288
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;                            //0x290
    struct _RTL_RETPOLINE_ROUTINES RetpolineRoutines;                       //0x2a0
    struct _MMPTE* RetpolineRevertPte;                                      //0x2f0
    ULONG ImageChecksumBreakpoint;                                          //0x2f8
    ULONG ImageSizeBreakpoint;                                              //0x2fc
    volatile LONG ImageValidationFailed;                                    //0x300
};
/* Used in */
// _MI_SYSTEM_INFORMATION

