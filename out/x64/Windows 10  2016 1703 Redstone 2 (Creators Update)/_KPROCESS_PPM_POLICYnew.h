#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KPROCESS_PPM_POLICY
{
    ProcessPpmDefault = 0,
    ProcessPpmThrottle = 1,
    ProcessPpmNoThrottle = 2,
    MaxProcessPpmPolicy = 3
};
