#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2
{
    ULONG Version;                                                          //0x0
    ULONG AbnormalResetOccurred;                                            //0x4
    ULONG OfflineMemoryDumpCapable;                                         //0x8
    union _LARGE_INTEGER ResetDataAddress;                                  //0x10
    ULONG ResetDataSize;                                                    //0x18
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

