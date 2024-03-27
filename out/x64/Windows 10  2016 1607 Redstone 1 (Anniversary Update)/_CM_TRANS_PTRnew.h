#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _CM_TRANS_PTR
{
    ULONGLONG LightWeight:1;                                                //0x0
    VOID* TransPtr;                                                         //0x0
};
/* Used in */
// _CM_KEY_BODY
// _CM_TRANS

