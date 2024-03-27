#pragma once
/* ------------------ */

#include <_WHEA_REVISION.h>
#include <_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS.h>
#include <_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS.h>
#include <_GUID.h>
#include <_WHEA_ERROR_SEVERITY.h>

//0x48 bytes (sizeof)
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
    ULONG SectionOffset;                                                    //0x0
    ULONG SectionLength;                                                    //0x4
    union _WHEA_REVISION Revision;                                          //0x8
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;        //0xa
    UCHAR Reserved;                                                         //0xb
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;                //0xc
    struct _GUID SectionType;                                               //0x10
    struct _GUID FRUId;                                                     //0x20
    enum _WHEA_ERROR_SEVERITY SectionSeverity;                              //0x30
    CHAR FRUText[20];                                                       //0x34
};
/* Used in */
// _WHEA_ERROR_RECORD

