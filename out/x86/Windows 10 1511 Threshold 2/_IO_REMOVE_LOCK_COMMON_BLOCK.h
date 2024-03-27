#pragma once
/* ------------------ */

#include <_KEVENT.h>

//0x18 bytes (sizeof)
struct _IO_REMOVE_LOCK_COMMON_BLOCK
{
    UCHAR Removed;                                                          //0x0
    UCHAR Reserved[3];                                                      //0x1
    LONG IoCount;                                                           //0x4
    struct _KEVENT RemoveEvent;                                             //0x8
};
/* Used in */
// _IO_REMOVE_LOCK

