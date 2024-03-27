#pragma once
/* ------------------ */

#include <_GUID.h>

//0x13 bytes (sizeof)
struct _TlgProviderMetadata_t
{
    UCHAR Type;                                                             //0x0
    struct _GUID ProviderId;                                                //0x1
    USHORT RemainingSize;                                                   //0x11
};
