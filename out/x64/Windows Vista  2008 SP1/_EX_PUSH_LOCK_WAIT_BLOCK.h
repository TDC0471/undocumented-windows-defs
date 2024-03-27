#pragma once
/* ------------------ */

#include <_KGATE.h>
#include <_KEVENT.h>
#include <_EX_PUSH_LOCK_WAIT_BLOCK.h>

//0x40 bytes (sizeof)
struct _EX_PUSH_LOCK_WAIT_BLOCK
{
    union
    {
        struct _KGATE WakeGate;                                             //0x0
        struct _KEVENT WakeEvent;                                           //0x0
    };
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Next;                                  //0x18
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Last;                                  //0x20
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Previous;                              //0x28
    LONG ShareCount;                                                        //0x30
    LONG Flags;                                                             //0x34
};
/* Used in */
// _EX_PUSH_LOCK_WAIT_BLOCK

