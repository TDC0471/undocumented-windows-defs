#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x328 bytes (sizeof)
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
    ULONGLONG FeatureFlags;                                                 //0x28
    UCHAR HiberFlags;                                                       //0x30
    UCHAR spare[3];                                                         //0x31
    ULONG NoHiberPtes;                                                      //0x34
    ULONG HiberVa;                                                          //0x38
    ULONG NoFreePages;                                                      //0x3c
    ULONG FreeMapCheck;                                                     //0x40
    ULONG WakeCheck;                                                        //0x44
    ULONGLONG NumPagesForLoader;                                            //0x48
    ULONG FirstBootRestorePage;                                             //0x50
    ULONG FirstKernelRestorePage;                                           //0x54
    ULONG FirstChecksumRestorePage;                                         //0x58
    ULONGLONG NoChecksumEntries;                                            //0x60
    struct _PO_HIBER_PERF PerfInfo;                                         //0x68
    ULONG FirmwareRuntimeInformationPages;                                  //0x250
    ULONG FirmwareRuntimeInformation[1];                                    //0x254
    ULONG SiLogOffset;                                                      //0x258
    ULONG NoBootLoaderLogPages;                                             //0x25c
    ULONG BootLoaderLogPages[24];                                           //0x260
    ULONG NotUsed;                                                          //0x2c0
    ULONG ResumeContextCheck;                                               //0x2c4
    ULONG ResumeContextPages;                                               //0x2c8
    UCHAR Hiberboot;                                                        //0x2cc
    ULONGLONG HvCr3;                                                        //0x2d0
    ULONGLONG HvEntryPoint;                                                 //0x2d8
    ULONGLONG HvReservedTransitionAddress;                                  //0x2e0
    ULONGLONG HvReservedTransitionAddressSize;                              //0x2e8
    ULONGLONG BootFlags;                                                    //0x2f0
    ULONGLONG HalEntryPointPhysical;                                        //0x2f8
    ULONG HighestPhysicalPage;                                              //0x300
    ULONG BitlockerKeyPfns[4];                                              //0x304
    ULONG HardwareSignature;                                                //0x314
    union _LARGE_INTEGER SMBiosTablePhysicalAddress;                        //0x318
    ULONG SMBiosTableLength;                                                //0x320
    UCHAR SMBiosMajorVersion;                                               //0x324
    UCHAR SMBiosMinorVersion;                                               //0x325
};
/* Used in */
// _POP_HIBER_CONTEXT

