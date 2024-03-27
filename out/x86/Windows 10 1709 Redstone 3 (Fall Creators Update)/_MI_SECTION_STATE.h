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

//0x140 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SectionObjectPointersLock;                                //0x0
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x4
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x8
    volatile ULONG UnusedSegmentPagedPool;                                  //0xc
    ULONG DataSectionProtectionMask;                                        //0x10
    VOID* HighSectionBase;                                                  //0x14
    struct _MSUBSECTION PhysicalSubsection;                                 //0x18
    struct _CONTROL_AREA PhysicalControlArea;                               //0x60
    struct _MMPFNLIST PurgingExtentPages;                                   //0xb0
    struct _MMPFN* DanglingExtentPages;                                     //0xc4
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0xc8
    UCHAR DanglingExtentsWorkerActive;                                      //0xd8
    UCHAR PurgingExtentsNeedWatchdog;                                       //0xd9
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0xdc
    volatile LONG PageFileSectionListSpinLock;                              //0xe0
    ULONG ImageBias;                                                        //0xe4
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0xe8
    struct _RTL_BITMAP ImageBitMap;                                         //0xec
    VOID* ApiSetSection;                                                    //0xf4
    VOID* ApiSetSchema;                                                     //0xf8
    ULONG ApiSetSchemaSize;                                                 //0xfc
    ULONG LostDataFiles;                                                    //0x100
    ULONG LostDataPages;                                                    //0x104
    ULONG ImageFailureReason;                                               //0x108
    struct _SECTION* CfgBitMapSection32;                                    //0x10c
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x110
    ULONG ImageCfgFailure;                                                  //0x114
    ULONG ImageChecksumBreakpoint;                                          //0x118
    ULONG ImageSizeBreakpoint;                                              //0x11c
    volatile LONG ImageValidationFailed;                                    //0x120
};
/* Used in */
// _MI_SYSTEM_INFORMATION

