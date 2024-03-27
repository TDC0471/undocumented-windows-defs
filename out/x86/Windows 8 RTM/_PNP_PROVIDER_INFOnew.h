#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_DEVICE_OBJECT.h>
#include <_PNP_RESERVED_PROVIDER_INFO.h>

//0x10 bytes (sizeof)
struct _PNP_PROVIDER_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR ProviderType;                                                     //0x8
    UCHAR Satisfied;                                                        //0x9
    USHORT Flags;                                                           //0xa
    union
    {
        struct _DEVICE_OBJECT* ProviderPdo;                                 //0xc
        struct _PNP_RESERVED_PROVIDER_INFO* ProviderReservation;            //0xc
    } u;                                                                    //0xc
};
