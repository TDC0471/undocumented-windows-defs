#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>

//0x6a8 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    struct _MMWSLE* Wsle;                                                   //0x10
    VOID* LowestPagableAddress;                                             //0x14
    ULONG LastInitializedWsle;                                              //0x18
    ULONG NextEstimationSlot;                                               //0x1c
    ULONG NextAgingSlot;                                                    //0x20
    ULONG EstimatedAvailable;                                               //0x24
    ULONG GrowthSinceLastEstimate;                                          //0x28
    ULONG NumberOfCommittedPageTables;                                      //0x2c
    ULONG VadBitMapHint;                                                    //0x30
    ULONG NonDirectCount;                                                   //0x34
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x38
    struct _MMWSLE_HASH* HashTableStart;                                    //0x3c
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x40
    VOID* HighestUserAddress;                                               //0x44
    USHORT UsedPageTableEntries[768];                                       //0x48
    ULONG CommittedPageTables[24];                                          //0x648
};
/* Used in */
// _MMSUPPORT

