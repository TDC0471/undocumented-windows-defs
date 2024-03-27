#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_EX_PUSH_LOCK_WAIT_BLOCK.h>

//0x30 bytes (sizeof)
struct _EX_PUSH_LOCK_WAIT_BLOCK
{
    struct _KEVENT WakeEvent;                                               //0x0
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Next;                                  //0x10
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Last;                                  //0x14
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Previous;                              //0x18
    LONG ShareCount;                                                        //0x1c
    LONG Flags;                                                             //0x20
};
/* Used in */
// _EX_PUSH_LOCK_WAIT_BLOCK

