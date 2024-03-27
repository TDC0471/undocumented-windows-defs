#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct DEBUG_DEVICE_ADDRESS
{
    UCHAR Type;                                                             //0x0
    UCHAR Valid;                                                            //0x1
    union
    {
        UCHAR Reserved[2];                                                  //0x2
        struct
        {
            UCHAR BitWidth;                                                 //0x2
            UCHAR AccessSize;                                               //0x3
        };
    };
    UCHAR* TranslatedAddress;                                               //0x8
    ULONG Length;                                                           //0x10
};
/* Used in */
// _DEBUG_DEVICE_DESCRIPTOR

