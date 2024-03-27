#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>

//0x18 bytes (sizeof)
struct _KGATE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
};
/* Used in */
// _KGUARDED_MUTEX
// _KPRCB
// _MI_SECTION_CREATION_GATE
// _MMSUPPORT
// _MM_SESSION_SPACE
// _UMS_CONTROL_BLOCK

