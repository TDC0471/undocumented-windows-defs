#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _PPC_DBGKD_CONTROL_SET
{
    ULONG Continue;                                                         //0x0
    ULONG CurrentSymbolStart;                                               //0x4
    ULONG CurrentSymbolEnd;                                                 //0x8
};
/* Used in */
// _DBGKD_ANY_CONTROL_SET

