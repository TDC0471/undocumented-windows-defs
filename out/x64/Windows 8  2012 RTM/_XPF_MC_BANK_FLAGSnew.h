#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _XPF_MC_BANK_FLAGS
{
    UCHAR ClearOnInitializationRW:1;                                        //0x0
    UCHAR ControlDataRW:1;                                                  //0x0
    UCHAR Reserved:6;                                                       //0x0
    UCHAR AsUCHAR;                                                          //0x0
};
/* Used in */
// _WHEA_XPF_MC_BANK_DESCRIPTOR

