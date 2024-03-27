#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _TPM_BOOT_ENTROPY_RESULT_CODE
{
    TpmBootEntropyStructureUninitialized = 0,
    TpmBootEntropyDisabledByPolicy = 1,
    TpmBootEntropyNoTpmFound = 2,
    TpmBootEntropyTpmError = 3,
    TpmBootEntropySuccess = 4
};
/* Used in */
// _TPM_BOOT_ENTROPY_LDR_RESULT

