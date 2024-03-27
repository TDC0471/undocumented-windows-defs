#pragma once
/* ------------------ */

#include <_MMPFN.h>
#include <_MI_STORE_INPAGE_COMPLETE_FLAGS.h>

//0x10 bytes (sizeof)
struct _MI_HARD_FAULT_STATE
{
    struct _MMPFN* SwapPfn;                                                 //0x0
    struct _MI_STORE_INPAGE_COMPLETE_FLAGS StoreFlags;                      //0x8
};
/* Used in */
// _MMINPAGE_SUPPORT

