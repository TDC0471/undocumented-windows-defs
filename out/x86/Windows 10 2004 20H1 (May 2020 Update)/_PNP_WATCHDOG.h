#pragma once
/* ------------------ */

#include <_WDT_HANDLE.h>
#include <_PNP_WATCHDOG_TYPE.h>

//0x18 bytes (sizeof)
struct _PNP_WATCHDOG
{
    ULONGLONG WatchdogStart;                                                //0x0
    struct _WDT_HANDLE* WatchdogTimer;                                      //0x8
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;                            //0xc
    VOID* WatchdogContext;                                                  //0x10
    UCHAR TriggerEventLogged;                                               //0x14
};
/* Used in */
// _PNP_DEVICE_COMPLETION_REQUEST
// _PNP_DEVICE_EVENT_ENTRY

