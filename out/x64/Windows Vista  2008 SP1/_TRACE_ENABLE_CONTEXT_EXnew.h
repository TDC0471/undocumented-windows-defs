#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _TRACE_ENABLE_CONTEXT_EX
{
    USHORT LoggerId;                                                        //0x0
    UCHAR Level;                                                            //0x2
    UCHAR InternalFlag;                                                     //0x3
    ULONG EnableFlags;                                                      //0x4
    ULONG EnableFlagsHigh;                                                  //0x8
    ULONG Reserved;                                                         //0xc
};
