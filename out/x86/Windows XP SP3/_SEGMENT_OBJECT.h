#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_CONTROL_AREA.h>
#include <_SUBSECTION.h>
#include <_LARGE_CONTROL_AREA.h>
#include <_MMSECTION_FLAGS.h>
#include <_MMSUBSECTION_FLAGS.h>

//0x30 bytes (sizeof)
struct _SEGMENT_OBJECT
{
    VOID* BaseAddress;                                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x4
    union _LARGE_INTEGER SizeOfSegment;                                     //0x8
    ULONG NonExtendedPtes;                                                  //0x10
    ULONG ImageCommitment;                                                  //0x14
    struct _CONTROL_AREA* ControlArea;                                      //0x18
    struct _SUBSECTION* Subsection;                                         //0x1c
    struct _LARGE_CONTROL_AREA* LargeControlArea;                           //0x20
    struct _MMSECTION_FLAGS* MmSectionFlags;                                //0x24
    struct _MMSUBSECTION_FLAGS* MmSubSectionFlags;                          //0x28
};
/* Used in */
// _SECTION_OBJECT

