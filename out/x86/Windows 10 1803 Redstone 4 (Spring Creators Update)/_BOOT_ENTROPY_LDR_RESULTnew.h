#pragma once
/* ------------------ */

#include <_BOOT_ENTROPY_SOURCE_LDR_RESULT.h>

//0x798 bytes (sizeof)
struct _BOOT_ENTROPY_LDR_RESULT
{
    ULONG maxEntropySources;                                                //0x0
    struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[8];          //0x8
    UCHAR SeedBytesForCng[48];                                              //0x348
    UCHAR RngBytesForNtoskrnl[1024];                                        //0x378
    UCHAR KdEntropy[32];                                                    //0x778
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

