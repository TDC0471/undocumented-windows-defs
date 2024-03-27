#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_KTHREAD.h>
#include <_CM_KEY_HASH.h>

//0x18 bytes (sizeof)
struct _CM_KEY_HASH_TABLE_ENTRY
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _KTHREAD* Owner;                                                 //0x8
    struct _CM_KEY_HASH* Entry;                                             //0x10
};
/* Used in */
// _CMHIVE

