#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CM_INDEX_HINT_BLOCK
{
    ULONG Count;                                                            //0x0
    ULONG HashKey[1];                                                       //0x4
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK

