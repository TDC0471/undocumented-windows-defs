#pragma once
/* ------------------ */

#include <_TPM_BOOT_ENTROPY_RESULT_CODE.h>

//0x48 bytes (sizeof)
struct _TPM_BOOT_ENTROPY_LDR_RESULT
{
    ULONGLONG Policy;                                                       //0x0
    enum _TPM_BOOT_ENTROPY_RESULT_CODE ResultCode;                          //0x8
    LONG ResultStatus;                                                      //0xc
    ULONGLONG Time;                                                         //0x10
    ULONG EntropyLength;                                                    //0x18
    UCHAR EntropyData[40];                                                  //0x1c
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

