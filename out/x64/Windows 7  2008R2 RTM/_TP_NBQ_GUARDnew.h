#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _TP_NBQ_GUARD
{
    struct _LIST_ENTRY GuardLinks;                                          //0x0
    VOID* Guards[2];                                                        //0x10
};
/* Used in */
// _TP_TASK

