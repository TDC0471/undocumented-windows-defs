#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>

//0x18 bytes (sizeof)
struct _KGATE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
};
/* Used in */
// _KPRCB
// _MI_CONTROL_AREA_WAIT_BLOCK
// _MI_EXTENT_DELETION_WAIT_BLOCK
// _MI_PARTITION_ZEROING
// _MI_VAD_EVENT_BLOCK
// _MMMOD_WRITER_LISTHEAD
// _MMSUPPORT_INSTANCE
// _MM_SESSION_SPACE

