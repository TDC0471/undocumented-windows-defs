#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x38 bytes (sizeof)
struct _ETW_HASH_BUCKET
{
    struct _LIST_ENTRY ListHead[3];                                         //0x0
    struct _EX_PUSH_LOCK BucketLock;                                        //0x30
};
/* Used in */
// _ETW_SILODRIVERSTATE

