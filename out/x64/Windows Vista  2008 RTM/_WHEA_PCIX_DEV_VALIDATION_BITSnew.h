#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WHEA_PCIX_DEV_VALIDATION_BITS
{
    ULONGLONG ErrorStatusValid:1;                                           //0x0
    ULONGLONG IdInfoValid:1;                                                //0x0
    ULONGLONG MemoryNumberValid:1;                                          //0x0
    ULONGLONG IoNumberValid:1;                                              //0x0
    ULONGLONG RegisterDataPairValid:1;                                      //0x0
    ULONGLONG Reserved:59;                                                  //0x0
};
/* Used in */
// _WHEA_PCIX_DEVICE_ERROR

