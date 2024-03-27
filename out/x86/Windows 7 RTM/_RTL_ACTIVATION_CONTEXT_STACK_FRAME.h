#pragma once
/* ------------------ */

#include <_RTL_ACTIVATION_CONTEXT_STACK_FRAME.h>
#include <_ACTIVATION_CONTEXT.h>

//0xc bytes (sizeof)
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;                   //0x0
    struct _ACTIVATION_CONTEXT* ActivationContext;                          //0x4
    ULONG Flags;                                                            //0x8
};
/* Used in */
// _ACTIVATION_CONTEXT_STACK
// _RTL_ACTIVATION_CONTEXT_STACK_FRAME

