#pragma once
/* ------------------ */

#include <_KSPECIAL_REGISTERS.h>
#include <_CONTEXT.h>

//0x5b0 bytes (sizeof)
struct _KPROCESSOR_STATE
{
    struct _KSPECIAL_REGISTERS SpecialRegisters;                            //0x0
    struct _CONTEXT ContextFrame;                                           //0xe0
};
/* Used in */
// _KPRCB
// _POP_HIBER_CONTEXT
