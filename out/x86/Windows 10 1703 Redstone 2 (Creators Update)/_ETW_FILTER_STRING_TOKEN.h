#pragma once
/* ------------------ */

#include <_ETW_FILTER_STRING_TOKEN_ELEMENT.h>

//0xc bytes (sizeof)
struct _ETW_FILTER_STRING_TOKEN
{
    USHORT Count;                                                           //0x0
    struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1];                      //0x4
};
/* Used in */
// _ETW_FILTER_HEADER

