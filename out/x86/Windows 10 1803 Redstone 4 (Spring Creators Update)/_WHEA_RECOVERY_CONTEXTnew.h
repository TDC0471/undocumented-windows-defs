#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _WHEA_RECOVERY_CONTEXT
{
    struct
    {
        ULONG Address;                                                      //0x0
        UCHAR Consumed;                                                     //0x4
        USHORT ErrorCode;                                                   //0x6
        UCHAR ErrorIpValid;                                                 //0x8
        UCHAR RestartIpValid;                                               //0x9
    } MemoryError;                                                          //0x0
    ULONGLONG PartitionId;                                                  //0x10
    ULONG VpIndex;                                                          //0x18
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

