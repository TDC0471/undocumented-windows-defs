#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
{
    struct _CM_KEY_CONTROL_BLOCK* BaseKcb;                                  //0x0
    LONG PrepareStatus;                                                     //0x4
    struct _LIST_ENTRY ClonedKcbListHead;                                   //0x8
};
/* Used in */
// _CM_KCB_UOW

