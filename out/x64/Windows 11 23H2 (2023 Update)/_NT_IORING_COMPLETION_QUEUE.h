#pragma once
/* ------------------ */

#include <_NT_IORING_CQE.h>

//0x20 bytes (sizeof)
struct _NT_IORING_COMPLETION_QUEUE
{
    ULONG Head;                                                             //0x0
    ULONG Tail;                                                             //0x4
    struct _NT_IORING_CQE Entries[1];                                       //0x8
};
/* Used in */
// _IORING_OBJECT
// _NT_IORING_INFO

