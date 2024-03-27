#pragma once
/* ------------------ */

#include <_BOOT_ENTROPY_SOURCE_LDR_RESULT.h>

//0x868 bytes (sizeof)
struct _BOOT_ENTROPY_LDR_RESULT
{
    ULONG maxEntropySources;                                                //0x0
    struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[10];         //0x8
    UCHAR SeedBytesForCng[48];                                              //0x418
    UCHAR RngBytesForNtoskrnl[1024];                                        //0x448
    UCHAR KdEntropy[32];                                                    //0x848
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

