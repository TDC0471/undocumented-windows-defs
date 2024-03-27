#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SYSTEM_PROCESS_CLASSIFICATION
{
    SystemProcessClassificationNormal = 0,
    SystemProcessClassificationSystem = 1,
    SystemProcessClassificationSecureSystem = 2,
    SystemProcessClassificationMemCompression = 3,
    SystemProcessClassificationRegistry = 4,
    SystemProcessClassificationMaximum = 5
};
