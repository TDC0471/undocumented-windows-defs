#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _WMI_TRACE_PACKET
{
    USHORT Size;                                                            //0x0
    union
    {
        USHORT HookId;                                                      //0x2
        struct
        {
            UCHAR Type;                                                     //0x2
            UCHAR Group;                                                    //0x3
        };
    };
};
/* Used in */
// _PERFINFO_TRACE_HEADER
// _SYSTEM_TRACE_HEADER

