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
#include <_RTL_BITMAP.h>
#include <_MI_DLL_OVERFLOW_AREA.h>
#include <_SECTION.h>

//0x180 bytes (sizeof)
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
    struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;  //0xe8
    UCHAR FileOnlyMemoryPfnsCreated;                                        //0xfc
    UCHAR DanglingExtentsWorkerActive;                                      //0xfd
    UCHAR PurgingExtentsNeedWatchdog;                                       //0xfe
    struct _RTL_AVL_TREE PrototypePtesTree;                                 //0x100
    volatile LONG PrototypePtesTreeSpinLock;                                //0x104
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x108
    struct _RTL_BITMAP ImageBitMapNative;                                   //0x10c
    ULONG ImageBiasNative;                                                  //0x114
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;                              //0x118
    VOID* ApiSetSection;                                                    //0x120
    VOID* ApiSetSchema;                                                     //0x124
    ULONG ApiSetSchemaSize;                                                 //0x128
    ULONG LostDataFiles;                                                    //0x12c
    ULONG LostDataPages;                                                    //0x130
    ULONG ImageFailureReason;                                               //0x134
    struct _SECTION* CfgBitMapSection;                                      //0x138
    struct _CONTROL_AREA* CfgBitMapControlArea;                             //0x13c
    ULONG ImageCfgFailure;                                                  //0x140
    ULONG ImageBreakpointEnabled;                                           //0x144
    ULONG ImageBreakpointChecksum;                                          //0x148
    ULONG ImageBreakpointSize;                                              //0x14c
    volatile LONG ImageValidationFailed;                                    //0x150
    struct _RTL_AVL_TREE ImageExtentTree;                                   //0x154
    struct _EX_PUSH_LOCK ImageExtentTreeLock;                               //0x158
    ULONG HotPatchReserveSize;                                              //0x15c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

