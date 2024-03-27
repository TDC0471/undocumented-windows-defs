#pragma once
/* ------------------ */

#include <_RTL_CRITICAL_SECTION.h>
#include <_ERESOURCE.h>

//0x38 bytes (sizeof)
struct _HEAP_LOCK
{
    union
    {
        struct _RTL_CRITICAL_SECTION CriticalSection;                       //0x0
        struct _ERESOURCE Resource;                                         //0x0
    } Lock;                                                                 //0x0
};
/* Used in */
// _HEAP

