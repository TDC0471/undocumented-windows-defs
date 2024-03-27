#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x3c8 bytes (sizeof)
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
    ULONGLONG FeatureFlags;                                                 //0x30
    UCHAR HiberFlags;                                                       //0x38
    UCHAR spare[3];                                                         //0x39
    ULONG NoHiberPtes;                                                      //0x3c
    ULONGLONG HiberVa;                                                      //0x40
    ULONG NoFreePages;                                                      //0x48
    ULONG FreeMapCheck;                                                     //0x4c
    ULONG WakeCheck;                                                        //0x50
    ULONGLONG NumPagesForLoader;                                            //0x58
    ULONGLONG FirstSecureRestorePage;                                       //0x60
    ULONGLONG FirstBootRestorePage;                                         //0x68
    ULONGLONG FirstKernelRestorePage;                                       //0x70
    ULONGLONG FirstChecksumRestorePage;                                     //0x78
    ULONGLONG NoChecksumEntries;                                            //0x80
    struct _PO_HIBER_PERF PerfInfo;                                         //0x88
    ULONG FirmwareRuntimeInformationPages;                                  //0x270
    ULONGLONG FirmwareRuntimeInformation[1];                                //0x278
    ULONG SiLogOffset;                                                      //0x280
    ULONG NoBootLoaderLogPages;                                             //0x284
    ULONGLONG BootLoaderLogPages[24];                                       //0x288
    ULONG NotUsed;                                                          //0x348
    ULONG ResumeContextCheck;                                               //0x34c
    ULONG ResumeContextPages;                                               //0x350
    UCHAR Hiberboot;                                                        //0x354
    ULONGLONG HvCr3;                                                        //0x358
    ULONGLONG HvEntryPoint;                                                 //0x360
    ULONGLONG HvReservedTransitionAddress;                                  //0x368
    ULONGLONG HvReservedTransitionAddressSize;                              //0x370
    ULONGLONG BootFlags;                                                    //0x378
    ULONGLONG HalEntryPointPhysical;                                        //0x380
    ULONGLONG HighestPhysicalPage;                                          //0x388
    ULONGLONG BitlockerKeyPfns[4];                                          //0x390
    ULONG HardwareSignature;                                                //0x3b0
    union _LARGE_INTEGER SMBiosTablePhysicalAddress;                        //0x3b8
    ULONG SMBiosTableLength;                                                //0x3c0
    UCHAR SMBiosMajorVersion;                                               //0x3c4
    UCHAR SMBiosMinorVersion;                                               //0x3c5
};
/* Used in */
// _POP_HIBER_CONTEXT

