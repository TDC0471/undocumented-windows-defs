#pragma once
/* ------------------ */

#include <_CM_KEY_NODE.h>
#include <_CM_KEY_VALUE.h>
#include <_CM_KEY_SECURITY.h>
#include <_CM_KEY_INDEX.h>
#include <_CM_BIG_DATA.h>

//0x50 bytes (sizeof)
union _u
{
    struct _CM_KEY_NODE KeyNode;                                            //0x0
    struct _CM_KEY_VALUE KeyValue;                                          //0x0
    struct _CM_KEY_SECURITY KeySecurity;                                    //0x0
    struct _CM_KEY_INDEX KeyIndex;                                          //0x0
    struct _CM_BIG_DATA ValueData;                                          //0x0
    ULONG KeyList[1];                                                       //0x0
    USHORT KeyString[1];                                                    //0x0
};
/* Used in */
// _CELL_DATA

