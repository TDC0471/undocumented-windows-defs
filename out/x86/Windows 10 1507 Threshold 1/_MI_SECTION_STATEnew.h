#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_AVL_TREE.h>
#include <_MSUBSECTION.h>
#include <_CONTROL_AREA.h>
#include <_RTL_BITMAP.h>
#include <_SECTION.h>

//0x140 bytes (sizeof)
struct _MI_SECTION_STATE
{
    volatile LONG SegmentListLock;                                          //0x0
    volatile LONG SectionObjectPointersLock;                                //0x40
    struct _EX_PUSH_LOCK SectionExtendLock;                                 //0x44
    struct _EX_PUSH_LOCK SectionExtendSetLock;                              //0x48
    struct _RTL_AVL_TREE SectionBasedRoot;                                  //0x4c
    struct _EX_PUSH_LOCK SectionBasedLock;                                  //0x50
    ULONG UnusedSubsectionPagedPool;                                        //0x54
    ULONG UnusedSegmentForceFree;                                           //0x58
    ULONG DataSectionProtectionMask;                                        //0x5c
    VOID* HighSectionBase;                                                  //0x60
    struct _MSUBSECTION PhysicalSubsection;                                 //0x64
    struct _CONTROL_AREA PhysicalControlArea;                               //0xa8
    struct _RTL_AVL_TREE PageFileSectionHead;                               //0xf8
    volatile LONG PageFileSectionListSpinLock;                              //0xfc
    ULONG ImageBias;                                                        //0x100
    struct _EX_PUSH_LOCK RelocateBitmapsLock;                               //0x104
    struct _RTL_BITMAP ImageBitMap;                                         //0x108
    VOID* ApiSetSection;                                                    //0x110
    VOID* ApiSetSchema;                                                     //0x114
    ULONG ApiSetSchemaSize;                                                 //0x118
    ULONG LostDataFiles;                                                    //0x11c
    ULONG LostDataPages;                                                    //0x120
    ULONG ImageFailureReason;                                               //0x124
    struct _SECTION* CfgBitMapSection32;                                    //0x128
    struct _CONTROL_AREA* CfgBitMapControlArea32;                           //0x12c
    ULONG ImageCfgFailure;                                                  //0x130
    volatile LONG ImageValidationFailed;                                    //0x134
};
/* Used in */
// _MI_SYSTEM_INFORMATION

