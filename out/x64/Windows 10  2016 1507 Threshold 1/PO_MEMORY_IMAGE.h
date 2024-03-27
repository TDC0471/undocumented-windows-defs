#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x3b0 bytes (sizeof)
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
    ULONG FirmwareRuntimeInformationPages;                                  //0x268
    ULONGLONG FirmwareRuntimeInformation[1];                                //0x270
    ULONG SiLogOffset;                                                      //0x278
    ULONG NoBootLoaderLogPages;                                             //0x27c
    ULONGLONG BootLoaderLogPages[24];                                       //0x280
    ULONG NotUsed;                                                          //0x340
    ULONG ResumeContextCheck;                                               //0x344
    ULONG ResumeContextPages;                                               //0x348
    UCHAR Hiberboot;                                                        //0x34c
    ULONGLONG HvCr3;                                                        //0x350
    ULONGLONG HvEntryPoint;                                                 //0x358
    ULONGLONG HvReservedTransitionAddress;                                  //0x360
    ULONGLONG HvReservedTransitionAddressSize;                              //0x368
    ULONGLONG BootFlags;                                                    //0x370
    ULONGLONG HalEntryPointPhysical;                                        //0x378
    ULONGLONG HighestPhysicalPage;                                          //0x380
    ULONGLONG BitlockerKeyPfns[4];                                          //0x388
    ULONG HardwareSignature;                                                //0x3a8
};
/* Used in */
// _POP_HIBER_CONTEXT

