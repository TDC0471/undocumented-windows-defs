#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>

//0x18 bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    ULONGLONG MaximumSize;                                                  //0x8
    ULONGLONG AllocatedPagedPool;                                           //0x10
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

