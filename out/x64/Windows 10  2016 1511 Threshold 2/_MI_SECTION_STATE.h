#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_CROSS_PARTITION_CHARGES.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>

//0x280 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _EX_PUSH_LOCK SectionExtendLock;                                 //0x8
    struct _EX_PUSH_LOCK SectionExtendSetLock;                              //0x10
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x18
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x20
    ULONGLONG UnusedSubsectionPagedPool;                                    //0x28
    ULONG UnusedSegmentForceFree;                                           //0x30
    ULONG DataSectionProtectionMask;                                        //0x34
    VOID* HighSectionBase;                                                  //0x38
    struct _MSUBSECTION PhysicalSubsection;                                 //0x40
    struct _CONTROL_AREA PhysicalControlArea;                               //0xb0
    struct _MMPFN* DanglingExtentsPages;                                    //0x128
    volatile LONG DanglingExtentsLock;                                      //0x130
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0x138
    UCHAR DanglingExtentsWorkerActive;                                      //0x158
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0x160
    volatile LONG PageFileSectionListSpinLock;                              //0x168
    struct _MI_CROSS_PARTITION_CHARGES SharedSegmentCharges;                //0x170
    struct _MI_CROSS_PARTITION_CHARGES SharedPageCombineCharges;            //0x198
    ULONG ImageBias;                                                        //0x1c0
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x1c8
    struct _RTL_BITMAP ImageBitMap;                                         //0x1d0
    ULONG ImageBias64Low;                                                   //0x1e0
    ULONG ImageBias64High;                                                  //0x1e4
    struct _RTL_BITMAP ImageBitMap64Low;                                    //0x1e8
    struct _RTL_BITMAP ImageBitMap64High;                                   //0x1f8
    struct _RTL_BITMAP ImageBitMapWow64Dll;                                 //0x208
    VOID* ApiSetSection;                                                    //0x218
    VOID* ApiSetSchema;                                                     //0x220
    ULONGLONG ApiSetSchemaSize;                                             //0x228
    ULONG LostDataFiles;                                                    //0x230
    ULONG LostDataPages;                                                    //0x234
    ULONG ImageFailureReason;                                               //0x238
    struct _SECTION* CfgBitMapSection32;                                    //0x240
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x248
    struct _SECTION* CfgBitMapSection64;                                    //0x250
    struct _CONTROL_AREA* CfgBitMapControlArea64;                           //0x258
    ULONG ImageCfgFailure;                                                  //0x260
    volatile LONG ImageValidationFailed;                                    //0x264
};
/* Used in */
// _MI_SYSTEM_INFORMATION

