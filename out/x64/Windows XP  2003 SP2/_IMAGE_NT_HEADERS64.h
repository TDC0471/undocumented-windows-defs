#pragma once
/* ------------------ */

#include <_IMAGE_FILE_HEADER.h>
#include <_IMAGE_OPTIONAL_HEADER64.h>

//0x108 bytes (sizeof)
struct _IMAGE_NT_HEADERS64
{
    ULONG Signature;                                                        //0x0
    struct _IMAGE_FILE_HEADER FileHeader;                                   //0x4
    struct _IMAGE_OPTIONAL_HEADER64 OptionalHeader;                         //0x18
};
