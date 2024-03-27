#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPARTITION.h>
#include <_EX_PUSH_LOCK.h>

//0x38 bytes (sizeof)
struct _MI_SPECIAL_PURPOSE_MEMORY_STATE
{
    union
    {
        struct
        {
            struct _LIST_ENTRY TypesList;                                   //0x0
            struct _LIST_ENTRY CacheEligibleList;                           //0x10
        };
        struct
        {
            struct _EPARTITION* RegularMemoryParentPartitionObject;         //0x0
            VOID* SpecialPurposeMemoryParentHandle;                         //0x8
            ULONGLONG Attributes[4];                                        //0x10
        };
    };
    struct _EX_PUSH_LOCK Lock;                                              //0x30
};
/* Used in */
// _MI_PARTITION

