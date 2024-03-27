#pragma once
/* ------------------ */

#include <_PNP_REPLACE_PROCESSOR_LIST.h>

//0x18 bytes (sizeof)
struct _HAL_DP_REPLACE_PARAMETERS
{
    ULONG Flags;                                                            //0x0
    struct _PNP_REPLACE_PROCESSOR_LIST* TargetProcessors;                   //0x8
    struct _PNP_REPLACE_PROCESSOR_LIST* SpareProcessors;                    //0x10
};
/* Used in */
// HAL_PRIVATE_DISPATCH

