#pragma once
/* ------------------ */

#include <_HV_GET_BIN_CONTEXT.h>

//0x8 bytes (sizeof)
struct _HV_GET_CELL_CONTEXT
{
    ULONG Cell;                                                             //0x0
    struct _HV_GET_BIN_CONTEXT BinContext;                                  //0x4
};
/* Used in */
// _HHIVE

