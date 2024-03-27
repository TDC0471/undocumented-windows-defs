#pragma once
/* ------------------ */

#include <_EPARTITION.h>

//0xc bytes (sizeof)
struct _MI_LARGEPAGE_VAD_INFO
{
    UCHAR LargeImageBias;                                                   //0x0
    UCHAR Spare[3];                                                         //0x1
    ULONG ActualImageViewSize;                                              //0x4
    struct _EPARTITION* ReferencedPartition;                                //0x8
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

