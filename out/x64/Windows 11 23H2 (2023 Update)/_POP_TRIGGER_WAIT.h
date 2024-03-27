#pragma once
/* ------------------ */

#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_POP_ACTION_TRIGGER.h>

//0x38 bytes (sizeof)
struct _POP_TRIGGER_WAIT
{
    struct _KEVENT Event;                                                   //0x0
    LONG Status;                                                            //0x18
    struct _LIST_ENTRY Link;                                                //0x20
    struct _POP_ACTION_TRIGGER* Trigger;                                    //0x30
};
/* Used in */
// _POP_ACTION_TRIGGER

