#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _DBGKD_SEARCH_MEMORY
{
    union
    {
        ULONGLONG SearchAddress;                                            //0x0
        ULONGLONG FoundAddress;                                             //0x0
    };
    ULONGLONG SearchLength;                                                 //0x8
    ULONG PatternLength;                                                    //0x10
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

