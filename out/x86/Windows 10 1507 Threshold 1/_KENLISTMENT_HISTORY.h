#pragma once
/* ------------------ */

#include <_KENLISTMENT_STATE.h>

//0x8 bytes (sizeof)
struct _KENLISTMENT_HISTORY
{
    ULONG Notification;                                                     //0x0
    enum _KENLISTMENT_STATE NewState;                                       //0x4
};
/* Used in */
// _KENLISTMENT

