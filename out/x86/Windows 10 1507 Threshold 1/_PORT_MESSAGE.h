#pragma once
/* ------------------ */

#include <_CLIENT_ID.h>

//0x18 bytes (sizeof)
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
    ULONG MessageId;                                                        //0x10
    union
    {
        ULONG ClientViewSize;                                               //0x14
        ULONG CallbackId;                                                   //0x14
    };
};
/* Used in */
// _KALPC_MESSAGE
// _LPCP_MESSAGE

