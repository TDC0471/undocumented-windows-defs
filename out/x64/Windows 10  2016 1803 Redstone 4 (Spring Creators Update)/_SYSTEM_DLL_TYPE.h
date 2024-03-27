#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SYSTEM_DLL_TYPE
{
    PsNativeSystemDll = 0,
    PsWowX86SystemDll = 1,
    PsWowArm32SystemDll = 2,
    PsWowAmd64SystemDll = 3,
    PsWowChpeX86SystemDll = 4,
    PsVsmEnclaveRuntimeDll = 5,
    PsSystemDllTotalTypes = 6
};
/* Used in */
// _EWOW64PROCESS

