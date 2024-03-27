#pragma once
/* ------------------ */

#include <_CM_DIRTY_VECTOR_LOG_ENTRY.h>

//0x488 bytes (sizeof)
struct _CM_DIRTY_VECTOR_LOG
{
    volatile ULONG Next;                                                    //0x0
    ULONG Size;                                                             //0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];                              //0x8
};
/* Used in */
// _CMHIVE

