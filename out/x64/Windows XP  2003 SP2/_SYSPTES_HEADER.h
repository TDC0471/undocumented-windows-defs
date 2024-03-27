#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _SYSPTES_HEADER
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONGLONG Count;                                                        //0x10
};
