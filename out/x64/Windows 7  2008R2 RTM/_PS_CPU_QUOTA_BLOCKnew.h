#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA.h>
#include <_PS_PER_CPU_QUOTA_CACHE_AWARE.h>

//0x4080 bytes (sizeof)
struct _PS_CPU_QUOTA_BLOCK
{
    union
    {
        struct
        {
            struct _LIST_ENTRY ListEntry;                                   //0x0
            ULONG SessionId;                                                //0x10
            ULONG CpuShareWeight;                                           //0x14
            union _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA CapturedWeightData;   //0x18
            union
            {
                struct
                {
                    ULONG DuplicateInputMarker:1;                           //0x20
                    ULONG Reserved:31;                                      //0x20
                };
                LONG MiscFlags;                                             //0x20
            };
        };
        struct
        {
            ULONGLONG BlockCurrentGenerationLock;                           //0x0
            ULONGLONG CyclesAccumulated;                                    //0x8
        };
    };
    ULONGLONG CycleCredit;                                                  //0x40
    ULONG BlockCurrentGeneration;                                           //0x48
    ULONG CpuCyclePercent;                                                  //0x4c
    UCHAR CyclesFinishedForCurrentGeneration;                               //0x50
    struct _PS_PER_CPU_QUOTA_CACHE_AWARE Cpu[256];                          //0x80
};
/* Used in */
// _EPROCESS
// _MM_SESSION_SPACE
