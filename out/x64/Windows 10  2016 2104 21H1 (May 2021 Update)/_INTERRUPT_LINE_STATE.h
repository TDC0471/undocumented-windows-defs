#pragma once
/* ------------------ */

#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>
#include <_INTERRUPT_LINE.h>
#include <_INTERRUPT_TARGET.h>

//0x38 bytes (sizeof)
struct _INTERRUPT_LINE_STATE
{
    enum _KINTERRUPT_POLARITY Polarity;                                     //0x0
    UCHAR EmulateActiveBoth;                                                //0x4
    enum _KINTERRUPT_MODE TriggerMode;                                      //0x8
    ULONG Flags;                                                            //0xc
    struct _INTERRUPT_LINE Routing;                                         //0x10
    struct _INTERRUPT_TARGET ProcessorTarget;                               //0x18
    ULONG Vector;                                                           //0x30
    ULONG Priority;                                                         //0x34
};
/* Used in */
// _INTERRUPT_FUNCTION_TABLE

