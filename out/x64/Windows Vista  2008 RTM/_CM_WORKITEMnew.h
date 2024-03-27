#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _CM_WORKITEM
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0x10
    VOID* Parameter;                                                        //0x18
};
/* Used in */
// _CMHIVE

