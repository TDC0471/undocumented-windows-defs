#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _PPM_VETO_ACCOUNTING
{
    volatile LONG VetoPresent;                                              //0x0
    struct _LIST_ENTRY VetoListHead;                                        //0x4
};
/* Used in */
// _PPM_IDLE_STATE

