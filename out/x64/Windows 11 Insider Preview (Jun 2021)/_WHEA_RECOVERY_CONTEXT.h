#pragma once
/* ------------------ */

#include <_WHEA_RECOVERY_CONTEXT_ERROR_TYPE.h>

//0x20 bytes (sizeof)
struct _WHEA_RECOVERY_CONTEXT
{
    union
    {
        struct
        {
            ULONGLONG Address;                                              //0x0
            UCHAR Consumed;                                                 //0x8
            USHORT ErrorCode;                                               //0xa
            UCHAR ErrorIpValid;                                             //0xc
            UCHAR RestartIpValid;                                           //0xd
            UCHAR ClearPoison;                                              //0xe
        } MemoryError;                                                      //0x0
        struct
        {
            ULONGLONG PmemErrInfo;                                          //0x0
        } PmemError;                                                        //0x0
    };
    ULONGLONG PartitionId;                                                  //0x10
    ULONG VpIndex;                                                          //0x18
    enum _WHEA_RECOVERY_CONTEXT_ERROR_TYPE ErrorType;                       //0x1c
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

