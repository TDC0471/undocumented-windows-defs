#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified = 0,
    PowerSystemWorking = 1,
    PowerSystemSleeping1 = 2,
    PowerSystemSleeping2 = 3,
    PowerSystemSleeping3 = 4,
    PowerSystemHibernate = 5,
    PowerSystemShutdown = 6,
    PowerSystemMaximum = 7
};
/* Used in */
// SYSTEM_POWER_CAPABILITIES
// SYSTEM_POWER_LEVEL
// _DEVICE_CAPABILITIES
// _IO_STACK_LOCATION
// _PENDING_RELATIONS_LIST_ENTRY
// _PI_BUS_EXTENSION
// _POP_DEVICE_SYS_STATE
// _POP_POWER_ACTION
// _POP_SYSTEM_IDLE
// _POWER_STATE
// _SYSTEM_POWER_POLICY

