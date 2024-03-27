#pragma once
/* ------------------ */

#include <_LUID.h>

//0x10 bytes (sizeof)
struct _TOKEN_SOURCE
{
    CHAR SourceName[8];                                                     //0x0
    struct _LUID SourceIdentifier;                                          //0x8
};
/* Used in */
// _TOKEN
// _TOKEN_CONTROL

