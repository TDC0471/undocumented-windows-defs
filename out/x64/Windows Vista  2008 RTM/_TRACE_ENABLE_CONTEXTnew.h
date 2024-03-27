#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _TRACE_ENABLE_CONTEXT
{
    USHORT LoggerId;                                                        //0x0
    UCHAR Level;                                                            //0x2
    UCHAR InternalFlag;                                                     //0x3
    ULONG EnableFlags;                                                      //0x4
};
/* Used in */
// _ETW_GUID_ENTRY

