#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _MCG_STATUS
{
    ULONG RestartIpValid:1;                                                 //0x0
    ULONG ErrorIpValid:1;                                                   //0x0
    ULONG MachineCheckInProgress:1;                                         //0x0
    ULONG LocalMceValid:1;                                                  //0x0
    struct
    {
        ULONG Reserved1:28;                                                 //0x0
        ULONG Reserved2;                                                    //0x4
    };
    ULONGLONG QuadPart;                                                     //0x0
};
/* Used in */
// _WHEA_XPF_MCA_SECTION

