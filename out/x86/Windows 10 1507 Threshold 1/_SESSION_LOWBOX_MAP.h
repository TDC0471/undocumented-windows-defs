#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SEP_LOWBOX_NUMBER_MAPPING.h>

//0x20 bytes (sizeof)
struct _SESSION_LOWBOX_MAP
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG SessionId;                                                        //0x8
    struct _SEP_LOWBOX_NUMBER_MAPPING LowboxMap;                            //0xc
};
