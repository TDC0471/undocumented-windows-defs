#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0x128 bytes (sizeof)
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
    union _LARGE_INTEGER HiberPte;                                          //0x48
    ULONG NoFreePages;                                                      //0x50
    ULONG FreeMapCheck;                                                     //0x54
    ULONG WakeCheck;                                                        //0x58
    ULONGLONG TotalPages;                                                   //0x60
    ULONGLONG FirstTablePage;                                               //0x68
    ULONGLONG LastFilePage;                                                 //0x70
    struct _PO_HIBER_PERF PerfInfo;                                         //0x78
    ULONG NoBootLoaderLogPages;                                             //0xd8
    ULONGLONG BootLoaderLogPages[8];                                        //0xe0
    ULONG TotalPhysicalMemoryCount;                                         //0x120
};
/* Used in */
// _POP_HIBER_CONTEXT

