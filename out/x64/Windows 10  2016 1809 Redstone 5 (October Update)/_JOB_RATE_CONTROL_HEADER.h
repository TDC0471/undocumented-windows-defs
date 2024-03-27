#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x28 bytes (sizeof)
struct _JOB_RATE_CONTROL_HEADER
{
    VOID* RateControlQuotaReference;                                        //0x0
    struct _RTL_BITMAP OverQuotaHistory;                                    //0x8
    UCHAR* BitMapBuffer;                                                    //0x18
    ULONGLONG BitMapBufferSize;                                             //0x20
};
/* Used in */
// _EJOB

