#pragma once
/* ------------------ */

#include <_CONTEXT.h>
#include <_KSPECIAL_REGISTERS.h>

//0x320 bytes (sizeof)
struct _KPROCESSOR_STATE
{
    struct _CONTEXT ContextFrame;                                           //0x0
    struct _KSPECIAL_REGISTERS SpecialRegisters;                            //0x2cc
};
/* Used in */
// _KPRCB
// _POP_HIBER_CONTEXT

