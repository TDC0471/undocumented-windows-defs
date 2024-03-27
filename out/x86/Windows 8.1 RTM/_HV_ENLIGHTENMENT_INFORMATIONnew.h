#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_ENLIGHTENMENT_INFORMATION
{
    ULONG UseHypercallForAddressSpaceSwitch:1;                              //0x0
    ULONG UseHypercallForLocalFlush:1;                                      //0x0
    ULONG UseHypercallForRemoteFlush:1;                                     //0x0
    ULONG UseApicMsrs:1;                                                    //0x0
    ULONG UseMsrForReset:1;                                                 //0x0
    ULONG UseRelaxedTiming:1;                                               //0x0
    ULONG UseDmaRemapping:1;                                                //0x0
    ULONG UseInterruptRemapping:1;                                          //0x0
    ULONG UseX2ApicMsrs:1;                                                  //0x0
    ULONG DeprecateAutoEoi:1;                                               //0x0
    ULONG Reserved:22;                                                      //0x0
    ULONG LongSpinWaitCount;                                                //0x4
    ULONG ReservedEcx;                                                      //0x8
    ULONG ReservedEdx;                                                      //0xc
};
/* Used in */
// _HV_CPUID_RESULT

