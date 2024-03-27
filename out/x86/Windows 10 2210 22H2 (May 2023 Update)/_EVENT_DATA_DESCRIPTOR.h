#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EVENT_DATA_DESCRIPTOR
{
    ULONGLONG Ptr;                                                          //0x0
    ULONG Size;                                                             //0x8
    union
    {
        ULONG Reserved;                                                     //0xc
        struct
        {
            UCHAR Type;                                                     //0xc
            UCHAR Reserved1;                                                //0xd
            USHORT Reserved2;                                               //0xe
        };
    };
};
