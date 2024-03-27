#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_CM_KEY_HASH.h>

//0xc bytes (sizeof)
struct _CM_KEY_HASH_TABLE_ENTRY
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _KTHREAD* Owner;                                                 //0x4
    struct _CM_KEY_HASH* Entry;                                             //0x8
};
/* Used in */
// _CMHIVE

