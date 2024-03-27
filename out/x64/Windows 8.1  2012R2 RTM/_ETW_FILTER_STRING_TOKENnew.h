#pragma once
/* ------------------ */

#include <_ETW_FILTER_STRING_TOKEN_ELEMENT.h>

//0x18 bytes (sizeof)
struct _ETW_FILTER_STRING_TOKEN
{
    USHORT Count;                                                           //0x0
    struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1];                      //0x8
};
/* Used in */
// _ETW_FILTER_HEADER

