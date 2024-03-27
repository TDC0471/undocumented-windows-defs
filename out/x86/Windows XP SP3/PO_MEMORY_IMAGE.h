#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PO_HIBER_PERF.h>

//0xa8 bytes (sizeof)
struct PO_MEMORY_IMAGE
{
    ULONG Signature;                                                        //0x0
    ULONG Version;                                                          //0x4
    ULONG CheckSum;                                                         //0x8
    ULONG LengthSelf;                                                       //0xc
    ULONG PageSelf;                                                         //0x10
    ULONG PageSize;                                                         //0x14
    ULONG ImageType;                                                        //0x18
    union _LARGE_INTEGER SystemTime;                                        //0x20
    ULONGLONG InterruptTime;                                                //0x28
    ULONG FeatureFlags;                                                     //0x30
    UCHAR HiberFlags;                                                       //0x34
    UCHAR spare[3];                                                         //0x35
    ULONG NoHiberPtes;                                                      //0x38
    ULONG HiberVa;                                                          //0x3c
    union _LARGE_INTEGER HiberPte;                                          //0x40
    ULONG NoFreePages;                                                      //0x48
    ULONG FreeMapCheck;                                                     //0x4c
    ULONG WakeCheck;                                                        //0x50
    ULONG TotalPages;                                                       //0x54
    ULONG FirstTablePage;                                                   //0x58
    ULONG LastFilePage;                                                     //0x5c
    struct _PO_HIBER_PERF PerfInfo;                                         //0x60
};
/* Used in */
// _POP_HIBER_CONTEXT

