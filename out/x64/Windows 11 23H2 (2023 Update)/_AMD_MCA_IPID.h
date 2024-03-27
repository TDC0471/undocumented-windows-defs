#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _AMD_MCA_IPID
{
    ULONGLONG InstanceId:32;                                                //0x0
    ULONGLONG HardwareId:12;                                                //0x0
    ULONGLONG Reserved:4;                                                   //0x0
    ULONGLONG McaType:16;                                                   //0x0
    ULONGLONG AsUINT64;                                                     //0x0
};
