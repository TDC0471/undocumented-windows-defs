#pragma once
/* ------------------ */

#include <_CHILD_LIST.h>

//0xc bytes (sizeof)
struct _CM_UOW_SET_VALUE_LIST_DATA
{
    ULONG RefCount;                                                         //0x0
    struct _CHILD_LIST ValueList;                                           //0x4
};
/* Used in */
// _CM_KCB_UOW

