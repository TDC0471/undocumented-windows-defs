#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFNLIST.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>
#include <_RTL_BITMAP_EX.h>

//0x280 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x8
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x10
    volatile ULONGLONG UnusedSegmentPagedPool;                              //0x18
    ULONG DataSectionProtectionMask;                                        //0x20
    VOID* HighSectionBase;                                                  //0x28
    struct _MSUBSECTION PhysicalSubsection;                                 //0x30
    struct _CONTROL_AREA PhysicalControlArea;                               //0xa0
    struct _MMPFNLIST PurgingExtentPages;                                   //0x120
    struct _MMPFN* DanglingExtentPages;                                     //0x148
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0x150
    UCHAR DanglingExtentsWorkerActive;                                      //0x170
    UCHAR PurgingExtentsNeedWatchdog;                                       //0x171
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0x178
    volatile LONG PageFileSectionListSpinLock;                              //0x180
    ULONG ImageBias;                                                        //0x184
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x188
    struct _RTL_BITMAP ImageBitMap;                                         //0x190
    ULONG ImageBias64Low;                                                   //0x1a0
    ULONG ImageBias64High;                                                  //0x1a4
    struct _RTL_BITMAP ImageBitMap64Low;                                    //0x1a8
    struct _RTL_BITMAP ImageBitMap64High;                                   //0x1b8
    struct _RTL_BITMAP ImageBitMapWow64Dll;                                 //0x1c8
    VOID* ApiSetSection;                                                    //0x1d8
    VOID* ApiSetSchema;                                                     //0x1e0
    ULONGLONG ApiSetSchemaSize;                                             //0x1e8
    ULONG LostDataFiles;                                                    //0x1f0
    ULONG LostDataPages;                                                    //0x1f4
    ULONG ImageFailureReason;                                               //0x1f8
    struct _SECTION* CfgBitMapSection32;                                    //0x200
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x208
    struct _SECTION* CfgBitMapSection64;                                    //0x210
    struct _CONTROL_AREA* CfgBitMapControlArea64;                           //0x218
    struct _RTL_BITMAP_EX KernelCfgBitMap;                                  //0x220
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;                               //0x230
    ULONG ImageCfgFailure;                                                  //0x238
    ULONG ImageChecksumBreakpoint;                                          //0x23c
    ULONG ImageSizeBreakpoint;                                              //0x240
    volatile LONG ImageValidationFailed;                                    //0x244
};
/* Used in */
// _MI_SYSTEM_INFORMATION

