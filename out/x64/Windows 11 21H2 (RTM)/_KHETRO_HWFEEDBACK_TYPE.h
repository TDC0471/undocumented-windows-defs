#pragma once
/* ------------------ */

#include <_KHETERO_HWFEEDBACK_CLASS.h>

//0x8 bytes (sizeof)
struct _KHETRO_HWFEEDBACK_TYPE
{
    ULONG Count;                                                            //0x0
    struct _KHETERO_HWFEEDBACK_CLASS HwFeedbackClass[1];                    //0x4
};
/* Used in */
// _PROCESSOR_POWER_STATE

