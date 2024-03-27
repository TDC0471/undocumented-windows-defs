#pragma once
/* ------------------ */

#include <_MI_LARGE_PAGE_REBUILD_WAIT_BLOCK.h>
#include <_KGATE.h>

//0x14 bytes (sizeof)
struct _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK
{
    struct _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK* Next;                         //0x0
    struct _KGATE Gate;                                                     //0x4
};
/* Used in */
// _MI_LARGE_PAGE_REBUILD_WAIT_BLOCK
// _MI_REBUILD_LARGE_PAGE_TIMER

