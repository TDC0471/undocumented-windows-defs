#pragma once
/* ------------------ */

#include <_GENERAL_LOOKASIDE.h>

//0x100 bytes (sizeof)
struct _NPAGED_LOOKASIDE_LIST
{
    struct _GENERAL_LOOKASIDE L;                                            //0x0
    ULONG Lock__ObsoleteButDoNotDelete;                                     //0x80
};
