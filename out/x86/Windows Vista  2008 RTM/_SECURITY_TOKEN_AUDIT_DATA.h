#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _SECURITY_TOKEN_AUDIT_DATA
{
    ULONG Length;                                                           //0x0
    ULONG GrantMask;                                                        //0x4
    ULONG DenyMask;                                                         //0x8
};
/* Used in */
// _TOKEN

