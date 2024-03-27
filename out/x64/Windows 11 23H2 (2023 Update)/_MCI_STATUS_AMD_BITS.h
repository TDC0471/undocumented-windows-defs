#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MCI_STATUS_AMD_BITS
{
    ULONGLONG McaErrorCode:16;                                              //0x0
    ULONGLONG ModelErrorCode:16;                                            //0x0
    ULONGLONG ImplementationSpecific2:11;                                   //0x0
    ULONGLONG Poison:1;                                                     //0x0
    ULONGLONG Deferred:1;                                                   //0x0
    ULONGLONG ImplementationSpecific1:12;                                   //0x0
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

