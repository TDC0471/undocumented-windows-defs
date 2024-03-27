#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0xc bytes (sizeof)
struct _PS_PROPERTY_SET
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONG Lock;                                                             //0x8
};
/* Used in */
// _EJOB
// _ETHREAD

