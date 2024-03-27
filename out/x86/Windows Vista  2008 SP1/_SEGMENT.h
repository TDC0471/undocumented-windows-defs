#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_SEGMENT_FLAGS.h>
#include <_MMEXTEND_INFO.h>
#include <_EX_PUSH_LOCK.h>
#include <_EPROCESS.h>
#include <_MI_SECTION_IMAGE_INFORMATION.h>
#include <_MMPTE.h>

//0x30 bytes (sizeof)
struct _SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x4
    struct _SEGMENT_FLAGS SegmentFlags;                                     //0x8
    ULONG NumberOfCommittedPages;                                           //0xc
    ULONGLONG SizeOfSegment;                                                //0x10
    union
    {
        struct _MMEXTEND_INFO* ExtendInfo;                                  //0x18
        VOID* BasedAddress;                                                 //0x18
    };
    struct _EX_PUSH_LOCK SegmentLock;                                       //0x1c
    union
    {
        ULONG ImageCommitment;                                              //0x20
        struct _EPROCESS* CreatingProcess;                                  //0x20
    } u1;                                                                   //0x20
    union
    {
        struct _MI_SECTION_IMAGE_INFORMATION* ImageInformation;             //0x24
        VOID* FirstMappedVa;                                                //0x24
    } u2;                                                                   //0x24
    struct _MMPTE* PrototypePte;                                            //0x28
    struct _MMPTE ThePtes[1];                                               //0x2c
};
/* Used in */
// _CONTROL_AREA

