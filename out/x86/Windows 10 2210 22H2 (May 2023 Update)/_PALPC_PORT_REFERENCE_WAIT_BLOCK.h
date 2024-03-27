#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x14 bytes (sizeof)
struct _PALPC_PORT_REFERENCE_WAIT_BLOCK
{
    struct _KEVENT DesiredReferenceNoEvent;                                 //0x0
    LONG DesiredReferenceNo;                                                //0x10
};
/* Used in */
// _ALPC_PORT

