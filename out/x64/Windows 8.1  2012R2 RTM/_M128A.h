#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _M128A
{
    ULONGLONG Low;                                                          //0x0
    LONGLONG High;                                                          //0x8
};
/* Used in */
// _CONTEXT
// _KEXCEPTION_FRAME
// _KTRAP_FRAME
// _XSAVE_FORMAT

