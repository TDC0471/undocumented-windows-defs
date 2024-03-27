#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _CM_UOW_SET_VALUE_KEY_DATA
{
    ULONG PreparedCell;                                                     //0x0
    ULONG OldValueCell;                                                     //0x4
    USHORT NameLength;                                                      //0x8
    ULONG DataSize;                                                         //0xc
};
/* Used in */
// _CM_KCB_UOW

