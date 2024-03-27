#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _BOOT_ENTROPY_SOURCE_ID
{
    BootEntropySourceNone = 0,
    BootEntropySourceSeedfile = 1,
    BootEntropySourceExternal = 2,
    BootEntropySourceTpm = 3,
    BootEntropySourceRdrand = 4,
    BootEntropySourceTime = 5,
    BootEntropySourceAcpiOem0 = 6,
    BootEntropySourceUefi = 7,
    BootEntropySourceCng = 8,
    BootMaxEntropySources = 8
};
/* Used in */
// _BOOT_ENTROPY_SOURCE_LDR_RESULT

