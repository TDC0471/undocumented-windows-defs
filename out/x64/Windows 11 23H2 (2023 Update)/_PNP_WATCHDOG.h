#pragma once
/* ------------------ */

#include <_WDT_HANDLE.h>
#include <_PNP_WATCHDOG_TYPE.h>
#include <_UNICODE_STRING.h>

//0x40 bytes (sizeof)
struct _PNP_WATCHDOG
{
    ULONGLONG WatchdogStart;                                                //0x0
    struct _WDT_HANDLE* WatchdogTimer;                                      //0x8
    enum _PNP_WATCHDOG_TYPE WatchdogContextType;                            //0x10
    VOID* WatchdogContext;                                                  //0x18
    UCHAR FirstChanceTriggered;                                             //0x20
    UCHAR TelemetryGenerated;                                               //0x21
    struct _UNICODE_STRING DriverToBlame;                                   //0x28
    WCHAR DriverToBlameBuffer[1];                                           //0x38
};
/* Used in */
// _PNP_DEVICE_COMPLETION_REQUEST
// _PNP_DEVICE_EVENT_ENTRY

