#pragma once
/* ------------------ */

#include <_MMWSL_INSTANCE.h>
#include <_MMWSL_SHARED.h>

//0x200 bytes (sizeof)
struct _MMWSL_FULL
{
    struct _MMWSL_INSTANCE Instance;                                        //0x0
    struct _MMWSL_SHARED Shared;                                            //0x1a0
};
/* Used in */
// _MI_SESSION_STATE

