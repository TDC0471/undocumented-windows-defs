#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _PS_PROPERTY_SET
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    ULONGLONG Lock;                                                         //0x10
};
/* Used in */
// _EJOB
// _ETHREAD

