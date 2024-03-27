#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
    ULONG Primary:1;                                                        //0x0
    ULONG ContainmentWarning:1;                                             //0x0
    ULONG Reset:1;                                                          //0x0
    ULONG ThresholdExceeded:1;                                              //0x0
    ULONG ResourceNotAvailable:1;                                           //0x0
    ULONG LatentError:1;                                                    //0x0
    ULONG Reserved:26;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR

