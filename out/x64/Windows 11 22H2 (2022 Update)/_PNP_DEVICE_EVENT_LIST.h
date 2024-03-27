#pragma once
/* ------------------ */

#include <_KMUTANT.h>
#include <_FAST_MUTEX.h>
#include <_LIST_ENTRY.h>

//0x88 bytes (sizeof)
struct _PNP_DEVICE_EVENT_LIST
{
    LONG Status;                                                            //0x0
    struct _KMUTANT EventQueueMutex;                                        //0x8
    struct _FAST_MUTEX Lock;                                                //0x40
    struct _LIST_ENTRY List;                                                //0x78
};
