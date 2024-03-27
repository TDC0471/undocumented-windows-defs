#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum PDC_RESOURCE
{
    PdcResourceNone = 0,
    PdcResourceSystemForeground = 1,
    PdcResourceUniversalApplications = 2,
    PdcResourceWin32 = 3,
    PdcResourceNetwork = 4,
    PdcResourceSystemBackground = 5,
    PdcResourceMax = 5
};
