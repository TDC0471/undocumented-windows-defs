#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _SID_AND_ATTRIBUTES
{
    VOID* Sid;                                                              //0x0
    ULONG Attributes;                                                       //0x4
};
/* Used in */
// _PS_JOB_TOKEN_FILTER
// _TOKEN

