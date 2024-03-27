#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>

//0xc bytes (sizeof)
struct _MM_PAGED_POOL_INFO
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    ULONG MaximumSize;                                                      //0x4
    ULONG AllocatedPagedPool;                                               //0x8
};
/* Used in */
// _MI_VISIBLE_STATE
// _MM_SESSION_SPACE

