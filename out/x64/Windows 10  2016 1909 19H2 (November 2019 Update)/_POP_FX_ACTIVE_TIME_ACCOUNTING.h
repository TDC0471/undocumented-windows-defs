#pragma once
/* ------------------ */


//0x60 bytes (sizeof)
struct _POP_FX_ACTIVE_TIME_ACCOUNTING
{
    ULONGLONG Total;                                                        //0x0
    ULONGLONG Unattributed;                                                 //0x8
    ULONGLONG Buckets[5];                                                   //0x10
    ULONGLONG PerBucket[5];                                                 //0x38
};
/* Used in */
// _POP_FX_ACCOUNTING

