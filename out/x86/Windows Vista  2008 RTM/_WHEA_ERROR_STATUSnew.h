#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WHEA_ERROR_STATUS
{
    ULONGLONG Reserved1:8;                                                  //0x0
    ULONGLONG ErrorType:8;                                                  //0x0
    ULONGLONG Address:1;                                                    //0x0
    ULONGLONG Control:1;                                                    //0x0
    ULONGLONG Data:1;                                                       //0x0
    ULONGLONG Responder:1;                                                  //0x0
    ULONGLONG Requester:1;                                                  //0x0
    ULONGLONG FirstError:1;                                                 //0x0
    ULONGLONG Overflow:1;                                                   //0x0
    ULONGLONG Reserved2:41;                                                 //0x0
};
/* Used in */
// _WHEA_MEMORY_ERROR
// _WHEA_PCIX_BUS_ERROR
// _WHEA_PCIX_DEVICE_ERROR

