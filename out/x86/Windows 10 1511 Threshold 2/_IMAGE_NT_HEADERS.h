#pragma once
/* ------------------ */

#include <_IMAGE_FILE_HEADER.h>
#include <_IMAGE_OPTIONAL_HEADER.h>

//0xf8 bytes (sizeof)
struct _IMAGE_NT_HEADERS
{
    ULONG Signature;                                                        //0x0
    struct _IMAGE_FILE_HEADER FileHeader;                                   //0x4
    struct _IMAGE_OPTIONAL_HEADER OptionalHeader;                           //0x18
};
