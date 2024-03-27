#pragma once
/* ------------------ */

#include <_IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR.h>

//0x10 bytes (sizeof)
struct _IO_ADAPTER_CRYPTO_PARAMETERS
{
    ULONGLONG Tweak;                                                        //0x0
    struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR* KeyDescriptor;                //0x8
};
/* Used in */
// _IOP_IRP_EXTENSION

