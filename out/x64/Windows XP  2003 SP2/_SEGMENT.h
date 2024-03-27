#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_MMEXTEND_INFO.h>
#include <_SEGMENT_FLAGS.h>
#include <_EPROCESS.h>
#include <_SECTION_IMAGE_INFORMATION.h>

//0x68 bytes (sizeof)
struct _SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x8
    ULONG NonExtendedPtes;                                                  //0xc
    ULONG Spare0;                                                           //0x10
    ULONGLONG SizeOfSegment;                                                //0x18
    struct _MMPTE SegmentPteTemplate;                                       //0x20
    ULONGLONG NumberOfCommittedPages;                                       //0x28
    struct _MMEXTEND_INFO* ExtendInfo;                                      //0x30
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0x38
    VOID* BasedAddress;                                                     //0x40
    union
    {
        ULONGLONG ImageCommitment;                                          //0x48
        struct _EPROCESS* CreatingProcess;                                  //0x48
    } u1;                                                                   //0x48
    union
    {
        struct _SECTION_IMAGE_INFORMATION* ImageInformation;                //0x50
        VOID* FirstMappedVa;                                                //0x50
    } u2;                                                                   //0x50
    struct _MMPTE* PrototypePte;                                            //0x58
    struct _MMPTE ThePtes[1];                                               //0x60
};
/* Used in */
// _CONTROL_AREA
// _LARGE_CONTROL_AREA

