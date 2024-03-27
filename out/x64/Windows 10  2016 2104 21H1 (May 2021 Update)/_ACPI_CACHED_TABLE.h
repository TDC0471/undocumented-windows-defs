#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_DESCRIPTION_HEADER.h>

//0x40 bytes (sizeof)
struct _ACPI_CACHED_TABLE
{
    struct _LIST_ENTRY Links;                                               //0x0
    union _LARGE_INTEGER PhysicalAddress;                                   //0x10
    struct _DESCRIPTION_HEADER Header;                                      //0x18
};
