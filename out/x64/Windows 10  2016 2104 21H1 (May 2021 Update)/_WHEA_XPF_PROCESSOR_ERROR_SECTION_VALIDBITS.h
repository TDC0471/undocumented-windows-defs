#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS
{
    ULONGLONG LocalAPICId:1;                                                //0x0
    ULONGLONG CpuId:1;                                                      //0x0
    ULONGLONG ProcInfoCount:6;                                              //0x0
    ULONGLONG ContextInfoCount:6;                                           //0x0
    ULONGLONG Reserved:50;                                                  //0x0
    ULONGLONG ValidBits;                                                    //0x0
};
/* Used in */
// _WHEA_XPF_PROCESSOR_ERROR_SECTION

