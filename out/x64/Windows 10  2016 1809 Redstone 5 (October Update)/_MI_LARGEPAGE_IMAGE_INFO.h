#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _MI_LARGEPAGE_IMAGE_INFO
{
    UCHAR LargeImageBias;                                                   //0x0
    UCHAR Spare[3];                                                         //0x1
    ULONGLONG ActualImageViewSize;                                          //0x8
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

