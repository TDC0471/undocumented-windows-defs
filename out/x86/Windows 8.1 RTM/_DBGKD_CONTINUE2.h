#pragma once
/* ------------------ */

#include <_X86_DBGKD_CONTROL_SET.h>
#include <_DBGKD_ANY_CONTROL_SET.h>

//0x20 bytes (sizeof)
struct _DBGKD_CONTINUE2
{
    LONG ContinueStatus;                                                    //0x0
    union
    {
        struct _X86_DBGKD_CONTROL_SET ControlSet;                           //0x4
        struct _DBGKD_ANY_CONTROL_SET AnyControlSet;                        //0x4
    };
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

