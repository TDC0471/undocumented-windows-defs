#pragma once
/* ------------------ */

#include <_EPARTITION.h>

//0x18 bytes (sizeof)
struct _MI_LARGEPAGE_VAD_INFO
{
    UCHAR LargeImageBias;                                                   //0x0
    UCHAR Spare[3];                                                         //0x1
    ULONGLONG ActualImageViewSize;                                          //0x8
    struct _EPARTITION* ReferencedPartition;                                //0x10
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

