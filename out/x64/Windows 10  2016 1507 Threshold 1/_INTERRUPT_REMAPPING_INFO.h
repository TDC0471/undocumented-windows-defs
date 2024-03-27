#pragma once
/* ------------------ */

#include <_ULARGE_INTEGER.h>

//0x10 bytes (sizeof)
struct _INTERRUPT_REMAPPING_INFO
{
    ULONG IrtIndex:30;                                                      //0x0
    ULONG FlagHalInternal:1;                                                //0x0
    ULONG FlagTranslated:1;                                                 //0x0
    union
    {
        union _ULARGE_INTEGER RemappedFormat;                               //0x8
        struct
        {
            ULONG MessageAddressLow;                                        //0x8
            USHORT MessageData;                                             //0xc
            USHORT Reserved;                                                //0xe
        } Msi;                                                              //0x8
    } u;                                                                    //0x8
};
/* Used in */
// _INTERRUPT_VECTOR_DATA

