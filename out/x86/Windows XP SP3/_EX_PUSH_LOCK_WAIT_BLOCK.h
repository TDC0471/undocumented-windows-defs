#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_EX_PUSH_LOCK_WAIT_BLOCK.h>

//0x1c bytes (sizeof)
struct _EX_PUSH_LOCK_WAIT_BLOCK
{
    struct _KEVENT WakeEvent;                                               //0x0
    struct _EX_PUSH_LOCK_WAIT_BLOCK* Next;                                  //0x10
    ULONG ShareCount;                                                       //0x14
    UCHAR Exclusive;                                                        //0x18
};
/* Used in */
// _EX_PUSH_LOCK_WAIT_BLOCK

