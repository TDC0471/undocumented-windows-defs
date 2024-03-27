#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x48 bytes (sizeof)
struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR
{
    ULONG Version;                                                          //0x0
    ULONG Size;                                                             //0x4
    ULONG CryptoIndex;                                                      //0x8
    ULONG AlgorithmId;                                                      //0xc
    ULONG DataUnitSize;                                                     //0x10
    ULONG KeySize;                                                          //0x14
    UCHAR KeyHash[32];                                                      //0x18
    VOID* KeyVirtualAddress;                                                //0x38
    union _LARGE_INTEGER KeyPhysicalAddress;                                //0x40
};
/* Used in */
// _IO_ADAPTER_CRYPTO_PARAMETERS

