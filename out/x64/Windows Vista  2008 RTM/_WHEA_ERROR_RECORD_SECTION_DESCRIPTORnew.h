#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_WHEA_ERROR_SEVERITY.h>

//0x48 bytes (sizeof)
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
{
    ULONG SectionOffset;                                                    //0x0
    ULONG SectionLength;                                                    //0x4
    USHORT Revision;                                                        //0x8
    UCHAR ValidationBits;                                                   //0xa
    UCHAR Reserved;                                                         //0xb
    ULONG Flags;                                                            //0xc
    struct _GUID SectionType;                                               //0x10
    struct _GUID FRUId;                                                     //0x20
    enum _WHEA_ERROR_SEVERITY SectionSeverity;                              //0x30
    CHAR FRUText[20];                                                       //0x34
};
/* Used in */
// _WHEA_ERROR_RECORD

