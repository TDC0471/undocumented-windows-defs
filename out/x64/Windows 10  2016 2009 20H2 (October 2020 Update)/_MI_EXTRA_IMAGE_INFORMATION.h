#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _MI_EXTRA_IMAGE_INFORMATION
{
    ULONG SizeOfHeaders;                                                    //0x0
    ULONG SizeOfImage;                                                      //0x4
    ULONG TimeDateStamp;                                                    //0x8
};
/* Used in */
// _MI_SECTION_IMAGE_INFORMATION

