#pragma once
/* ------------------ */

#include <wil_details_RecordUsageResult.h>

//0x10 bytes (sizeof)
struct wil_details_SetPropertyFlagContext
{
    struct wil_details_RecordUsageResult* result;                           //0x0
    ULONG flags;                                                            //0x8
    LONG ignoreReporting;                                                   //0xc
};
