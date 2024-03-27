#pragma once
/* ------------------ */

#include <_MI_DECAY_TIMER_LINKAGE.h>

//0x4 bytes (sizeof)
struct _MI_DECAY_TIMER_LINK
{
    union
    {
        ULONG Long;                                                         //0x0
        struct _MI_DECAY_TIMER_LINKAGE e1;                                  //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _MI_PARTITION_PAGE_LISTS

