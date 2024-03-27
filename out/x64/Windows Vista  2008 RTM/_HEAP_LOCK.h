#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION.h>

//0x28 bytes (sizeof)
struct _HEAP_LOCK
{
    union
    {
        struct _RTL_CRITICAL_SECTION CriticalSection;                       //0x0
    } Lock;                                                                 //0x0
};
/* Used in */
// _HEAP

