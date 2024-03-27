#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _LUID
{
    ULONG LowPart;                                                          //0x0
    LONG HighPart;                                                          //0x4
};
/* Used in */
// _ACCESS_STATE
// _LUID_AND_ATTRIBUTES
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN
// _TOKEN_ACCESS_INFORMATION
// _TOKEN_CONTROL
// _TOKEN_SOURCE

