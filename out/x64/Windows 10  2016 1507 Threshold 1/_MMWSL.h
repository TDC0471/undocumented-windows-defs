#pragma once
/* ------------------ */

#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>
#include <_MI_ACTIVE_WSLE_LISTHEAD.h>
#include <_MMWSLE.h>
#include <_MI_USER_VA_INFO.h>

//0x300 bytes (sizeof)
struct _MMWSL
{
    ULONGLONG FirstFree;                                                    //0x0
    ULONGLONG FirstDynamic;                                                 //0x8
    ULONGLONG LastEntry;                                                    //0x10
    ULONGLONG NextSlot;                                                     //0x18
    ULONGLONG LastInitializedWsle;                                          //0x20
    ULONGLONG NextAgingSlot;                                                //0x28
    ULONGLONG NextAccessClearingSlot;                                       //0x30
    ULONG LastAccessClearingRemainder;                                      //0x38
    ULONG LastAgingRemainder;                                               //0x3c
    ULONG WsleSize;                                                         //0x40
    ULONGLONG NonDirectCount;                                               //0x48
    VOID* LowestPagableAddress;                                             //0x50
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x58
    struct _MMWSLE_HASH* HashTableStart;                                    //0x60
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x68
    ULONGLONG ActiveWsleCounts[16];                                         //0x70
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];                        //0xf0
    struct _MMWSLE* Wsle;                                                   //0x1f0
    struct _MI_USER_VA_INFO UserVaInfo;                                     //0x1f8
};
/* Used in */
// _MI_SESSION_STATE
// _MMSUPPORT

