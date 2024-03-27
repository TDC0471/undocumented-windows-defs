#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _ETW_BUFFER_CONTEXT
{
    UCHAR ProcessorNumber;                                                  //0x0
    UCHAR Alignment;                                                        //0x1
    USHORT LoggerId;                                                        //0x2
};
/* Used in */
// _WMI_BUFFER_HEADER

