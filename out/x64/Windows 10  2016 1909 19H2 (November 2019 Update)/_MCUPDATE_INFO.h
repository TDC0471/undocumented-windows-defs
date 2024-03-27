#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _MCUPDATE_INFO
{
    struct _LIST_ENTRY List;                                                //0x0
    ULONG Status;                                                           //0x10
    ULONGLONG Id;                                                           //0x18
    ULONGLONG VendorScratch[2];                                             //0x20
};
