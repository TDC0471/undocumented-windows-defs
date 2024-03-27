#pragma once
/* ------------------ */

#include <wil_details_RecordUsageResult.h>

//0xc bytes (sizeof)
struct wil_details_SetPropertyFlagContext
{
    struct wil_details_RecordUsageResult* result;                           //0x0
    ULONG flags;                                                            //0x4
    LONG ignoreReporting;                                                   //0x8
};
