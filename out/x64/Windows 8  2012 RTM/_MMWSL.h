#pragma once
/* ------------------ */

#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>
#include <_MI_ACTIVE_WSLE.h>
#include <_MMWSLE.h>
#include <_MI_USER_VA_INFO.h>

//0x530 bytes (sizeof)
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
    VOID* LowestPagableAddress;                                             //0x30
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x38
    struct _MMWSLE_HASH* HashTableStart;                                    //0x40
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x48
    ULONG ActiveWsleCounts[8];                                              //0x50
    struct _MI_ACTIVE_WSLE ActiveWsles[8];                                  //0x70
    struct _MMWSLE* Wsle;                                                   //0xb0
    struct _MI_USER_VA_INFO UserVaInfo;                                     //0xb8
};
/* Used in */
// _MMSUPPORT

