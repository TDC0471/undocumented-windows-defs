#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PCIXBUS_ERROR_VALIDBITS
{
    ULONGLONG ErrorStatus:1;                                                //0x0
    ULONGLONG ErrorType:1;                                                  //0x0
    ULONGLONG BusId:1;                                                      //0x0
    ULONGLONG BusAddress:1;                                                 //0x0
    ULONGLONG BusData:1;                                                    //0x0
    ULONGLONG BusCommand:1;                                                 //0x0
    ULONGLONG RequesterId:1;                                                //0x0
    ULONGLONG CompleterId:1;                                                //0x0
    ULONGLONG TargetId:1;                                                   //0x0
    ULONGLONG Reserved:55;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_PCIXBUS_ERROR

