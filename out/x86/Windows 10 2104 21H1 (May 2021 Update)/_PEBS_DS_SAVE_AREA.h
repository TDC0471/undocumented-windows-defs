#pragma once
/* ------------------ */

#include <_PEBS_DS_SAVE_AREA32.h>
#include <_PEBS_DS_SAVE_AREA64.h>

//0xa0 bytes (sizeof)
struct _PEBS_DS_SAVE_AREA
{
    union
    {
        struct _PEBS_DS_SAVE_AREA32 As32Bit;                                //0x0
        struct _PEBS_DS_SAVE_AREA64 As64Bit;                                //0x0
    };
};
/* Used in */
// _PROCESSOR_PROFILE_CONTROL_AREA

