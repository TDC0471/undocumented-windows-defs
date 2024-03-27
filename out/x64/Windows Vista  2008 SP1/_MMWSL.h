#pragma once
/* ------------------ */

#include <_MMWSLE.h>
#include <_MMWSLE_NONDIRECT_HASH.h>
#include <_MMWSLE_HASH.h>

//0x498 bytes (sizeof)
struct _MMWSL
{
    ULONG FirstFree;                                                        //0x0
    ULONG FirstDynamic;                                                     //0x4
    ULONG LastEntry;                                                        //0x8
    ULONG NextSlot;                                                         //0xc
    struct _MMWSLE* Wsle;                                                   //0x10
    VOID* LowestPagableAddress;                                             //0x18
    ULONG LastInitializedWsle;                                              //0x20
    ULONG NextEstimationSlot;                                               //0x24
    ULONG NextAgingSlot;                                                    //0x28
    ULONG EstimatedAvailable;                                               //0x2c
    ULONG GrowthSinceLastEstimate;                                          //0x30
    ULONG NumberOfCommittedPageTables;                                      //0x34
    ULONG VadBitMapHint;                                                    //0x38
    ULONG NonDirectCount;                                                   //0x3c
    ULONG LastVadBit;                                                       //0x40
    ULONG MaximumLastVadBit;                                                //0x44
    ULONG LastAllocationSizeHint;                                           //0x48
    ULONG LastAllocationSize;                                               //0x4c
    struct _MMWSLE_NONDIRECT_HASH* NonDirectHash;                           //0x50
    struct _MMWSLE_HASH* HashTableStart;                                    //0x58
    struct _MMWSLE_HASH* HighestPermittedHashAddress;                       //0x60
    VOID* HighestUserAddress;                                               //0x68
    ULONG MaximumUserPageTablePages;                                        //0x70
    ULONG MaximumUserPageDirectoryPages;                                    //0x74
    ULONG* CommittedPageTables;                                             //0x78
    ULONG NumberOfCommittedPageDirectories;                                 //0x80
    ULONGLONG CommittedPageDirectories[128];                                //0x88
    ULONG NumberOfCommittedPageDirectoryParents;                            //0x488
    ULONGLONG CommittedPageDirectoryParents[1];                             //0x490
};
/* Used in */
// _MMSUPPORT

