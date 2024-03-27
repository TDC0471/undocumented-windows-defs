#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _WHEA_RECOVERY_CONTEXT
{
    struct
    {
        ULONGLONG Address;                                                  //0x0
        UCHAR Consumed;                                                     //0x8
        USHORT ErrorCode;                                                   //0xa
        UCHAR ErrorIpValid;                                                 //0xc
        UCHAR RestartIpValid;                                               //0xd
    } MemoryError;                                                          //0x0
    ULONGLONG PartitionId;                                                  //0x10
    ULONG VpIndex;                                                          //0x18
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

