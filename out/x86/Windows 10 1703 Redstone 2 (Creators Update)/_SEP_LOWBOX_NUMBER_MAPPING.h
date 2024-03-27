#pragma once
/* ------------------ */

#include <_EX_PUSH_LOCK.h>
#include <_RTL_BITMAP.h>
#include <_RTL_DYNAMIC_HASH_TABLE.h>

//0x14 bytes (sizeof)
struct _SEP_LOWBOX_NUMBER_MAPPING
{
    struct _EX_PUSH_LOCK Lock;                                              //0x0
    struct _RTL_BITMAP Bitmap;                                              //0x4
    struct _RTL_DYNAMIC_HASH_TABLE* HashTable;                              //0xc
    UCHAR Active;                                                           //0x10
};
/* Used in */
// _SESSION_LOWBOX_MAP

