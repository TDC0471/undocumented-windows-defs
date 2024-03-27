#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>

//0x10 bytes (sizeof)
struct _KGATE
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
};
/* Used in */
// _EX_PUSH_LOCK_WAIT_BLOCK
// _KGUARDED_MUTEX
// _KTHREAD
// _MI_SECTION_CREATION_GATE
// _MMSUPPORT
// _MM_SESSION_SPACE

