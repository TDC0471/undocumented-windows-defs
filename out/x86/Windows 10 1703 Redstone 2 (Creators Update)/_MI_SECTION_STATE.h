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

//0x140 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x4
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x8
    ULONG UnusedSubsectionPagedPool;                                        //0xc
    ULONG UnusedSegmentForceFree;                                           //0x10
    ULONG DataSectionProtectionMask;                                        //0x14
    VOID* HighSectionBase;                                                  //0x18
    struct _MSUBSECTION PhysicalSubsection;                                 //0x1c
    struct _CONTROL_AREA PhysicalControlArea;                               //0x60
    struct _MMPFN* DanglingExtentsPages;                                    //0xb0
    volatile LONG DanglingExtentsLock;                                      //0xb4
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0xb8
    UCHAR DanglingExtentsWorkerActive;                                      //0xc8
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0xcc
    volatile LONG PageFileSectionListSpinLock;                              //0xd0
    ULONG ImageBias;                                                        //0xd4
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0xd8
    struct _RTL_BITMAP ImageBitMap;                                         //0xdc
    VOID* ApiSetSection;                                                    //0xe4
    VOID* ApiSetSchema;                                                     //0xe8
    ULONG ApiSetSchemaSize;                                                 //0xec
    ULONG LostDataFiles;                                                    //0xf0
    ULONG LostDataPages;                                                    //0xf4
    ULONG ImageFailureReason;                                               //0xf8
    struct _SECTION* CfgBitMapSection32;                                    //0xfc
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x100
    ULONG ImageCfgFailure;                                                  //0x104
    ULONG ImageChecksumBreakpoint;                                          //0x108
    ULONG ImageSizeBreakpoint;                                              //0x10c
    volatile LONG ImageValidationFailed;                                    //0x110
};
/* Used in */
// _MI_SYSTEM_INFORMATION

