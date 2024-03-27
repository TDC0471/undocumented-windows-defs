#pragma once
/* ------------------ */

#include <_FNSAVE_FORMAT.h>
#include <_FXSAVE_FORMAT.h>

//0x210 bytes (sizeof)
struct _FX_SAVE_AREA
{
    union
    {
        struct _FNSAVE_FORMAT FnArea;                                       //0x0
        struct _FXSAVE_FORMAT FxArea;                                       //0x0
    } U;                                                                    //0x0
    ULONG NpxSavedCpu;                                                      //0x208
    ULONG Cr0NpxState;                                                      //0x20c
};
/* Used in */
// _KPRCB

