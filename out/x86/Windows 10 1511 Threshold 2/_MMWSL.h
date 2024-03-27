#pragma once
/* ------------------ */

#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>
#include <_MI_ACTIVE_WSLE_LISTHEAD.h>
#include <_MMWSLE.h>
#include <_MI_USER_VA_INFO.h>

//0xe48 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    ULONG LastInitializedWsle;                                              //0x10
    ULONG NextAgingSlot;                                                    //0x14
    ULONG NextAccessClearingSlot;                                           //0x18
    ULONG LastAccessClearingRemainder;                                      //0x1c
    ULONG LastAgingRemainder;                                               //0x20
    ULONG WsleSize;                                                         //0x24
    ULONG NonDirectCount;                                                   //0x28
    VOID* LowestPagableAddress;                                             //0x2c
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x30
    struct _MMWSLE_HASH* HashTableStart;                                    //0x34
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x38
    ULONG ActiveWsleCounts[16];                                             //0x3c
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];                        //0x7c
    struct _MMWSLE* Wsle;                                                   //0xfc
    struct _MI_USER_VA_INFO UserVaInfo;                                     //0x100
};
/* Used in */
// _MI_SESSION_STATE
// _MMSUPPORT

