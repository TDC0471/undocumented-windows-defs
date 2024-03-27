#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0xf0 bytes (sizeof)
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
    union _LARGE_INTEGER HiberPte;                                          //0x38
    ULONG NoFreePages;                                                      //0x40
    ULONG FreeMapCheck;                                                     //0x44
    ULONG WakeCheck;                                                        //0x48
    ULONG TotalPages;                                                       //0x4c
    ULONG FirstTablePage;                                                   //0x50
    struct _PO_HIBER_PERF PerfInfo;                                         //0x58
    ULONG FirmwareRuntimeInformationPages;                                  //0xb8
    ULONG FirmwareRuntimeInformation[1];                                    //0xbc
    ULONG NoBootLoaderLogPages;                                             //0xc0
    ULONG BootLoaderLogPages[8];                                            //0xc4
    ULONG NotUsed;                                                          //0xe4
    ULONG ResumeContextCheck;                                               //0xe8
    ULONG ResumeContextPages;                                               //0xec
};
/* Used in */
// _POP_HIBER_CONTEXT

