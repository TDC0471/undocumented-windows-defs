#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_PNP_WATCHDOG_TYPE.h>

//0xd8 bytes (sizeof)
struct _PNP_WATCHDOG
{
    ULONGLONG WatchdogStart;                                                //0x0
    struct _KTIMER WatchdogTimer;                                           //0x8
    struct _KDPC WatchdogDpc;                                               //0x48
    UCHAR WatchdogEnabled;                                                  //0x88
    UCHAR WatchdogSecondChance;                                             //0x89
    struct _KEVENT WatchdogComplete;                                        //0x90
    struct _WORK_QUEUE_ITEM WatchdogWorkItem;                               //0xa8
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;                            //0xc8
    VOID* WatchdogContext;                                                  //0xd0
};
/* Used in */
// _PNP_DEVICE_COMPLETION_REQUEST
// _PNP_DEVICE_EVENT_ENTRY

