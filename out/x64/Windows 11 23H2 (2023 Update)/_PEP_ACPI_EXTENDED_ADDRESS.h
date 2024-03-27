#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_PEP_ACPI_RESOURCE_FLAGS.h>
#include <_UNICODE_STRING.h>

//0x48 bytes (sizeof)
struct _PEP_ACPI_EXTENDED_ADDRESS
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    union _PEP_ACPI_RESOURCE_FLAGS Flags;                                   //0x4
    UCHAR ResourceFlags;                                                    //0x8
    UCHAR GeneralFlags;                                                     //0x9
    UCHAR TypeSpecificFlags;                                                //0xa
    UCHAR RevisionId;                                                       //0xb
    UCHAR Reserved;                                                         //0xc
    ULONGLONG Granularity;                                                  //0x10
    ULONGLONG MinimumAddress;                                               //0x18
    ULONGLONG MaximumAddress;                                               //0x20
    ULONGLONG TranslationAddress;                                           //0x28
    ULONGLONG AddressLength;                                                //0x30
    ULONGLONG TypeAttribute;                                                //0x38
    struct _UNICODE_STRING* DescriptorName;                                 //0x40
};
/* Used in */
// _PEP_ACPI_RESOURCE

