#pragma once
/* ------------------ */

#include <wil_details_ServiceReportingKind.h>

//0x8 bytes (sizeof)
struct Change
{
    enum wil_details_ServiceReportingKind kind;                             //0x0
    ULONG count;                                                            //0x4
};
