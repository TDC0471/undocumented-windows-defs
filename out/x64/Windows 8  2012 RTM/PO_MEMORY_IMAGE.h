#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x360 bytes (sizeof)
struct PO_MEMORY_IMAGE
{
    ULONG Signature;                                                        //0x0
    ULONG ImageType;                                                        //0x4
    ULONG CheckSum;                                                         //0x8
    ULONG LengthSelf;                                                       //0xc
    ULONGLONG PageSelf;                                                     //0x10
    ULONG PageSize;                                                         //0x18
    union _LARGE_INTEGER SystemTime;                                        //0x20
    ULONGLONG InterruptTime;                                                //0x28
    ULONG FeatureFlags;                                                     //0x30
    UCHAR HiberFlags;                                                       //0x34
    UCHAR spare[3];                                                         //0x35
    ULONG NoHiberPtes;                                                      //0x38
    ULONGLONG HiberVa;                                                      //0x40
    ULONG NoFreePages;                                                      //0x48
    ULONG FreeMapCheck;                                                     //0x4c
    ULONG WakeCheck;                                                        //0x50
    ULONGLONG NumPagesForLoader;                                            //0x58
    ULONGLONG FirstBootRestorePage;                                         //0x60
    ULONGLONG FirstKernelRestorePage;                                       //0x68
    struct _PO_HIBER_PERF PerfInfo;                                         //0x70
    ULONG FirmwareRuntimeInformationPages;                                  //0x218
    ULONGLONG FirmwareRuntimeInformation[1];                                //0x220
    ULONG SiLogOffset;                                                      //0x228
    ULONG NoBootLoaderLogPages;                                             //0x22c
    ULONGLONG BootLoaderLogPages[24];                                       //0x230
    ULONG NotUsed;                                                          //0x2f0
    ULONG ResumeContextCheck;                                               //0x2f4
    ULONG ResumeContextPages;                                               //0x2f8
    UCHAR Hiberboot;                                                        //0x2fc
    ULONGLONG HvCr3;                                                        //0x300
    ULONGLONG HvEntryPoint;                                                 //0x308
    ULONGLONG HvReservedTransitionAddress;                                  //0x310
    ULONGLONG HvReservedTransitionAddressSize;                              //0x318
    ULONGLONG BootFlags;                                                    //0x320
    ULONGLONG HalEntryPointPhysical;                                        //0x328
    ULONGLONG HighestPhysicalPage;                                          //0x330
    ULONGLONG BitlockerKeyPfns[4];                                          //0x338
    ULONG HardwareSignature;                                                //0x358
};
/* Used in */
// _POP_HIBER_CONTEXT

