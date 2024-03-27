#pragma once
/* ------------------ */

#include <_CLIENT_ID.h>

//0x28 bytes (sizeof)
struct _PORT_MESSAGE
{
    union
    {
        struct
        {
            SHORT DataLength;                                               //0x0
            SHORT TotalLength;                                              //0x2
        } s1;                                                               //0x0
        ULONG Length;                                                       //0x0
    } u1;                                                                   //0x0
    union
    {
        struct
        {
            SHORT Type;                                                     //0x4
            SHORT DataInfoOffset;                                           //0x6
        } s2;                                                               //0x4
        ULONG ZeroInit;                                                     //0x4
    } u2;                                                                   //0x4
    union
    {
        struct _CLIENT_ID ClientId;                                         //0x8
        double DoNotUseThisField;                                           //0x8
    };
    ULONG MessageId;                                                        //0x18
    union
    {
        ULONGLONG ClientViewSize;                                           //0x20
        ULONG CallbackId;                                                   //0x20
    };
};
/* Used in */
// _LPCP_MESSAGE

