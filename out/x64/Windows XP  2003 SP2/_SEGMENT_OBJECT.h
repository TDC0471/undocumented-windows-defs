#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_CONTROL_AREA.h>
#include <_SUBSECTION.h>
#include <_LARGE_CONTROL_AREA.h>
#include <_MMSECTION_FLAGS.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x48 bytes (sizeof)
struct _SEGMENT_OBJECT
{
    VOID* BaseAddress;                                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x8
    union _LARGE_INTEGER SizeOfSegment;                                     //0x10
    ULONG NonExtendedPtes;                                                  //0x18
    ULONG ImageCommitment;                                                  //0x1c
    struct _CONTROL_AREA* ControlArea;                                      //0x20
    struct _SUBSECTION* Subsection;                                         //0x28
    struct _LARGE_CONTROL_AREA* LargeControlArea;                           //0x30
    struct _MMSECTION_FLAGS* MmSectionFlags;                                //0x38
    struct _MMSUBSECTION_FLAGS* MmSubSectionFlags;                          //0x40
};
/* Used in */
// _SECTION_OBJECT

