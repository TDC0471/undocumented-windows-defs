#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _DBGKD_CONTEXT_EX
{
    ULONG Offset;                                                           //0x0
    ULONG ByteCount;                                                        //0x4
    ULONG BytesCopied;                                                      //0x8
};
/* Used in */
// _DBGKD_MANIPULATE_STATE32
// _DBGKD_MANIPULATE_STATE64

