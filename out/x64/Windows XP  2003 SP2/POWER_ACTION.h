#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum POWER_ACTION
{
    PowerActionNone = 0,
    PowerActionReserved = 1,
    PowerActionSleep = 2,
    PowerActionHibernate = 3,
    PowerActionShutdown = 4,
    PowerActionShutdownReset = 5,
    PowerActionShutdownOff = 6,
    PowerActionWarmEject = 7
};
/* Used in */
// POWER_ACTION_POLICY
// _IO_STACK_LOCATION
// _POP_POWER_ACTION

