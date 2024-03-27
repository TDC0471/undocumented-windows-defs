#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MI_CROSS_PARTITION_CHARGES.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>

//0x280 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SegmentListLock;                                          //0x0
    volatile LONG SectionObjectPointersLock;                                //0x40
    struct _EX_PUSH_LOCK SectionExtendLock;                                 //0x48
    struct _EX_PUSH_LOCK SectionExtendSetLock;                              //0x50
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x58
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x60
    ULONGLONG UnusedSubsectionPagedPool;                                    //0x68
    ULONG UnusedSegmentForceFree;                                           //0x70
    ULONG DataSectionProtectionMask;                                        //0x74
    VOID* HighSectionBase;                                                  //0x78
    struct _MSUBSECTION PhysicalSubsection;                                 //0x80
    struct _CONTROL_AREA PhysicalControlArea;                               //0xf0
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0x168
    volatile LONG PageFileSectionListSpinLock;                              //0x170
    struct _MI_CROSS_PARTITION_CHARGES SharedSegmentCharges;                //0x178
    struct _MI_CROSS_PARTITION_CHARGES SharedPageCombineCharges;            //0x1a0
    ULONG ImageBias;                                                        //0x1c8
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x1d0
    struct _RTL_BITMAP ImageBitMap;                                         //0x1d8
    ULONG ImageBias64Low;                                                   //0x1e8
    ULONG ImageBias64High;                                                  //0x1ec
    struct _RTL_BITMAP ImageBitMap64Low;                                    //0x1f0
    struct _RTL_BITMAP ImageBitMap64High;                                   //0x200
    struct _RTL_BITMAP ImageBitMapWow64Dll;                                 //0x210
    VOID* ApiSetSection;                                                    //0x220
    VOID* ApiSetSchema;                                                     //0x228
    ULONGLONG ApiSetSchemaSize;                                             //0x230
    ULONG LostDataFiles;                                                    //0x238
    ULONG LostDataPages;                                                    //0x23c
    ULONG ImageFailureReason;                                               //0x240
    struct _SECTION* CfgBitMapSection32;                                    //0x248
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x250
    struct _SECTION* CfgBitMapSection64;                                    //0x258
    struct _CONTROL_AREA* CfgBitMapControlArea64;                           //0x260
    ULONG ImageCfgFailure;                                                  //0x268
    volatile LONG ImageValidationFailed;                                    //0x26c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

