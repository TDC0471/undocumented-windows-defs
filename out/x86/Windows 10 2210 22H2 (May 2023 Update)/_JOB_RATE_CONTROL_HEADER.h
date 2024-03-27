#pragma once
/* ------------------ */

#include <_RTL_BITMAP.h>

//0x14 bytes (sizeof)
struct _JOB_RATE_CONTROL_HEADER
{
    VOID* RateControlQuotaReference;                                        //0x0
    struct _RTL_BITMAP OverQuotaHistory;                                    //0x4
    UCHAR* BitMapBuffer;                                                    //0xc
    ULONG BitMapBufferSize;                                                 //0x10
};
/* Used in */
// _EJOB

