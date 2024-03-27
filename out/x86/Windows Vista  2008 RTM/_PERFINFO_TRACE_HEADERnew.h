#pragma once
/* ------------------ */

#include <_WMI_TRACE_PACKET.h>
#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _PERFINFO_TRACE_HEADER
{
    union
    {
        ULONG Marker;                                                       //0x0
        struct
        {
            USHORT Version;                                                 //0x0
            UCHAR HeaderType;                                               //0x2
            UCHAR Flags;                                                    //0x3
        };
    };
    union
    {
        ULONG Header;                                                       //0x4
        struct _WMI_TRACE_PACKET Packet;                                    //0x4
    };
    union
    {
        ULONGLONG TS;                                                       //0x8
        union _LARGE_INTEGER SystemTime;                                    //0x8
    };
    UCHAR Data[1];                                                          //0x10
};
