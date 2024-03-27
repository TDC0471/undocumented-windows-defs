#pragma once
/* ------------------ */

#include <_MI_SUBSECTION_WAIT_BLOCK.h>
#include <_KGATE.h>

//0x20 bytes (sizeof)
struct _MI_SUBSECTION_WAIT_BLOCK
{
    struct _MI_SUBSECTION_WAIT_BLOCK* Next;                                 //0x0
    struct _KGATE Gate;                                                     //0x8
};
/* Used in */
// _MI_SUBSECTION_WAIT_BLOCK
// _SUBSECTION

