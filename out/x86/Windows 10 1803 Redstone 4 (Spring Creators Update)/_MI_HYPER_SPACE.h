#pragma once
/* ------------------ */


//0x2000 bytes (sizeof)
struct _MI_HYPER_SPACE
{
    UCHAR VadBitmap[6144];                                                  //0x0
    UCHAR PaddingToPageBoundary[2048];                                      //0x1800
};
/* Used in */
// _MI_SYSTEM_VA_STATE

