#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_PNP_RESERVED_PROVIDER_INFO.h>

//0x20 bytes (sizeof)
struct _PNP_PROVIDER_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR ProviderType;                                                     //0x10
    UCHAR Satisfied;                                                        //0x11
    USHORT Flags;                                                           //0x12
    union
    {
        struct _DEVICE_OBJECT* ProviderPdo;                                 //0x18
        struct _PNP_RESERVED_PROVIDER_INFO* ProviderReservation;            //0x18
    } u;                                                                    //0x18
};
