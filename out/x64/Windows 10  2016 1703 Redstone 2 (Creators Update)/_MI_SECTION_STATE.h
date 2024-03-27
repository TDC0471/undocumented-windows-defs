#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_EX_PUSH_LOCK.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>
#include <_RTL_BITMAP_EX.h>

//0x240 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x8
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x10
    ULONGLONG UnusedSubsectionPagedPool;                                    //0x18
    ULONG UnusedSegmentForceFree;                                           //0x20
    ULONG DataSectionProtectionMask;                                        //0x24
    VOID* HighSectionBase;                                                  //0x28
    struct _MSUBSECTION PhysicalSubsection;                                 //0x30
    struct _CONTROL_AREA PhysicalControlArea;                               //0xa0
    struct _MMPFN* DanglingExtentsPages;                                    //0x120
    volatile LONG DanglingExtentsLock;                                      //0x128
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0x130
    UCHAR DanglingExtentsWorkerActive;                                      //0x150
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0x158
    volatile LONG PageFileSectionListSpinLock;                              //0x160
    ULONG ImageBias;                                                        //0x164
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x168
    struct _RTL_BITMAP ImageBitMap;                                         //0x170
    ULONG ImageBias64Low;                                                   //0x180
    ULONG ImageBias64High;                                                  //0x184
    struct _RTL_BITMAP ImageBitMap64Low;                                    //0x188
    struct _RTL_BITMAP ImageBitMap64High;                                   //0x198
    struct _RTL_BITMAP ImageBitMapWow64Dll;                                 //0x1a8
    VOID* ApiSetSection;                                                    //0x1b8
    VOID* ApiSetSchema;                                                     //0x1c0
    ULONGLONG ApiSetSchemaSize;                                             //0x1c8
    ULONG LostDataFiles;                                                    //0x1d0
    ULONG LostDataPages;                                                    //0x1d4
    ULONG ImageFailureReason;                                               //0x1d8
    struct _SECTION* CfgBitMapSection32;                                    //0x1e0
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x1e8
    struct _SECTION* CfgBitMapSection64;                                    //0x1f0
    struct _CONTROL_AREA* CfgBitMapControlArea64;                           //0x1f8
    struct _RTL_BITMAP_EX KernelCfgBitMap;                                  //0x200
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;                               //0x210
    ULONG ImageCfgFailure;                                                  //0x218
    ULONG ImageChecksumBreakpoint;                                          //0x21c
    ULONG ImageSizeBreakpoint;                                              //0x220
    volatile LONG ImageValidationFailed;                                    //0x224
};
/* Used in */
// _MI_SYSTEM_INFORMATION

