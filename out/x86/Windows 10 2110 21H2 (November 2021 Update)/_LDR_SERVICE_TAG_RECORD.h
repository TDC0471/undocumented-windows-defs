#pragma once
/* ------------------ */

#include <_LDR_SERVICE_TAG_RECORD.h>

//0x8 bytes (sizeof)
struct _LDR_SERVICE_TAG_RECORD
{
    struct _LDR_SERVICE_TAG_RECORD* Next;                                   //0x0
    ULONG ServiceTag;                                                       //0x4
};
/* Used in */
// _LDR_DDAG_NODE
// _LDR_SERVICE_TAG_RECORD

