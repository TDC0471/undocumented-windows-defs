#pragma once
/* ------------------ */

#include <_RTL_HASH_TABLE.h>

//0x28 bytes (sizeof)
struct _ETW_FILTER_EVENT_NAME_DATA
{
    UCHAR FilterIn;                                                         //0x0
    UCHAR Level;                                                            //0x1
    ULONGLONG MatchAnyKeyword;                                              //0x8
    ULONGLONG MatchAllKeyword;                                              //0x10
    struct _RTL_HASH_TABLE NameTable;                                       //0x18
};
/* Used in */
// _ETW_FILTER_HEADER

