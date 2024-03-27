#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _MCUPDATE_INFO
{
    struct _LIST_ENTRY List;                                                //0x0
    ULONG Status;                                                           //0x8
    ULONGLONG Id;                                                           //0x10
    ULONGLONG VendorScratch[2];                                             //0x18
};
