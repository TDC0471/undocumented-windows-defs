#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x448 bytes (sizeof)
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
    UCHAR HiberSimulateFlags;                                               //0x39
    UCHAR spare[2];                                                         //0x3a
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
    ULONG FirmwareRuntimeInformationPages;                                  //0x2e8
    ULONGLONG FirmwareRuntimeInformation[1];                                //0x2f0
    ULONG SpareUlong;                                                       //0x2f8
    ULONG NoBootLoaderLogPages;                                             //0x2fc
    ULONGLONG BootLoaderLogPages[24];                                       //0x300
    ULONG NotUsed;                                                          //0x3c0
    ULONG ResumeContextCheck;                                               //0x3c4
    ULONG ResumeContextPages;                                               //0x3c8
    UCHAR Hiberboot;                                                        //0x3cc
    UCHAR SecureLaunched;                                                   //0x3cd
    UCHAR SecureBoot;                                                       //0x3ce
    UCHAR Fasr;                                                             //0x3cf
    ULONGLONG HvPageTableRoot;                                              //0x3d0
    ULONGLONG HvEntryPoint;                                                 //0x3d8
    ULONGLONG HvReservedTransitionAddress;                                  //0x3e0
    ULONGLONG HvReservedTransitionAddressSize;                              //0x3e8
    ULONGLONG BootFlags;                                                    //0x3f0
    ULONGLONG RestoreProcessorStateRoutine;                                 //0x3f8
    ULONGLONG HighestPhysicalPage;                                          //0x400
    ULONGLONG BitlockerKeyPfns[4];                                          //0x408
    ULONG HardwareSignature;                                                //0x428
    union _LARGE_INTEGER SMBiosTablePhysicalAddress;                        //0x430
    ULONG SMBiosTableLength;                                                //0x438
    UCHAR SMBiosMajorVersion;                                               //0x43c
    UCHAR SMBiosMinorVersion;                                               //0x43d
    UCHAR HiberResumeXhciHandoffSkip;                                       //0x43e
    UCHAR InitializeUSBCore;                                                //0x43f
    UCHAR ValidUSBCoreId;                                                   //0x440
    UCHAR USBCoreId;                                                        //0x441
    UCHAR SkipMemoryMapValidation;                                          //0x442
    UCHAR SuppressResumePrompt;                                             //0x443
};
/* Used in */
// _POP_HIBER_CONTEXT

