#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _SEP_SID_VALUES_BLOCK
{
    ULONG BlockLength;                                                      //0x0
    LONGLONG ReferenceCount;                                                //0x8
    ULONG SidCount;                                                         //0x10
    ULONGLONG SidValuesStart;                                               //0x18
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

