#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_MMPTE.h>
#include <_MMEXTEND_INFO.h>
#include <_EPROCESS.h>
#include <_SECTION_IMAGE_INFORMATION.h>

//0x40 bytes (sizeof)
struct _SEGMENT
{
    struct _CONTROL_AREA* ControlArea;                                      //0x0
    ULONG TotalNumberOfPtes;                                                //0x4
    ULONG NonExtendedPtes;                                                  //0x8
    ULONG WritableUserReferences;                                           //0xc
    ULONGLONG SizeOfSegment;                                                //0x10
    struct _MMPTE SegmentPteTemplate;                                       //0x18
    ULONG NumberOfCommittedPages;                                           //0x1c
    struct _MMEXTEND_INFO* ExtendInfo;                                      //0x20
    VOID* SystemImageBase;                                                  //0x24
    VOID* BasedAddress;                                                     //0x28
    union
    {
        ULONG ImageCommitment;                                              //0x2c
        struct _EPROCESS* CreatingProcess;                                  //0x2c
    } u1;                                                                   //0x2c
    union
    {
        struct _SECTION_IMAGE_INFORMATION* ImageInformation;                //0x30
        VOID* FirstMappedVa;                                                //0x30
    } u2;                                                                   //0x30
    struct _MMPTE* PrototypePte;                                            //0x34
    struct _MMPTE ThePtes[1];                                               //0x38
};
/* Used in */
// _CONTROL_AREA
// _LARGE_CONTROL_AREA

