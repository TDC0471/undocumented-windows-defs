#pragma once
/* ------------------ */

#include <_GENERAL_LOOKASIDE.h>

//0x8 bytes (sizeof)
struct _PP_LOOKASIDE_LIST
{
    struct _GENERAL_LOOKASIDE* P;                                           //0x0
    struct _GENERAL_LOOKASIDE* L;                                           //0x4
};
/* Used in */
// _KPRCB

