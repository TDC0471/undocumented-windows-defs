#pragma once
/* ------------------ */

#include <_CM_KCB_UOW.h>

//0x10 bytes (sizeof)
struct _CM_INTENT_LOCK
{
    ULONG OwnerCount;                                                       //0x0
    struct _CM_KCB_UOW** OwnerTable;                                        //0x8
};
/* Used in */
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK

