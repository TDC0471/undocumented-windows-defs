#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x2c8 bytes (sizeof)
struct PO_MEMORY_IMAGE
{
    ULONG Signature;                                                        //0x0
    ULONG ImageType;                                                        //0x4
    ULONG CheckSum;                                                         //0x8
    ULONG LengthSelf;                                                       //0xc
    ULONG PageSelf;                                                         //0x10
    ULONG PageSize;                                                         //0x14
    union _LARGE_INTEGER SystemTime;                                        //0x18
    ULONGLONG InterruptTime;                                                //0x20
    ULONG FeatureFlags;                                                     //0x28
    UCHAR HiberFlags;                                                       //0x2c
    UCHAR spare[3];                                                         //0x2d
    ULONG NoHiberPtes;                                                      //0x30
    ULONG HiberVa;                                                          //0x34
    ULONG NoFreePages;                                                      //0x38
    ULONG FreeMapCheck;                                                     //0x3c
    ULONG WakeCheck;                                                        //0x40
    ULONGLONG NumPagesForLoader;                                            //0x48
    ULONG FirstBootRestorePage;                                             //0x50
    ULONG FirstKernelRestorePage;                                           //0x54
    struct _PO_HIBER_PERF PerfInfo;                                         //0x58
    ULONG FirmwareRuntimeInformationPages;                                  //0x200
    ULONG FirmwareRuntimeInformation[1];                                    //0x204
    ULONG SiLogOffset;                                                      //0x208
    ULONG NoBootLoaderLogPages;                                             //0x20c
    ULONG BootLoaderLogPages[24];                                           //0x210
    ULONG NotUsed;                                                          //0x270
    ULONG ResumeContextCheck;                                               //0x274
    ULONG ResumeContextPages;                                               //0x278
    UCHAR Hiberboot;                                                        //0x27c
    ULONGLONG HvCr3;                                                        //0x280
    ULONGLONG HvEntryPoint;                                                 //0x288
    ULONGLONG HvReservedTransitionAddress;                                  //0x290
    ULONGLONG HvReservedTransitionAddressSize;                              //0x298
    ULONGLONG BootFlags;                                                    //0x2a0
    ULONGLONG HalEntryPointPhysical;                                        //0x2a8
    ULONG HighestPhysicalPage;                                              //0x2b0
    ULONG BitlockerKeyPfns[4];                                              //0x2b4
    ULONG HardwareSignature;                                                //0x2c4
};
/* Used in */
// _POP_HIBER_CONTEXT

