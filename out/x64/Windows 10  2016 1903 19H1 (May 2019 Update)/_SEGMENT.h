#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_SEGMENT_FLAGS.h>
#include <_MMEXTEND_INFO.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_SECTION_IMAGE_INFORMATION.h>
#include <_MMPTE.h>

//0x48 bytes (sizeof)
struct _SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x8
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0xc
    ULONGLONG NumberOfCommittedPages;                                       //0x10
    ULONGLONG SizeOfSegment;                                                //0x18
    union
    {
        struct _MMEXTEND_INFO* ExtendInfo;                                  //0x20
        VOID* BasedAddress;                                                 //0x20
    };
    struct _EX_PUSH_LOCK SegmentLock;                                       //0x28
    union
    {
        ULONGLONG ImageCommitment;                                          //0x30
        ULONG CreatingProcessId;                                            //0x30
    } u1;                                                                   //0x30
    union
    {
        struct _MI_SECTION_IMAGE_INFORMATION* ImageInformation;             //0x38
        VOID* FirstMappedVa;                                                //0x38
    } u2;                                                                   //0x38
    struct _MMPTE* PrototypePte;                                            //0x40
};
/* Used in */
// _CONTROL_AREA
// _MMPAGE_FILE_EXPANSION

