#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_LARGEPAGE_IMAGE_INFO
{
    UCHAR LargeImageBias;                                                   //0x0
    UCHAR Spare[3];                                                         //0x1
    ULONG ActualImageViewSize;                                              //0x4
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

