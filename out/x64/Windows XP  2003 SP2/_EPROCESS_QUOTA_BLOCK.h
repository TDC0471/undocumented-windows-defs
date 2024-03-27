#pragma once
/* ------------------ */

#include <_EPROCESS_QUOTA_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x78 bytes (sizeof)
struct _EPROCESS_QUOTA_BLOCK
{
    struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3];                             //0x0
    struct _LIST_ENTRY QuotaList;                                           //0x60
    ULONG ReferenceCount;                                                   //0x70
    ULONG ProcessCount;                                                     //0x74
};
/* Used in */
// _EPROCESS

