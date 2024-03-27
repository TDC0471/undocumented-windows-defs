#pragma once
/* ------------------ */

#include <_KQUEUE.h>

//0x48 bytes (sizeof)
struct _ETW_REPLY_QUEUE
{
    struct _KQUEUE Queue;                                                   //0x0
    LONG EventsLost;                                                        //0x40
};
/* Used in */
// _ETW_REG_ENTRY

