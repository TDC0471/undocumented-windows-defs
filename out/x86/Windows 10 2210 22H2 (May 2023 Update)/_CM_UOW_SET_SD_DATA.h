#pragma once
/* ------------------ */

#include <_HHIVE.h>

//0x8 bytes (sizeof)
struct _CM_UOW_SET_SD_DATA
{
    ULONG SecurityCell;                                                     //0x0
    struct _HHIVE* Hive;                                                    //0x4
};
/* Used in */
// _CM_KCB_UOW

