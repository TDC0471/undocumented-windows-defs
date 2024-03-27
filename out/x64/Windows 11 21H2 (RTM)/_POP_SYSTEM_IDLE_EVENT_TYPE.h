#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_SYSTEM_IDLE_EVENT_TYPE
{
    PopSystemIdleEventTypeMonitorOffUserInput = 0,
    PopSystemIdleEventTypeMonitorOnUserInput = 1,
    PopSystemIdleEventTypeUserPresence = 2,
    PopSystemIdleEventTypeResumeFromSxSystemPowerState = 3,
    PopSystemIdleEventTypeMax = 4,
    PopSystemIdleEventTypeInvalid = 4
};
