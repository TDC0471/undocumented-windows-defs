#pragma once
/* ------------------ */

#include <_GENERAL_LOOKASIDE.h>
#include <_FAST_MUTEX.h>

//0x100 bytes (sizeof)
struct _PAGED_LOOKASIDE_LIST
{
    struct _GENERAL_LOOKASIDE L;                                            //0x0
    struct _FAST_MUTEX Lock__ObsoleteButDoNotDelete;                        //0x80
};
