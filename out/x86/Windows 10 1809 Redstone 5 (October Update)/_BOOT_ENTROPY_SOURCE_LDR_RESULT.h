#pragma once
/* ------------------ */

#include <_BOOT_ENTROPY_SOURCE_ID.h>
#include <_BOOT_ENTROPY_SOURCE_RESULT_CODE.h>

//0x68 bytes (sizeof)
struct _BOOT_ENTROPY_SOURCE_LDR_RESULT
{
    enum _BOOT_ENTROPY_SOURCE_ID SourceId;                                  //0x0
    ULONGLONG Policy;                                                       //0x8
    enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;                       //0x10
    LONG ResultStatus;                                                      //0x14
    ULONGLONG Time;                                                         //0x18
    ULONG EntropyLength;                                                    //0x20
    UCHAR EntropyData[64];                                                  //0x24
};
/* Used in */
// _BOOT_ENTROPY_LDR_RESULT

