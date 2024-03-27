#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POWER_REQUEST_TYPE
{
    PowerRequestDisplayRequired = 0,
    PowerRequestSystemRequired = 1,
    PowerRequestAwayModeRequired = 2,
    PowerRequestExecutionRequired = 3
};
