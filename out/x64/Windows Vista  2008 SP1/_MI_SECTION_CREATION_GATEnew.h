#pragma once
/* ------------------ */

#include <_MI_SECTION_CREATION_GATE.h>
#include <_KGATE.h>

//0x20 bytes (sizeof)
struct _MI_SECTION_CREATION_GATE
{
    struct _MI_SECTION_CREATION_GATE* Next;                                 //0x0
    struct _KGATE Gate;                                                     //0x8
};
/* Used in */
// _CONTROL_AREA
// _MI_SECTION_CREATION_GATE

