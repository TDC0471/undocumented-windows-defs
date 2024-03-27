#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _SYSPTES_HEADER
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG Count;                                                            //0x8
};
