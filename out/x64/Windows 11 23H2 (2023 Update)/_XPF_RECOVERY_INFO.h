#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _XPF_RECOVERY_INFO
{
    struct
    {
        ULONG NotSupported:1;                                               //0x0
        ULONG Overflow:1;                                                   //0x0
        ULONG ContextCorrupt:1;                                             //0x0
        ULONG RestartIpErrorIpNotValid:1;                                   //0x0
        ULONG NoRecoveryContext:1;                                          //0x0
        ULONG MiscOrAddrNotValid:1;                                         //0x0
        ULONG InvalidAddressMode:1;                                         //0x0
        ULONG HighIrql:1;                                                   //0x0
        ULONG InterruptsDisabled:1;                                         //0x0
        ULONG SwapBusy:1;                                                   //0x0
        ULONG StackOverflow:1;                                              //0x0
        ULONG Reserved:21;                                                  //0x0
    } FailureReason;                                                        //0x0
    struct
    {
        ULONG RecoveryAttempted:1;                                          //0x4
        ULONG HvHandled:1;                                                  //0x4
        ULONG Reserved:30;                                                  //0x4
    } Action;                                                               //0x4
    UCHAR ActionRequired;                                                   //0x8
    UCHAR RecoverySucceeded;                                                //0x9
    UCHAR RecoveryKernel;                                                   //0xa
    UCHAR Reserved;                                                         //0xb
    USHORT Reserved2;                                                       //0xc
    USHORT Reserved3;                                                       //0xe
    ULONG Reserved4;                                                        //0x10
};
/* Used in */
// _WHEA_XPF_MCA_SECTION

