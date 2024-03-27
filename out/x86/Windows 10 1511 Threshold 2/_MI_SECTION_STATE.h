#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_MMPFN.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>

//0x140 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _EX_PUSH_LOCK SectionExtendLock;                                 //0x4
    struct _EX_PUSH_LOCK SectionExtendSetLock;                              //0x8
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0xc
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x10
    ULONG UnusedSubsectionPagedPool;                                        //0x14
    ULONG UnusedSegmentForceFree;                                           //0x18
    ULONG DataSectionProtectionMask;                                        //0x1c
    VOID* HighSectionBase;                                                  //0x20
    struct _MSUBSECTION PhysicalSubsection;                                 //0x24
    struct _CONTROL_AREA PhysicalControlArea;                               //0x68
    struct _MMPFN* DanglingExtentsPages;                                    //0xb8
    volatile LONG DanglingExtentsLock;                                      //0xbc
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0xc0
    UCHAR DanglingExtentsWorkerActive;                                      //0xd0
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0xd4
    volatile LONG PageFileSectionListSpinLock;                              //0xd8
    ULONG ImageBias;                                                        //0xdc
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0xe0
    struct _RTL_BITMAP ImageBitMap;                                         //0xe4
    VOID* ApiSetSection;                                                    //0xec
    VOID* ApiSetSchema;                                                     //0xf0
    ULONG ApiSetSchemaSize;                                                 //0xf4
    ULONG LostDataFiles;                                                    //0xf8
    ULONG LostDataPages;                                                    //0xfc
    ULONG ImageFailureReason;                                               //0x100
    struct _SECTION* CfgBitMapSection32;                                    //0x104
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x108
    ULONG ImageCfgFailure;                                                  //0x10c
    volatile LONG ImageValidationFailed;                                    //0x110
};
/* Used in */
// _MI_SYSTEM_INFORMATION

