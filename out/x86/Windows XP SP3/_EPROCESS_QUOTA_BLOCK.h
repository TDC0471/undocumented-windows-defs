#pragma once
/* ------------------ */

#include <_EPROCESS_QUOTA_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _EPROCESS_QUOTA_BLOCK
{
    struct _EPROCESS_QUOTA_ENTRY QuotaEntry[3];                             //0x0
    struct _LIST_ENTRY QuotaList;                                           //0x30
    ULONG ReferenceCount;                                                   //0x38
    ULONG ProcessCount;                                                     //0x3c
};
/* Used in */
// _EPROCESS

