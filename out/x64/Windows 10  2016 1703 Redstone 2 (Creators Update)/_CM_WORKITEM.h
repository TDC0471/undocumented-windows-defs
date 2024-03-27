#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _CM_WORKITEM
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Private;                                                          //0x10
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0x18
    VOID* Parameter;                                                        //0x20
};
/* Used in */
// _CMHIVE

