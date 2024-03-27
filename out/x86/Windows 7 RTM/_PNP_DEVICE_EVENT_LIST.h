#pragma once
/* ------------------ */

#include <_KMUTANT.h>
#include <_KGUARDED_MUTEX.h>
#include <_LIST_ENTRY.h>

//0x4c bytes (sizeof)
struct _PNP_DEVICE_EVENT_LIST
{
    LONG Status;                                                            //0x0
    struct _KMUTANT EventQueueMutex;                                        //0x4
    struct _KGUARDED_MUTEX Lock;                                            //0x24
    struct _LIST_ENTRY List;                                                //0x44
};
