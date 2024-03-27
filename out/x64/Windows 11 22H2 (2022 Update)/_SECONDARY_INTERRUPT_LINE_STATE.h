#pragma once
/* ------------------ */

#include <_KINTERRUPT_POLARITY.h>
#include <_KINTERRUPT_MODE.h>

//0x10 bytes (sizeof)
struct _SECONDARY_INTERRUPT_LINE_STATE
{
    enum _KINTERRUPT_POLARITY Polarity;                                     //0x0
    enum _KINTERRUPT_MODE Mode;                                             //0x4
    ULONG Vector;                                                           //0x8
    UCHAR Unmasked;                                                         //0xc
};
/* Used in */
// _SECONDARY_IC_LIST_ENTRY

