#pragma once
/* ------------------ */

#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE.h>

//0x40 bytes (sizeof)
struct _MMWSL_SHARED
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG LastInitializedWsle;                                              //0xc
    ULONG WsleSize;                                                         //0x10
    ULONG NonDirectCount;                                                   //0x14
    VOID* LowestPagableAddress;                                             //0x18
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x1c
    struct _MMWSLE_HASH* HashTableStart;                                    //0x20
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x24
    struct _MMWSLE* Wsle;                                                   //0x30
};
/* Used in */
// _MMWSL_FULL

