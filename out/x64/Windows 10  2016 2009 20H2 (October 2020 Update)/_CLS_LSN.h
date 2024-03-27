#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _CLS_LSN
{
    struct
    {
        ULONG idxRecord;                                                    //0x0
        ULONG cidContainer;                                                 //0x4
    } offset;                                                               //0x0
    ULONGLONG ullOffset;                                                    //0x0
};
/* Used in */
// _KTM
// _KTRANSACTION

