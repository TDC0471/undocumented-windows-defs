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
    struct _CONTROL_AREA PhysicalControlArea;                               //0x70
    struct _MMPFNLIST PurgingExtentPages;                                   //0xc0
    struct _MMPFN* DanglingExtentPages;                                     //0xd4
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;                        //0xd8
    UCHAR DanglingExtentsWorkerActive;                                      //0xe8
    UCHAR PurgingExtentsNeedWatchdog;                                       //0xe9
    struct _RTL_AVL_TREE PrototypePtesTree;                                 //0xec
    volatile LONG PrototypePtesTreeSpinLock;                                //0xf0
    ULONG ImageBias;                                                        //0xf4
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0xf8
    struct _RTL_BITMAP ImageBitMap;                                         //0xfc
    VOID* ApiSetSection;                                                    //0x104
    VOID* ApiSetSchema;                                                     //0x108
    ULONG ApiSetSchemaSize;                                                 //0x10c
    ULONG LostDataFiles;                                                    //0x110
    ULONG LostDataPages;                                                    //0x114
    ULONG ImageFailureReason;                                               //0x118
    struct _SECTION* CfgBitMapSection32;                                    //0x11c
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x120
    ULONG ImageCfgFailure;                                                  //0x124
    ULONG ImageChecksumBreakpoint;                                          //0x128
    ULONG ImageSizeBreakpoint;                                              //0x12c
    volatile LONG ImageValidationFailed;                                    //0x130
};
/* Used in */
// _MI_SYSTEM_INFORMATION

