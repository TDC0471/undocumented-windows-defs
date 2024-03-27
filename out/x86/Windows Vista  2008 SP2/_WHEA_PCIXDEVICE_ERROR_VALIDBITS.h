#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_PCIXDEVICE_ERROR_VALIDBITS
{
    ULONGLONG ErrorStatus:1;                                                //0x0
    ULONGLONG IdInfo:1;                                                     //0x0
    ULONGLONG MemoryNumber:1;                                               //0x0
    ULONGLONG IoNumber:1;                                                   //0x0
    ULONGLONG RegisterDataPairs:1;                                          //0x0
    ULONGLONG Reserved:59;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_PCIXDEVICE_ERROR

