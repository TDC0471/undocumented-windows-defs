#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _DOMAIN_CONFIGURATION_X64
{
    union _LARGE_INTEGER FirstLevelPageTableRoot;                           //0x0
    UCHAR TranslationEnabled;                                               //0x8
};
/* Used in */
// _DOMAIN_CONFIGURATION

