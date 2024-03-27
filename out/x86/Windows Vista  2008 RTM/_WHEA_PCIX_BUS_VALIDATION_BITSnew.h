#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WHEA_PCIX_BUS_VALIDATION_BITS
{
    ULONGLONG ErrorStatusValid:1;                                           //0x0
    ULONGLONG ErrorTypeValid:1;                                             //0x0
    ULONGLONG BusIdValid:1;                                                 //0x0
    ULONGLONG BusAddressValid:1;                                            //0x0
    ULONGLONG BusDataValid:1;                                               //0x0
    ULONGLONG CommandValid:1;                                               //0x0
    ULONGLONG RequestorIdValid:1;                                           //0x0
    ULONGLONG CompleterIdValid:1;                                           //0x0
    ULONGLONG TargetIdValid:1;                                              //0x0
    ULONGLONG Reserved:55;                                                  //0x0
};
/* Used in */
// _WHEA_PCIX_BUS_ERROR

