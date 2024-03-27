#pragma once
/* ------------------ */

#include <_WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS.h>

//0x41 bytes (sizeof)
struct _WHEA_XPF_PROCESSOR_ERROR_SECTION
{
    union _WHEA_XPF_PROCESSOR_ERROR_SECTION_VALIDBITS ValidBits;            //0x0
    ULONGLONG LocalAPICId;                                                  //0x8
    UCHAR CpuId[48];                                                        //0x10
    UCHAR VariableInfo[1];                                                  //0x40
};
