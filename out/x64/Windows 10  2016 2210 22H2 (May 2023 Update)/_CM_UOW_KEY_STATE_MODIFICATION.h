#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _CM_UOW_KEY_STATE_MODIFICATION
{
    ULONG RefCount;                                                         //0x0
    ULONG SubKeyListCount[2];                                               //0x4
    ULONG NewSubKeyList[2];                                                 //0xc
};
/* Used in */
// _CM_KCB_UOW

