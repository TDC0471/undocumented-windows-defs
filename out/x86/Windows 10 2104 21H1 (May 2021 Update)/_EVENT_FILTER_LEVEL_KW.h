#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _EVENT_FILTER_LEVEL_KW
{
    ULONGLONG MatchAnyKeyword;                                              //0x0
    ULONGLONG MatchAllKeyword;                                              //0x8
    UCHAR Level;                                                            //0x10
    UCHAR FilterIn;                                                         //0x11
};
/* Used in */
// _ETW_FILTER_HEADER

