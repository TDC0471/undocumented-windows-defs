#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CHILD_LIST
{
    ULONG Count;                                                            //0x0
    ULONG List;                                                             //0x4
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_NODE
// _CM_UOW_SET_VALUE_LIST_DATA

