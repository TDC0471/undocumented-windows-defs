#pragma once
/* ------------------ */

#include <_MEMORY_CACHING_TYPE.h>

//0x18 bytes (sizeof)
struct _MEMORY_CACHING_REQUIREMENTS
{
    ULONGLONG BasePage;                                                     //0x0
    ULONGLONG PageCount;                                                    //0x8
    enum _MEMORY_CACHING_TYPE MemoryCachingType;                            //0x10
};
/* Used in */
// _KSR_FIRMWARE_INFORMATION

