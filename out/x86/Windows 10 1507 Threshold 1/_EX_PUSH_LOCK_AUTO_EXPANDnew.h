#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_EX_PUSH_LOCK_AUTO_EXPAND_STATE.h>

//0xc bytes (sizeof)
struct _EX_PUSH_LOCK_AUTO_EXPAND
{
    struct _EX_PUSH_LOCK LocalLock;                                         //0x0
    struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State;                           //0x4
    ULONG Stats;                                                            //0x8
};
