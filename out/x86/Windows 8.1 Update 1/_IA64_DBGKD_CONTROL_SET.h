#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _IA64_DBGKD_CONTROL_SET
{
    ULONG Continue;                                                         //0x0
    ULONGLONG CurrentSymbolStart;                                           //0x4
    ULONGLONG CurrentSymbolEnd;                                             //0xc
};
/* Used in */
// _DBGKD_ANY_CONTROL_SET

