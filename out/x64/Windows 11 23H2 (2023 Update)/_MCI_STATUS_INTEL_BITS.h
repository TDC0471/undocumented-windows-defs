#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MCI_STATUS_INTEL_BITS
{
    ULONGLONG McaErrorCode:16;                                              //0x0
    ULONGLONG ModelErrorCode:16;                                            //0x0
    ULONGLONG OtherInfo:5;                                                  //0x0
    ULONGLONG FirmwareUpdateError:1;                                        //0x0
    ULONGLONG CorrectedErrorCount:15;                                       //0x0
    ULONGLONG ThresholdErrorStatus:2;                                       //0x0
    ULONGLONG ActionRequired:1;                                             //0x0
    ULONGLONG Signalling:1;                                                 //0x0
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

