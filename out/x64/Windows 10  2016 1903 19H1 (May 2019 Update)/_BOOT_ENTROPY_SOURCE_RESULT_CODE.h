#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _BOOT_ENTROPY_SOURCE_RESULT_CODE
{
    BootEntropySourceStructureUninitialized = 0,
    BootEntropySourceDisabledByPolicy = 1,
    BootEntropySourceNotPresent = 2,
    BootEntropySourceError = 3,
    BootEntropySourceSuccess = 4
};
/* Used in */
// _BOOT_ENTROPY_SOURCE_LDR_RESULT

