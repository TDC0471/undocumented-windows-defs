#pragma once
/* ------------------ */

#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KEVENT.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_PNP_WATCHDOG_TYPE.h>

//0x80 bytes (sizeof)
struct _PNP_WATCHDOG
{
    ULONGLONG WatchdogStart;                                                //0x0
    struct _KTIMER WatchdogTimer;                                           //0x8
    struct _KDPC WatchdogDpc;                                               //0x30
    UCHAR WatchdogEnabled;                                                  //0x50
    UCHAR WatchdogSecondChance;                                             //0x51
    struct _KEVENT WatchdogComplete;                                        //0x54
    struct _WORK_QUEUE_ITEM WatchdogWorkItem;                               //0x64
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;                            //0x74
    VOID* WatchdogContext;                                                  //0x78
};
/* Used in */
// _PNP_DEVICE_COMPLETION_REQUEST
// _PNP_DEVICE_EVENT_ENTRY

