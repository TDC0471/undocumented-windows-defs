#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MCI_STATUS_BITS_COMMON
{
    ULONGLONG McaErrorCode:16;                                              //0x0
    ULONGLONG ModelErrorCode:16;                                            //0x0
    ULONGLONG Reserved:25;                                                  //0x0
    ULONGLONG ContextCorrupt:1;                                             //0x0
    ULONGLONG AddressValid:1;                                               //0x0
    ULONGLONG MiscValid:1;                                                  //0x0
    ULONGLONG ErrorEnabled:1;                                               //0x0
    ULONGLONG UncorrectedError:1;                                           //0x0
    ULONGLONG StatusOverFlow:1;                                             //0x0
    ULONGLONG Valid:1;                                                      //0x0
};
/* Used in */
// _MCI_STATUS

