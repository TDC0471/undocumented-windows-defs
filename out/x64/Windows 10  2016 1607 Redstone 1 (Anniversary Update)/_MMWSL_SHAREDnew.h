#pragma once
/* ------------------ */

#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>
#include <_MMWSLE.h>

//0x60 bytes (sizeof)
struct _MMWSL_SHARED
{
    ULONGLONG FirstFree;                                                    //0x0
    ULONGLONG FirstDynamic;                                                 //0x8
    ULONGLONG LastEntry;                                                    //0x10
    ULONGLONG LastInitializedWsle;                                          //0x18
    ULONG WsleSize;                                                         //0x20
    ULONGLONG NonDirectCount;                                               //0x28
    VOID* LowestPagableAddress;                                             //0x30
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x38
    struct _MMWSLE_HASH* HashTableStart;                                    //0x40
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x48
    struct _MMWSLE* Wsle;                                                   //0x50
};
/* Used in */
// _MI_VISIBLE_STATE
// _MMWSL_FULL

