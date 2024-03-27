#pragma once
/* ------------------ */

#include <_SECTION_IMAGE_INFORMATION.h>
#include <_MI_EXTRA_IMAGE_INFORMATION.h>

//0x48 bytes (sizeof)
struct _MI_SECTION_IMAGE_INFORMATION
{
    struct _SECTION_IMAGE_INFORMATION ExportedImageInformation;             //0x0
    struct _MI_EXTRA_IMAGE_INFORMATION InternalImageInformation;            //0x40
};
/* Used in */
// _SEGMENT

