#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _MCG_CAP
{
    ULONGLONG CountField:8;                                                 //0x0
    ULONGLONG ControlMsrPresent:1;                                          //0x0
    ULONGLONG ExtendedMsrsPresent:1;                                        //0x0
    ULONGLONG SignalingExtensionPresent:1;                                  //0x0
    ULONGLONG ThresholdErrorStatusPresent:1;                                //0x0
    ULONGLONG Reserved:4;                                                   //0x0
    ULONGLONG ExtendedRegisterCount:8;                                      //0x0
    ULONGLONG SoftwareErrorRecoverySupported:1;                             //0x0
    ULONGLONG EnhancedMachineCheckCapability:1;                             //0x0
    ULONGLONG ExtendedErrorLogging:1;                                       //0x0
    ULONGLONG LocalMachineCheckException:1;                                 //0x0
    ULONGLONG QuadPart;                                                     //0x0
};
/* Used in */
// _WHEA_XPF_MCA_SECTION

